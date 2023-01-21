#ifndef RecursiveFibonacciGenerator_h
#define RecursiveFibonacciGenerator_h

#include "FibonacciGenerator.h"

namespace FibonacciGenerators {

    class RecursiveFibonacciGenerator : public controllers::FibonacciGenerator
    {
    public:
        unsigned int getFibonacci(unsigned int index) const;
    };

}
#endif /* RecursiveFibonacciGenerator_h */
