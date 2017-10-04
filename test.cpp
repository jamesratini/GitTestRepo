#include <iostream>
#include <math.h>

using namespace std;
void power(int base, int exponent);
int main()
{
	power(2, 10);

	exit(0);
}

void power(int base, int exponent) 
{
	cout << pow(base, exponent) << endl;
}