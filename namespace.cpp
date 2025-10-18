#include<iostream>
using namespace std;
namespace one{
int a=23;
char b='@';
}
namespace two
{
	float a=56.33;
	double b=33;
}
using namespace one;
int main()
{
	cout<<a<<endl;
	cout<<b<<endl;
	cout<<two::a<<endl;
	cout<<two::b;
	return 0;
}
