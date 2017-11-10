#include <iostream>
using namespace std;
/***********************************************************************************
功能：统计不同字符的数量
作者：Side
时间：2017/11/10
***********************************************************************************/
struct 
{
	int large;
	int small;
	int numble;
	int space;
	int other; 
}count;

int main(int argc, char const *argv[])
{
	char temp;

	while((temp = getchar()) != EOF){
		if (('a' <= temp) && (temp <= 'z'))
			count.small++;
		else if(('A' <= temp) && (temp <= 'Z'))
			count.large++;
		else if(('0' <= temp) && (temp <= '9'))
			count.numble++;
		else if(temp == ' ')
			count.space++;
		else 
			count.other++;

	}

	cout << "大写\t" << "小写\t" << "数字\t" << "空格\t" << "其他\t" << endl;
	cout << count.large << '\t' << count.small << '\t' << count.numble << '\t' 
		 << count.space << '\t' << count.other << '\t' << endl;
	
	return 0;
}