#include<iostream>
using namespace std;
template<typename T>
class Node{
public:
    T val;
    Node* next;
    Node(T data){
        val = data;
        next = NULL;
    }
};
int main(){
    Node<int>* new_node = new Node<int>(3);
    cout<<new_node->val<<"  "<<new_node<<endl;
    Node<char> node1('V');
    cout<<node1.val<<"  "<<endl;
}