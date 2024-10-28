#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
	
	 //PAK TO EUROS CONVERSION  
	
//    std::cout << "Pakistani Rupees to Euros Conversion" << std::endl;
//	
//	int Rupees = 303;
//	int euros = 0;
//	
//	std::cout<< "Please enter euro amount:" << std::endl;
//	std::cin >>	euros;
//	int result = euros * Rupees;
//	
//	std::cout << result << std::endl;
	
	
	
	//Determine the count of Euros
	
//	const int dollarValue = 100;
//	const int quarterValue = 25;
//	const int dimesValue = 10;
//	const int nickelValue = 5;
//	
//	int getChangeValue;
//	std::cout<< "Enter your desired value: ";
//	std::cin >> getChangeValue;
//	
//	
//	int balance={}, dollar={},quarter={},dimes={},nickel={},penny={};
	
	//For Dollar Value
//    dollar=getChangeValue/dollarValue;
//	balance = getChangeValue-(dollar*dollarValue);
//	
//	
//	
//	//For Quarter Value
//	quarter = balance/quarterValue;
//	balance = balance-(quarter*quarterValue);
//	
//	//For Dimes Value
//	dimes = balance/dimesValue;
//	balance = balance-(dimes*dimesValue);
//	
//	//For Nickle Value
//	nickel = balance/nickelValue;
//	balance = balance-(nickel*nickelValue);
//	
//	//For Penny Value
//	penny = balance; 
//	
//	std::cout<< "Your Dollar ratio is:" << dollar<<std::endl;
//	std::cout<< "Your Quarer ratio is:" << quarter<<std::endl;
//	std::cout<< "Your Nickle ratio is:" << nickel<<std::endl;
//	std::cout<< "Your Dimes ratio is:" << dimes<<std::endl;
//	std::cout<< "Your Penny ratio is:" << penny<<std::endl;
	
	
	///Shipping COst Calculator
//	std::cout<< "Shipping Cost Calculator: " << std::endl;
//	
//	int length,width,height;
//	
//	std::cout<< "Add length in inches: ";
//	std::cin>>length;
//	std::cout<< "Add width in inches: ";
//	std::cin>>width;
//	std::cout<< "Add height in inches: ";
//	std::cin>>height;
//	
//	double  baseCost = 2.50;
//	int vol = length*width*height;
//	
//	if(vol>100){
//		baseCost += (vol/100)*10;
//	}else if(vol>500){
//		baseCost += (vol/100)*25;
//	}
//	
//	std::cout<<"Your Final cost is: "<< baseCost << std::endl;

	// Learning range based for loop
	
	int scores[] {10,20,30,40,50};
	
	for(auto score:scores)
		cout << score << endl;
		
		
	
	
    return 0;
}
