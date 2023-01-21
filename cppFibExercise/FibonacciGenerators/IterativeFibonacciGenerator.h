#ifndef IterativeFibonacciGenerator_h
#define IterativeFibonacciGenerator_h

#include "FibonacciGenerator.h"

class IterativeFibonacciGenerator : public FibonacciGenerator
{
public:
    unsigned int getFibonacci(unsigned int index) const;
};

#endif /* IterativeFibonacciGenerator_h */