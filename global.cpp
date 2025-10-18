#include<iostream>
using namespace std;
int a=33;
int main()
{
	int a=23;
	cout<<"Local variable a="<<a<<endl;
	cout<<"Global variable a="<<::a;
	return 0;
}
