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

class grandchild : public child1, public child2{
public:
    grandchild(){
        cout<<"Grandchild Class";
    }
};

int main(){

    grandchild great;

    return 0;
}