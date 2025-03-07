#include <iostream>
using namespace std;

class Car {
public:
    string color;
    
    void drive() {
        cout << "The car is driving!" << endl;
    }
};

int main() {
    Car myCar;
    myCar.color = "Red";
    myCar.drive();
    return 0;
}
