#include "IterativeFibonacciGenerator.h"

unsigned int IterativeFibonacciGenerator::getFibonacci(unsigned int index) const
{
    if (index == 0 || index == 1) {
        return 1;
    }

    unsigned int fib = 0;
    unsigned int last = 1;
    unsigned int secondToLast = 1;

    for (int i = 2; i <= index; ++i) {
        fib = last + secondToLast;

        secondToLast = last;
        last = fib;
    }

    return fib;
}
