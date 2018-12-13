#include "Problem6.hpp"

void problem_six() {

    //
    //    The sum of the squares of the first ten natural numbers is,
    //
    //    1^2 + 2^2 + ... + 10^2 = 385
    //    The square of the sum of the first ten natural numbers is,
    //
    //    (1 + 2 + ... + 10)^2 = 552 = 3025
    //    Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025 − 385 = 2640.
    //
    //    Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
    //
    
    long sum_of_squares{0L};
    long square_of_sums{0L};
    
    for (auto i = 1; i <= 100; ++i) {
        sum_of_squares += std::pow(i, 2);
        square_of_sums += i;
    }
    
    square_of_sums = std::pow(square_of_sums, 2);
    
    std::cout << square_of_sums - sum_of_squares << std::endl;
    
}

