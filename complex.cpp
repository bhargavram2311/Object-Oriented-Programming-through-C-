/*#include<iostream>
using namespace std;
class complex
{
	private:
		int real,img,c1,c2;
	public:
		void get()
		{
			cout<<"Enter real and img values::";
			cin>>real>>img;
		}
		void add(complex c2)
		{
			cout<<real+c2.real<<"+"<<img+c2.img<<"i";
		}
};
int main()
{
	complex c1,c2;
	c1.get();
	c2.get();
	c1.add(c2);
	return 0;
	}*/
#include<iostream>
using namespace std;
class demo
{
	private:
		int x;
		void get()
		{
			x=45;
		}
		friend void sum();
};
void sum()
{
	int y;
	y=50;
	demo d;
	d.get();
	cout<<"Sum="<<d.x+y<<endl;
	cout<<"24B11CS121";
}
int main()
{
	sum();
}




