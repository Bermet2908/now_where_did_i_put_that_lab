#include <iostream>

#include "src/where.hpp"

int main() {
    std::string s = "The quick brown fox";
    std::cout << Find(s, 'e') << "\n";
    std::cout << Find(s, "he") << "\n";
    return 0;
}