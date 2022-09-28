#include<iostream>

using namespace std;

class Distance{
    private:
        int meters;
    public:
        Distance(){
            meters = 0;
        }
        void displayData(){
            cout << "Meters value: " << meters << endl;
        }

        friend void addValue(Distance &d); // friend function

};


void addValue(Distance &d){
    d.meters = d.meters + 5;
};

int main(){
    Distance d;
    d.displayData();
    addValue(d);
    d.displayData();
    return 0;
}

