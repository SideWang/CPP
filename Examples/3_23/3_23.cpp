
//#include "stdafx.h"
#include <iostream>
#include <cmath>
using namespace std;
/***********************************************************************************
功能：迭代法求平方根
作者：Side
时间：2017/11/10
***********************************************************************************/

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

