#include "RecursiveFibonacciGenerator.h"

using namespace FibonacciGenerators;

unsigned int RecursiveFibonacciGenerator::getFibonacci(unsigned int index) const
{
    if (index == 0 || index == 1) {
        return 1;
    }

    return getFibonacci(index - 1) + getFibonacci(index - 2);
}
