#include "Problem9.hpp"

void problem_nine() {
    
    //
    //  A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,
    //
    //  a2 + b2 = c2
    //  For example, 32 + 42 = 9 + 16 = 25 = 52.
    //
    //  There exists exactly one Pythagorean triplet for which a + b + c = 1000.
    //  Find the product abc.
    //
    
    bool found{false};
    
    for (int a = 1; a < 1000; ++a) {
        
        for (int b = a + 1, c = 1000 - 2*a - 1; b < c; ++b, --c) {
         
            if (a*a + b*b == c*c) {
                std::cout << a*b*c << std::endl;
                found = true;
            }
            
        }
        
        if (found) {
            break;
        }
        
    }
    
}
