#include<iostream>
using namespace std;
class shapes
{
	public:
		virtual void area()=0;
};
class rectangle:public shapes
{
	public:
		int l,b;
		void area()
		{
			l=34;
			b=16;
			cout<<"area of rectangle="<<l*b<<endl;
		}
};
class square:public shapes
{
	public:
		int s;
		void area()
		{
			
			s=33;
			cout<<"area of square="<<s*s<<endl;
		}
};
class circle:public shapes
{
	public:
		int r;
		void area()
		{
			r=41;
			cout<<"area of circle="<<3.14*r*r<<endl;
		}
};
class triangle:public shapes
{
	public:
		int l,b;
		void area()
		{
			l=3;
			b=9;
			cout<<"area of triagle="<<1/2*l*b<<endl;
		}
};
int main()
{
	shapes *sptr;
	rectangle r;
	sptr=&r;
	sptr->area();
	square s;
	sptr=&s;
	sptr->area();
	circle;
	sptr->area();
	triangle t;
	sptr=&t;
	sptr->area();
}

