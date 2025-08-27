#include <iostream>
using namespace std;

// name, shape, color, price, taste, isfreshFruit

// set private to price-> vendor set to price and user get the price

class Fruits{
    public:
    string name;
    string shape;
    string color;
    string taste;
    bool isFreshFruit;

    private:
    string vendorName;
    int price;

    public:
    Fruits(string vendor){
        vendorName=vendor;
        price=0;
    }


    int getPrice(){
        return this->price;
    }

    void setPrice(int rupees){
        if(vendorName=="Rishav")
        price=rupees;
        else
        cout<<"you are not elgible to set price";
        
    }

};

int main(){
    Fruits newFruits("Rishav");
    newFruits.name="Alphanzoo-Mango";
    newFruits.shape="noShape";
    newFruits.color="Yellow";
    newFruits.taste="Sweet";
    newFruits.isFreshFruit=1;

    cout<<"Fruit name is: "<<newFruits.name<<endl;
    cout<<"Fruit shape is: "<<newFruits.shape<<endl;
    cout<<"Fruit color is: "<<newFruits.color<<endl;
    cout<<"Fruit name is: "<<newFruits.taste<<endl;
   
    newFruits.setPrice(100);
   
    cout<<"the price of Mango is: "<<newFruits.getPrice()<<endl;
    cout<<"Fruit Fresh: "<<newFruits.isFreshFruit<<endl;

    return 0;

}

