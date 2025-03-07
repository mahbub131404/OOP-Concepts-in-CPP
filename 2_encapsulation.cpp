#include <iostream>
using namespace std;
class Animal {
    public:
        virtual void makeSound() { // Virtual function (can be changed)
            cout << "Animal makes a sound!" << endl;
        }
    };
    
    class Cat : public Animal {
    public:
        void makeSound() override {
            cout << "Meow! Meow!" << endl;
        }
    };
    
    int main() {
        Animal* myAnimal;
        Cat myCat;
    
        myAnimal = &myCat;
        myAnimal->makeSound();  // Calls the overridden function in Cat
    
        return 0;
    }
    
