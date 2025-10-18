#include<iostream>
using namespace std;
class complex
{
	private:
		int real,img;
	public:
		void get()
		{
			
			cin>>real>>img;
		}
		complex add(complex c2)
		{
			complex temp;
			temp.real=real+c2.real;
			temp.img=img+c2.img;
			return temp;
		}
		void show()
		{
			cout<<real<<"+"<<img<<"i"<<endl ;
		}
};
int main()
{
	complex c1,c2,c3;
	cout<<"Enter 1st complex number::";
	c1.get();
	c1.show();
	cout<<"Enter 2nd complex number::";
	c2.get();
	c2.show();
	c3=c1.add(c2);
	c3.show();
	return 0;
	}
