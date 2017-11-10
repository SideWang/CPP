#include <iostream>
using namespace std;
/***********************************************************************************
功能：字符串比较
作者：Side
时间：2017/11/10
***********************************************************************************/
int strcomp(char *p1,char *p2);

int main(int argc, char const *argv[])
{
	char string1[100],string2[100];

	cout << "Please enter two string." << endl;
	cin >> string1 >> string2;
	cout << strcomp(string1,string2) << endl;
	

	return 0;
}
int strcomp(char *p1,char *p2)
{
	while(*p1 == *p2){
		if(*p1 == '\0')
			break;
		p1++;
		p2++;
	}
	return *p1-*p2;
}