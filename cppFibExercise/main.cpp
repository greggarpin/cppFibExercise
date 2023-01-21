#include <iostream>

#include "FibonacciGenerator.h"
#include "IterativeFibonacciGenerator.h"
#include "RecursiveFibonacciGenerator.h"

enum GenTypes {
    ITERATIVE,
    RECURSIVE
};

unsigned int getFibonacci(unsigned int n);
FibonacciGenerator* getGenerator(GenTypes type);

int main(int argc, const char * argv[])
{
    unsigned int index = 7;

    if (argc > 1) {
        index = atoi(argv[1]);
    }

    FibonacciGenerator *generator = getGenerator(GenTypes::ITERATIVE);
    std::cout << "The " << index << "th Fibonacci number is " << generator->getFibonacci(index) << "\n";

    delete generator;

    return 0;
}

FibonacciGenerator* getGenerator(GenTypes type)
{
    switch (type) {
        case GenTypes::ITERATIVE:
            return new IterativeFibonacciGenerator();

        case GenTypes::RECURSIVE:
            return new RecursiveFibonacciGenerator();
    }
    return new RecursiveFibonacciGenerator();
}
