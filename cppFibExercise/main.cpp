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

unsigned int getFibonacci(unsigned int index)
{
    if (index == 0 || index == 1) {
        return 1;
    }

    return getFibonacci(index - 1) + getFibonacci(index - 2);
}
