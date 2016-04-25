#define CATCH_CONFIG_RUNNER
#include "catch.hpp"
#include <cmath>

double mileTokilometer (double m){
	double k = m * 0.60934;
	return k;
}
double  VolZy(int r, int h){
	const float pi = 3.14159265358979;
	double  V;
	V = pi*(h*(r*r));
	return V;

}

double ObeZy(int r, int h){
	const float pi = 3.14159265358979;
	double O;
	O = 2*(pi*(r*(h+r)));
	return O;
}
float fract(float a){
	int i;
	float f;
	i = a;
	f = a - i;
	return f;

}
int sumMultiples(){
	int i,s;
	s = 0;
	for (i=1; i<=1000; i++){
		if (i%3 == 0 || i%5 == 0){
			s += i;
		}
	}
	return s;
}

int gcd (int a,int b){
int d;
if (a<b){d = b;}
else{d = a;}

for (int i = d ; i>=0 ; i--){
	if (a%i == 0 && b%i == 0)
		return i;
}
}
int checksum (long int m){
	int s;
	s = 0;
	do s += m % 10;
	while(m /= 10);
	return s; 
}
TEST_CASE("describe_mileTokilometer", "[mileTokilometer]"){
	REQUIRE(mileTokilometer(56)== 34.12304 );
	}
TEST_CASE("describe_VolZy", "[VolZy]"){
	REQUIRE(VolZy(9,3)== Approx(763.407043457));
	REQUIRE(VolZy(11,5)==Approx(1900.663));
	REQUIRE(VolZy(1,1)==Approx(3.141592741));
	}
TEST_CASE("describe_ObeZy", "[ObeZy]"){
	REQUIRE(ObeZy(9,3)== Approx(678.5840454102));
	REQUIRE(ObeZy(11,5)== Approx(1105.840));
	REQUIRE(ObeZy(1,1)== Approx(12.5663709641));
	}
TEST_CASE("describe_fract", "[fract]"){
	REQUIRE(fract(1.453)== Approx(0.453));
	REQUIRE(fract(8.888888888)==Approx(0.888888888));
	REQUIRE(fract(0.1)==Approx(0.1));
	}
TEST_CASE("describe_sumMultiples", "[sumMultiples]"){
	REQUIRE(sumMultiples()==234168);
	
	}
TEST_CASE("describe_checksum", "[checksum]"){
	REQUIRE(checksum(11)==2);
	REQUIRE(checksum(123)==6);
	REQUIRE(checksum(115873)==25);
	}
TEST_CASE("describe_gcd", "[gcd]"){
	REQUIRE(gcd(2,4)==2);
	REQUIRE(gcd(6,9)==3);
	REQUIRE(gcd(3,7)==1);
}
int main(int argc, char* argv[])
{
  return Catch::Session().run(argc, argv);
}
