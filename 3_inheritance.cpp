#include <iostream>
using namespace std;
class Animal {
    public:
        void makeSound() {
            cout << "Animal makes a sound!" << endl;
        }
    };
    
    // Dog inherits from Animal
    class Dog : public Animal {
    public:
        void bark() {
            cout << "Woof! Woof!" << endl;
        }
    };
    
    int main() {
        Dog myDog;
        myDog.makeSound(); // Inherited from Animal
        myDog.bark();      // Dog's own function
        return 0;
    }
    
