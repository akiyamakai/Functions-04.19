#include <iostream>

int lengthOfString(const char* str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

int main() {
    const int MAX_LENGTH = 100;
    char input[MAX_LENGTH];

    std::cout << "Number 1: ";
    std::cin.getline(input, MAX_LENGTH);

    int length = lengthOfString(input);

    std::cout << "Number 2: " << length << std::endl;

    return 0;
}
