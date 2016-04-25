#include <iostream>
#include <cmath>
#include "catch.hpp"


double mileTokilometer (double m){
	double k = m * 0.60934;
	return k;
}

int main()
{
	double K;
	std::cout << "Bitte geben Sie die meilen an :"<< std::endl;
	double M;
	std::cin >> M;
	K = mileTokilometer(M);
	std::cout << "Hier ist ihre Kilometerzahl :"<< K << std::endl;
	return 0;


}