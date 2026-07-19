#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int> dq;
    dq.push_front(23);
    dq.push_front(33);
    dq.push_front(43);
    dq.push_front(53);
    dq.push_back(67);
    dq.push_back(89);
    while(!dq.empty()){
        cout<<dq.front()<<" ";
        dq.pop_front();
    }
    return 0;
}