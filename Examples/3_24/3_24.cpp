// 3_24.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

void printstar (int x){
	if (x < 1){
		return ;
	}
	cout << "*";
	x -= 1;
	printstar(x);
}

int main(int argc, char* argv[])
{
	for (int i = 1;i < 8;i += 2){
		printstar(i);
		cout << endl;
	}

	for (;i > 0;i -= 2){
		printstar(i);
		cout << endl;
	}


	return 0;
}

