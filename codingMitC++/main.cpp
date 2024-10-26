#include <iostream>
#include <stdio.h>


int main() {
    std::cout << "Pakistani Rupees to Euros Conversion" << std::endl;
	
	int Rupees = 303;
	int euros = 0;
	
	std::cout<< "Please enter euro amount:" << std::endl;
	std::cin >>	euros;
	int result = euros * Rupees;
	
	std::cout << result;

    return 0;
}
