#include "./math.h"

enum Bin {
    zero = 0, one
};

int main() {
    Math::notGate not1;

    std::cout << "1 or 0: ";
    std::cin >> not1.input;
    std::cout << std::endl;

    not1.run();

    std::cout << not1.output << std::endl;
    
    return 0;
}