#include "Problem10.hpp"

void problem_ten() {
    
    //
    // The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.
    //
    // Find the sum of all the primes below two million.
    //
    
    // sum starts with first prime number 2
    long long sum{2LL};
    // saving prime numbers, to reduce calculating time
    std::vector<long> all_primes{};
    // add first prime number, 2
    all_primes.push_back(2);
    
    for (long i = 2; i < 2000000; ++i) {
        
        bool isPrime{true};
        // only divide through prime numbers
        for (auto prime : all_primes) {
            if (i % prime == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) {
            all_primes.push_back(i);
            sum += i;
        }
        
    }
    
    std::cout << sum << std::endl;
    
    
}
