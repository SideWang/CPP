#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	void sort(int ,int ,int );
	int x,y,z;
	while(1){
		cin >> x >> y >> z;
		sort(x,y,z);
	}
	return 0;
}

void sort(int x, int y,int z)
{
	int temp;
	if (x > y)
	{
		temp = x;
		x = y;
		y = temp;
	}
	if (z < x){
		cout << y << ',' << x << ',' << z << endl;
	}else if (z < y){
		cout << y << ',' << z << ',' << x << endl;
	}else 
		cout << z << ',' << y << ',' << x << endl;
}