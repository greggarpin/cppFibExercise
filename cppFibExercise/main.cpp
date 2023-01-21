#include <iostream>

unsigned int getFibonacci(unsigned int n);

int main(int argc, const char * argv[])
{
    unsigned int index = 7;

    if (argc > 1) {
        index = atoi(argv[1]);
    }

    std::cout << "The " << index << "th Fibonacci number is " << getFibonacci(index) << "\n";

    return 0;
}

unsigned int getFibonacci(unsigned int n)
{
    if (n == 0 || n == 1) {
        return 1;
    }

    return getFibonacci(n-1) + getFibonacci(n-2);
}
