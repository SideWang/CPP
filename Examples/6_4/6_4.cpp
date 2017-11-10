#include <iostream>
using namespace std;
/***********************************************************************************
功能：动态链表的建立和遍历
作者：Side
时间：2017/11/10
***********************************************************************************/
struct node
{
	long  value;
	node  *next;
};

node *establish_list(node *p,long value);//在p指针指向的链表项后添加value链表项，并返回新建链表项的地址
void show_list(node *p,unsigned int num = 0);//从p开始输出第几项，默认为0，0表示显示所有，其他数表示显示列表第几项
node *chang_list(node *p,unsigned int n);//返回p指向链表项后n个链表项的地址



int main(int argc, char const *argv[])
{
	node *last =  NULL;
	unsigned int numbles = 0;
	unsigned int numble = 0;
	unsigned int count = 0;
	long temp_numble;

	cout << "How many numbles?" << endl;
	cin >> numbles;
	cout << "Please enter " << numbles << " numbles." << endl;	
	while(numbles--){
		cin >> temp_numble;
		last = establish_list(last,temp_numble);
	}
/*
	cout << "Do you want to show which of the list?" << endl 
		 << "(The numble 0 represents all items.)" << endl;
	cin >> numble;
*/
	show_list(last->next,numble);
	cin >> count;
	last = chang_list(last->next,count);
	show_list(last->next);

	return 0;
}

node *establish_list(node *p,long value)
{
	if (p != NULL)
	{
		node *temp = p->next;
		p->next = new node;
		p = p->next;
		p->value = value;
		p->next = temp;
		return p;
	}else{
		p = new node;
		p->value = value;
		p->next = p;
		return p;
	}
}

void show_list(node *p,unsigned int num)
{
	int i = 1;
	node *temp = p;
	if (num == 0){
		cout << "numble\t" << "value\t" << endl;
		cout << i << '\t' << p->value << '\t' << endl;
		for(i = 2,p = p->next;p != temp;p = p->next,i++)
			cout << i << '\t' << p->value << '\t' << endl;
	}else {
		for(i = 1;i < num;i++)
			p = p->next;
		cout << "The list of " << num << " is " << p->value << '.' <<endl;
	}
}

node *chang_list(node *p,unsigned int n)
{
	for (int i = 1;i < n;i++)
		p = p->next;
	return p;
}