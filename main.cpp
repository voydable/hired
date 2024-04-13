#include "SmallClass.h"

int main() {
    SmallClass small;

    // Generate random number
    int randomNum = small.generateRandom();
    std::cout << "Random number: " << randomNum << std::endl;

    // Loop downwards
    small.loopDownwards();

    // Count backwards
    small.countBackwards();

    // Calculate compound interest
    double principal = 10000.0;
    double rate = 5.0;
    int years = 10;
    double finalAmount = small.calculateCompoundInterest(principal, rate, years);
    std::cout << "Final amount after " << years << " years: $" << finalAmount << std::endl;

    return 0;
}
