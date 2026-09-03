#include <iostream>
using namespace std;

class Animal {
public:
            virtual void makeSound() {
                        cout << "Animal makes a sound" << endl;
            }

            virtual ~Animal() {}
};

class Dog : public Animal {
public:
            void makeSound() override {
                        cout << "Dog says: Woof!" << endl;
            }
};

class Cat : public Animal {
public:
            void makeSound() override {
                        cout << "Cat says: Meow!" << endl;
            }
};

int main() {
            Dog dog;
            Cat cat;
            Animal* animalPointer;

            animalPointer = &dog;
            animalPointer->makeSound();

            animalPointer = &cat;
            animalPointer->makeSound();

            return 0;
}