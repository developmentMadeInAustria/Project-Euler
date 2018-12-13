#include "Problem5.hpp"

void problem_five() {
    
    //
    // 2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
    //
    // What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
    //
    
    long number = 20;
    std::vector<int> divisors{7,11,12,13,14,15,16,17,18,19,20};
    
    while(true) {

        bool divisible{true};

        for (auto divisor : divisors) {
            if (number % divisor != 0) {
                divisible = false;
                break;
            }
        }
        
        if (divisible) {
            break;
        } else {
            ++number;
        }

    }
    
    std::cout << number << std::endl;
    
}
