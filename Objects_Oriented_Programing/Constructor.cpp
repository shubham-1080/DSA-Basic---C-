#include<iostream>
using namespace std;

class Rectangle{
public: 
    int l;
    int b;

    Rectangle(){   //default constructor - no arguments passed
        l=0;
        b=0;
    }

    Rectangle(int x, int y){   // parameterised  constructor - args passed
        l=x;
        b=y;
    }

    Rectangle(Rectangle &r){    // copy constructor - intialise an object by another existing object
        l = r.l;
        b = r.b;
    }
    ~Rectangle(){  // destructor
        cout<<"Destructor is called"<<endl;
    }
};

int main(){
    Rectangle* r1 = new Rectangle();
    cout<<r1->l<<" "<<r1->b<<endl;
    delete r1;   // we can only delete class manually which is created as pointer variable

    Rectangle r2(6,8);
    cout<<r2.l<<" "<<r2.b<<endl;

    Rectangle r3 = r2;   // we also define like this Rectangle r3(r2);
    cout<<r3.l<<" "<<r3.b<<endl;

    return 0;
}