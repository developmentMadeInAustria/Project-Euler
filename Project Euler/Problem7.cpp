#include "Problem7.hpp"

void problem_seven() {
    
    //
    // By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.
    //
    // What is the 10 001st prime number?
    //
    
    std::vector<long> primes{2};
    
    while (primes.size() < 10001) {
        primes.push_back(next_prime(primes));
    }
    
    std::cout << primes.at(primes.size() - 1) << std::endl;
    
}

long next_prime(std::vector<long> &primes) {
    
    for (long i = primes[primes.size() - 1]; ; i++) {
        bool is_prime = true;
        for (long j : primes) {
            if (i % j == 0) {
                is_prime = false;
                break;
            }
        }
        if (is_prime) {
            return i;
            break;
        }
    }
    
}
