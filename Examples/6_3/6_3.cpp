// 6_3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>

using namespace std;
void Get_Num(long (&num)[10]);
void Num(long (&num)[10]);
void Put_Num(long (&num)[10]);

int main(int argc, char* argv[])
{
	long num[10];
	Get_Num(num);
	Num(num);
	Put_Num(num);
	system("pause");
	return 0;
}
void Num(long (&num)[10])
{
	int min = num[0],max = num[0],temp = 0;
	int min_i = 0,max_i = 0;
	for(int i = 0;i < 10;i++){
		if(num[i] < min){
			min = num[i];
			min_i = i;
		}
		if(num[i] > max){
			max = num[i];
			max_i = i;
		}
	}
	temp = num[0];
	num[0] = num[min_i];
	num[min_i] = temp;

	temp = num[9];
	num[9] = num[max_i];
	num[max_i] = temp;


}
void Get_Num(long (&num)[10])
{
	for(int i = 0;i < 10;i++)
		cin >> num[i];
}
void Put_Num(long (&num)[10])
{
	for(int i = 0;i < 10;i++){
		cout <<"num["<<i<<"] :"<< num[i];
		if(i == 0){
			cout <<"        "<< "This is the min num."<<endl;
		}else if(i == 9){
			cout <<"        "<< "This is the max num."<<endl;	
		}else{
			cout << endl;
		}
	}
}