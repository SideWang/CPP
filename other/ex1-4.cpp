#include <iostream>
using namespace std;
/********************************************************************************
功能：例题1-4
作者：Side
时间：2017/9/14
********************************************************************************/
class Student
{
private :
	int num;
	int score;

public:
	
	void setdata()
	{
		cin >> num;
		cin >> score;
	}

	void display()
	{
		cout << "num=" << num <<endl;
		cout << "score=" << score <<endl;
	}
};

Student s1,s2;

int main(int argc, char const *argv[])
{
	s1.setdata();
	s2.setdata();
	s1.display();
	s2.display();
	return 0;
}
