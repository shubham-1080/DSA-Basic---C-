#include<iostream>
using namespace std;

class parent{
public:
    parent(){
        cout<<"Parent class"<<endl;
    }
};

class child : public parent{
public:
    child(){
        cout<<"Child Class"<<endl;
    }
};
class grandchild : public child{
public:
    grandchild(){
        cout<<"Grandchild Class";
    }
};
int main(){
    grandchild c;

    return 0;
}