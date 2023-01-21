#ifndef RecursiveFibonacciGenerator_h
#define RecursiveFibonacciGenerator_h

#include "FibonacciGenerator.h"

class RecursiveFibonacciGenerator : public FibonacciGenerator
{
public:
    unsigned int getFibonacci(unsigned int index) const;
};

#endif /* RecursiveFibonacciGenerator_h */
