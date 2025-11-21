#include <iostream>
#include <vector>

int main() {
    std::vector<int> vec;
    if (vec.empty()) {
        std::cout << "The vector is empty." << std::endl;
    } else {
        std::cout << "The vector is not empty." << std::endl;
    }
    return 0;
}
