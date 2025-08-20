#include<iostream>
using namespace std;
class base{
    public:
    void show1(){
        cout<<"This is a base class"<<endl;
    }

};
class derived : public base{
    public:
    void show2(){
        cout<<"this is derived class";
    }
};
int main(){
    derived c1;
    c1.show1();
    c1.show2();
    return 0;
}