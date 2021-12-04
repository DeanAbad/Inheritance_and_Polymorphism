#include <iostream>

class Base {
    public:
        int number = 5;

        virtual void an_info() {
            std::cout << "I am a base class!" << std::endl;
        }

        void a_number() {
            std::cout << "The number variable has a value of " << number << "." << std::endl;
        }
};

class Derived : public Base {
    public:
        void an_info() {
            std::cout << "I am a derived class!" << std::endl;
        }

        void a_number() {
            Base::number = 7;
            std::cout << "The number variable has a value of " << number << "." << std::endl;
        }
};

int main() {
    Base* parent_pointer;
    Derived child;
    parent_pointer = &child;

    parent_pointer -> an_info();
    parent_pointer -> a_number();

    return 0;
}