#include <iostream>
#include "MainController.h"

int main(int argc, const char * argv[])
{
    unsigned int index = 7;

    if (argc > 1) {
        index = atoi(argv[1]);
    }

    controllers::MainController::runFibonacci(index);

    return 0;
}
