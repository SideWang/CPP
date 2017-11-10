// 3_23.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
int N = 5;
float f(int a)
{
	if (N <= 1)
		return 1;
	return (f(N--) + a/f(N--))/2;
}
int main(int argc, char* argv[])
{
	cout << f(2) << endl;

	printf("Hello World!\n");
	return 0;
}

