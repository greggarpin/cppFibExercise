#ifndef IterativeFibonacciGenerator_h
#define IterativeFibonacciGenerator_h

#include "FibonacciGenerator.h"

namespace FibonacciGenerators {

    class IterativeFibonacciGenerator : public controllers::FibonacciGenerator
    {
    public:
        unsigned int getFibonacci(unsigned int index) const;
    };
}
#endif /* IterativeFibonacciGenerator_h */
