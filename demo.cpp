#include<iostream>
using namespace std;

class student{
   public:
      int roll;
      string name;
      void printname(int r, string n)
      {
         roll = r;
         name = n;
         cout << "Roll is: " << roll<<endl;
         cout << "Name is: " << name<<endl;
      }    

};


int main(){
   student s;
   s.roll  = 10;
   s.name = "Rahul";
   cout << "Roll is: " << s.roll<<endl;
   cout << "Name is: " << s.name<<endl;
   s.printname(1, "John");
   cout<<"Hello World"<<endl;
   return 0;
}