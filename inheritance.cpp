#include<iostream>

using namespace std;

class inheritance
{
private:
    int a;
    int b;
public:
    void print(int a,int b){
        this-> a = a;
        this-> b = b;
        cout<<a<<endl;
        cout<<b<<endl;
    }
};

class child:public inheritance
{
    
    public:
    int sum(int a, int b){
        cout<<a+b<<endl;
    }
};

int main(){
    child c;
    c.print(1,2);
    c.sum(1,2);
    return 0;
}