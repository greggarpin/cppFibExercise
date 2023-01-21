#ifndef FibonacciGeneratorFactory_h
#define FibonacciGeneratorFactory_h

#include "FibonacciGenerator.h"

namespace controllers {
    class FibonacciGeneratorFactory
    {
    public:
        static FibonacciGenerator* getInstance();
    };
}

#endif /* FibonacciGeneratorFactory_h */
