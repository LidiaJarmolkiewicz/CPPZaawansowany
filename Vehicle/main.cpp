#include"Vehicle.hpp"
int main()
{
	Bicycle bic;
	Bus bus;
	
	Vehicle* vec = new Bicycle();
	vec->drive();
	delete vec;
	Vehicle* vec1 = new Bus();
	vec1->drive();
	delete vec1;
};