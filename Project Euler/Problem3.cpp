#include "Problem3.hpp"
#include<iostream>
#include<vector>

void problem_three() {

    //
    //    The prime factors of 13195 are 5, 7, 13 and 29.
    //
    //    What is the largest prime factor of the number 600851475143 ?
    //
    
    long number = 600851475143;
    
    // first step: identicate prime numbers
    // second step: divide
    
    std::vector<int> all_primes = std::vector<int>();
    all_primes.push_back(2);
    
    while (number > 1) {
        
        if (number % all_primes[all_primes.size() - 1] == 0) {
            number /= all_primes[all_primes.size() - 1];
            continue;
        } else {
            
            // find next prime number
            
            for (int i = all_primes[all_primes.size() - 1]; ; i++) {
                bool is_prime = true;
                for (int j : all_primes) {
                    if (i % j == 0) {
                        is_prime = false;
                        break;
                    }
                }
                if (is_prime) {
                    all_primes.push_back(i);
                    break;
                }
            }
            
        }
        
    }
    
    std::cout << all_primes[all_primes.size() - 1] << std::endl;
    
}
