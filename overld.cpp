#include<iostream>
using namespace std;
class sample 
{
	public:
		void show()
		{
			cout<<"Function with no parameter";
		}
		void show(int a)
		{
			cout<<"Integer="<<a<<endl;
		}
		void show(float b)
		{
			cout<<"Float="<<b<<endl;
		}
		void show(double c)
		{
			cout<<"Double="<<c<<endl;
		}
		void show(char d)
		{
			cout<<"Char="<<d<<endl;
		}
		void show(string e)
		{
			cout<<"String="<<e<<endl;
		}
};
int main()
{
	sample s;
	s.show();
	s.show(23);
	s.show(23.3f);
	s.show(54.6);
	s.show('@');
	s.show("Bhargav ram");
	return 0;
}
