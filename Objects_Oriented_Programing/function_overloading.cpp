#include<iostream>
using namespace std;
class sum{
public:
    void add(int x, int y){
        cout<<"Sum: "<<x+y<<endl;
    }
    void add(int x, int y , int z){
        cout<<"Sum: "<<x+y+z<<endl;
    }
    void add(float a, float b){
        cout<<"Sum: "<<a+b<<endl;
    }
    void add( float a, int b){
        cout<<"Sum: "<<a+b<<endl;
    }
    void add(int a, float b){
        cout<<"Sum: "<<a+b<<endl;
    }

};
int main(){
    sum s;
    s.add(2,3);
    s.add(2,3,4);
    s.add(float(2.5),float(3.4));
    s.add(float(2.5),3);
    s.add(2,float(3.5));
    return 0;
}