#include<iostream>
#include<vector>
#include<climits>
using namespace std;
class Node{
public:
    int val;
    Node* next;
    Node* prev;
    Node(int data){
        val = data;
        next = NULL;
        prev = NULL;
    }
};
class DoublyLinkedList{
public: 
    Node* head;
    Node* tail;
    DoublyLinkedList(){
        head = NULL;
        tail = NULL;
    }
    void display(){
        Node* temp = head;
        while(temp !=NULL){
            cout<<temp->val<<" <-> ";
            temp = temp->next;
        }
        cout<<"NULL"<<endl;
        return;
    }
    void insertAtTail(int x){
        Node* new_node = new Node(x);
        if(tail == NULL){
            head = new_node;
            tail = new_node;
            return;
        }
        new_node->prev = tail;
        tail->next = new_node;
        tail = new_node;
        return;
    }
};
bool isCriticalPoint(Node* &curr){
    if(curr->prev->val < curr->val && curr->next->val < curr->val) return true;
    if(curr->prev->val > curr->val && curr->next->val > curr->val) return true;
    return false;
}
vector<int> criticalPoint(Node* head, Node* tail){
    if(head == NULL || head == tail || head->next == tail) return {-1,-1};
    vector<int>ans(2,INT_MAX);
    int first = -1, last = -1;
    int curpos = 1;
    Node* curr = tail->prev;
    while(curr->prev != NULL){
        if(isCriticalPoint(curr)){
            if(first == -1){
                first = last = curpos;
            }
            else{
                ans[0] = min(ans[0],curpos-last);
                ans[1] = curpos - first;
                last = curpos;
            } 
        }
        curpos++;
        curr = curr->prev;
    }
    if(ans[0] == INT_MAX){
        return {-1,-1};
    }
    return ans;
}
int main(){
    int n, x;
    cout<<"Enter Size of Element: ";
    cin>>n;
    DoublyLinkedList dll;
    cout<<"Enter Element of Doubly Linked List: ";
    for(int i=0;i<n;i++){
        cin>>x;
        dll.insertAtTail(x);
    }
    dll.display();
    vector<int>ans = criticalPoint(dll.head, dll.tail);
    cout<<ans[0]<<"  "<<ans[1];
    
    return 0;
}