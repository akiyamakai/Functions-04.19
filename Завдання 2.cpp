#include <iostream>

int factorial(int n) {
    int result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}

int main() {
    int num;

    std::cout << "Write number: ";
    std::cin >> num;

    int result = factorial(num);

    std::cout << "Factorian: " << num << " Summa: " << result << std::endl;

    return 0;
}
