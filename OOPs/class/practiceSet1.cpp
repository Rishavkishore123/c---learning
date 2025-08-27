#include <iostream>
using namespace std;

class car{
    public:
    string name;
    string color;
    string model;
    bool isEngineOn;
    private:
    string accelerate;
    public:
    void getAccelerate(){
        cout<<"Car is Accelerating"<<endl;
    }
   
};

int main(){
    car newCar;
    newCar.name="BMW";
    newCar.color="Balck";
    newCar.model="2022";
    newCar.isEngineOn=true;
    cout<<"car name: "<<newCar.name<<endl;
    cout<<"car color: "<<newCar.color<<endl;
    cout<<"car model:"<<newCar.model<<endl;
    cout<<"is engine on:"<<newCar.isEngineOn<<endl;

    newCar.getAccelerate(); // error because accelerate is private
    return 0;
}



// Make the homework of public and pricate access specifier.    