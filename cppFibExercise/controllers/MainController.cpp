#include <iostream>

#include "MainController.h"
#include "FibonacciGenerator.h"
#include "IterativeFibonacciGenerator.h"
#include "RecursiveFibonacciGenerator.h"

using namespace controllers;
using namespace FibonacciGenerators;

enum GenTypes {
    ITERATIVE,
    RECURSIVE
};

FibonacciGenerator* getGenerator(GenTypes type);

void MainController::runFibonacci(unsigned int index)
{
    FibonacciGenerator *generator = getGenerator(GenTypes::ITERATIVE);
    std::cout << "The " << index << "th Fibonacci number is " << generator->getFibonacci(index) << "\n";

    delete generator;
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
