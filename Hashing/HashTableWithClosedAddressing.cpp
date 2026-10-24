#include<iostream>
#include<vector>
#include<list>
#include<algorithm>
using namespace std;
class Hashing{
    vector<list<int>>hashtable;
    int buckets;
public:
    Hashing(int size){
        buckets = size;
        hashtable.resize(size);
    }
    int hashvalue(int key){
        return key%buckets;  // division method
    }
    void Insert(int key){
        int index = hashvalue(key);
        hashtable[index].push_back(key); 
    }
    void Delete(int key){

        int idx = hashvalue(key);
        if(Search(key) != hashtable[idx].end()){ 
            hashtable[idx].erase(Search(key));
            cout<<key<<" is deleted"<<endl;
        }
        else cout<<key<<" is not present in the hashtable"<<endl;
    }
    list<int>::iterator Search(int key){
        int idx = hashvalue(key);
        return find(hashtable[idx].begin(),hashtable[idx].end(),key);
    }
};
int main(){
    Hashing* h = new Hashing(10);
    h->Insert(23);
    h->Insert(12);
    h->Insert(4);
    h->Delete(12);
    return 0;
}