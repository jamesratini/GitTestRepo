#include <iostream>
#include <math.h>

using namespace std;
void power(int base, int exponent);
int main()
{
	cout << power(2, 10) << endl;

	exit(0);
}

int power(int base, int exponent) 
{
	return pow(base, exponent);
}