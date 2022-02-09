#include <iostream>

double LCG(double Xi, double multiplier, double increment, double modulus){

}

int main(){
    // Variables needed
    // Xi and nextX
    // multiplier, increment, modulus
    // (aXi + c) * modulus
    double Xi, nextX, multiplier, increment, modulus;
    std::cout << "This is a RNG based off a LCG." << '\n';
    std::cout << "The formula for generating the random numbers is "
    << "((multiplier) * Xi + increment) * modulus";
    std::cout << "Enter a starting point, multiplier, increment, and modulus in that order." << '\n';
    std::cin >> Xi >> multiplier >> increment >> modulus;
    nextX = LCG(Xi, multiplier, increment, modulus);
    std::cout << "Random number: " << nextX;
} 
