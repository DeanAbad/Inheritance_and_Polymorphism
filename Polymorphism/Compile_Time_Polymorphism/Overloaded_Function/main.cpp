#include <iostream>

class Numbers {
    public:
        void show(int x) {
            std::cout << "This is a number " << x << "." << std::endl;
        }
        void show(int x, int y) {
            std::cout << "These are numbers " << x << " and " << y << "." << std::endl;
        }
        void show(int x, int y, int z) {
            std::cout << "These are numbers " << x << ", " << y << ", and " << z << "." << std::endl;
        }
};

int main() {
    Numbers these_numbers;
    these_numbers.show(1);
    these_numbers.show(1, 2);
    these_numbers.show(1, 2, 3);

    return 0;
}