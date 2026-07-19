#include<iostream>
using namespace std;
class parent{
public:
    parent(){
        cout<<"Parent class"<<endl;
    }
};

class child1 : public parent{
public:
    child1(){
        cout<<"Child1 Class"<<endl;
    }
};

class child2 : public parent{
public:
    child2(){
        cout<<"Child2 Class"<<endl;
    }
};

int main(){
    child1 c;
    child2 d;
    return 0;
}