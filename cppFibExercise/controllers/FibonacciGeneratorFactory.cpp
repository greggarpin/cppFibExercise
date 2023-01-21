#include "FibonacciGeneratorFactory.h"

#include "FibonacciGenerator.h"
#include "IterativeFibonacciGenerator.h"
#include "RecursiveFibonacciGenerator.h"

using namespace controllers;
using namespace FibonacciGenerators;

enum GenTypes {
    ITERATIVE,
    RECURSIVE
};

#define PREFERRED_TYPE ITERATIVE

FibonacciGenerator* FibonacciGeneratorFactory::getInstance()
{
    switch (PREFERRED_TYPE) {
        case GenTypes::ITERATIVE:
            return new IterativeFibonacciGenerator();

        case GenTypes::RECURSIVE:
            return new RecursiveFibonacciGenerator();
    }

    return new RecursiveFibonacciGenerator();
}
