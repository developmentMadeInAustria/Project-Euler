#include<iostream>
#include "Problem4.hpp"

void problem_four() {
    
    //
    // A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.
    //
    // Find the largest palindrome made from the product of two 3-digit numbers.
    //
    
    //
    // The largest product of two 3-digit numbers is 999 * 999 = 998001
    // Therefore we don't have to consider numbers higher than 998001
    //
    // In the next step we check, if a number is a palindrome
    // If it is not, we go to the next smaller number and repeat
    // If it is, we check if there are two three digit numbers producing the number
    //
    // Therefore we use the modulo operator on the palindrome on all numbers from 999 - 1000
    // If the result is 0 for one number, we have found the largest palindrome
    // Else - repeat the process
    //
    
    long largest_number = 998002;
    
    while (true) {
        
        --largest_number;
        
        if (is_palindrome(largest_number)) {
            if (is_product_of_three_digits(largest_number)) {
                break;
            }
        } else {
            continue;
        }
        
    }
    
    std::cout << largest_number << std::endl;
    
    
}

bool is_palindrome(long candidate) {
    
    std::vector<char> digits{};
    
    while(candidate > 0) {
        digits.push_back(candidate % 10);
        candidate /= 10;
    }
    
    for (int i = 0; i <= digits.size(); ++i) {
        if (digits[i] == digits[digits.size() - i - 1]) {
            continue;
        } else {
            return false;
        }
    }
    
    return true;
    
}

bool is_product_of_three_digits(long candidate) {
    
    for (auto i = 999; i >= 100; --i) {
        if (candidate % i == 0) {
            if (candidate / i <= 999) {
                std::cout << i << " x " << candidate / i << std::endl;
                return true;
            }
        }
    }
    
    return false;
    
}

