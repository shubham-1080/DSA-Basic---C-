#include<iostream>
using namespace std;

class parent{
public: 
    int x;

protected:
    int y;

private:
    int z;

};

class child1 : public parent{  // here we are using access specifier for inherit this is known as modes of inheritance
    // x will remain public
    // y will remain protected
    // z will be inaccessible
};

class chlid2 : private parent{
    // x will be private
    // y will be private
    // z will be inaccessible
};

class child3 : protected parent{
    // x will be protected
    // y will be protected
    // z will be inaccessible
};
int main(){
    parent p1;
    p1.x = 2;
    cout<<p1.x;
    return 0;
}