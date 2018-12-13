#include "Problem8.hpp"

void problem_eight() {
    
    //
    // The four adjacent digits in the 1000-digit number that have the greatest product are 9 × 9 × 8 × 9 = 5832.
    //
    // ind the thirteen adjacent digits in the 1000-digit number that have the greatest product. What is the value of this product?
    //
    
    std::string thousand_digit_number{"7316717653133062491922511967442657474235534919493496983520312774506326239578318016984801869478851843858615607891129494954595017379583319528532088055111254069874715852386305071569329096329522744304355766896648950445244523161731856403098711121722383113622298934233803081353362766142828064444866452387493035890729629049156044077239071381051585930796086670172427121883998797908792274921901699720888093776657273330010533678812202354218097512545405947522435258490771167055601360483958644670632441572215539753697817977846174064955149290862569321978468622482839722413756570560574902614079729686524145351004748216637048440319989000889524345065854122758866688116427171479924442928230863465674813919123162824586178664583591245665294765456828489128831426076900422421902267105562632111110937054421750694165896040807198403850962455444362981230987879927244284909188845801561660979191338754992005240636899125607176060588611646710940507754100225698315520005593572972571636269561882670428252483600823257530420752963450"};
    
    std::vector<int> current_product_digits{};
    
    for (int i = 0; i < 13; ++i) {
        current_product_digits.push_back(static_cast<int>(thousand_digit_number.at(i)) - 48);
    }
    
    long long largest_product{1LL};
    std::vector<int> largest_product_digits = current_product_digits;
    
    if (!contains_zero(current_product_digits)) {
        for (int factor : current_product_digits) {
            largest_product *= factor;
        }
    } else {
        largest_product = 0;
    }
    
    for (int i = 13; i < thousand_digit_number.size(); ++i) {
        
        current_product_digits.erase(current_product_digits.begin());
        current_product_digits.push_back(static_cast<int>(thousand_digit_number.at(i)) - 48);
        
        if (!contains_zero(current_product_digits)) {
            long long product{1LL};
            for (int factor : current_product_digits) {
                product *= factor;
            }
            if (product > largest_product) {
                largest_product = product;
                largest_product_digits = current_product_digits;
            }
        } else {
            continue;
        }
        
    }
    
    std::cout << largest_product << std::endl;
    for (int i : largest_product_digits) {
        std::cout << i << std::endl;
    }
    
}

bool contains_zero(std::vector<int> array) {
    
    for (int factor : array) {
        if (factor == 0) {
            return true;
        }
    }
    
    return false;
    
}
