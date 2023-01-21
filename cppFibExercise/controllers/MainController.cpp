#include <iostream>

#include "MainController.h"
#include "FibonacciGenerator.h"
#include "FibonacciGeneratorFactory.h"

using namespace controllers;

void MainController::runFibonacci(unsigned int index)
{
    FibonacciGenerator *generator = FibonacciGeneratorFactory::getInstance();
    std::cout << "The " << index << "th Fibonacci number is " << generator->getFibonacci(index) << "\n";

    delete generator;
}
