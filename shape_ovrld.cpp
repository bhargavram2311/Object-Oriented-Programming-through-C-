#include<iostream>
using namespace std;
class shape
{
	public:
		void area(int s)
		{
			cout<<"Square::"<<s*s<<endl;
		}
		void area(int b,int h)
		{
			cout<<"Triangle::"<<(((float)1/2)*(b*h))<<endl;
		}
		void area(float pi,float r)
		{
			cout<<"Circle::"<<pi*r*r<<endl;
		}
		void area(int l,float b)
		{
			cout<<"Rectangle::"<<(int)l*b<<endl;
		}
};
int main()
{
	shape s;
	s.area(4);
	s.area(5,10);
	s.area(3.14f,1.00f);
	s.area(5,6.0f);
	return 0;
}
