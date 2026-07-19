#include<iostream>
using namespace std;

class Fruits{
public:
    string name;
    string color;
};

int main(){

    Fruits apple;   // objects created of fruits datatype  M1 for creating objects
    apple.name = "Apple";
    apple.color= "Red";
    cout<<apple.name<<" - "<<apple.color<<endl;

    Fruits *mango = new Fruits();  // M2 for creating object 
                //  but in this pointer variable  not objects is created which is pointing to class fruits
                // for acessing pointer variable we have to use -> operater rather than . operator
    
    mango->name = "Mango";
    mango->color ="Yellow";
    cout<<mango->name<<" - "<<mango->color<<endl;
    
    return 0;
}