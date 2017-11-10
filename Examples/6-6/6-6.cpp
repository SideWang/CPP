#include <iostream>
using namespace std;
/***********************************************************************************
功能：求输入字符串的长度
作者：Side
时间：2017/11/9
***********************************************************************************/
unsigned int slenth(char *ch);

int main(int argc, char const *argv[])
{
	unsigned int t;
	char temp[100];
	cin >> temp;
	cout << slenth(temp) << endl;
	return 0;
}
unsigned int slenth(char *ch)
{
	unsigned int count = 0;
	for(;*ch != '\0';ch++,count++)
		;
	return count;
}