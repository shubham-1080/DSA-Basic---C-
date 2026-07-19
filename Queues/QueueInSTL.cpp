#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<int> qu;
    qu.push(23);
    qu.push(13);
    qu.push(43);
    qu.push(53);
    qu.push(63);
    qu.push(73);
    qu.push(83);
    qu.pop();
    while(!qu.empty()){
        cout<< qu.front()<<" ";
        qu.pop();
    }
    return 0;
}