#include <iostream>

#include "FibonacciGenerator.h"
#include "RecursiveFibonacciGenerator.h"

unsigned int getFibonacci(unsigned int n);
FibonacciGenerator* getGenerator();

int main(int argc, const char * argv[])
{
    unsigned int index = 7;

    if (argc > 1) {
        index = atoi(argv[1]);
    }

    FibonacciGenerator *generator = getGenerator();
    std::cout << "The " << index << "th Fibonacci number is " << generator->getFibonacci(index) << "\n";

    return 0;
}

unsigned int getFibonacci(unsigned int index)
{
    if (index == 0 || index == 1) {
        return 1;
    }

    return getFibonacci(index - 1) + getFibonacci(index - 2);
}

FibonacciGenerator* getGenerator()
{
    return new RecursiveFibonacciGenerator();
}
