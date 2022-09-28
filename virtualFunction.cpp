#include<iostream>
using namespace std;

class one{
    public:
    virtual void print(){
        cout<<"base print"<<endl;
    }
    void sum(){
        cout<<"base sum"<<endl;
    }
};

class two : public one{
    public:
    void print(){
        cout<<"derived print"<<endl;
    }
    void sum(){
        cout<<"derived sum"<<endl;
    }
};

int main(){
    one obj1;
    two obj2;
    one *ptr;
    ptr = &obj1;
    ptr->print();
    ptr->sum();
    ptr = &obj2;
    ptr->print();
    ptr->sum();
}