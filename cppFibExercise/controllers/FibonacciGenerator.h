#ifndef FibonacciGenerator_h
#define FibonacciGenerator_h

namespace controllers {
    class FibonacciGenerator
    {
    public:
        virtual ~FibonacciGenerator() {};

        virtual unsigned int getFibonacci(unsigned int index) const = 0;
    };
}

#endif /* FibonacciGenerator_h */
