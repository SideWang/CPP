
//#include "stdafx.h"
#include <iostream>
#include <cmath>
using namespace std;
int N = 5;
float f(double a,double r)
{
	static double temp;
	temp = r;
	r = (r + (a / r))/2;
	if (abs(temp - r) < 0.00001)
		return r;
	f(a,r);
}
int main(int argc, char* argv[])
{
	double a;
	cout << "Please enter a numble." << endl;
	cin >> a;
	cout << f(a,a/2) << endl;
	return 0;
}

