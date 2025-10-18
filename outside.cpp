#include<iostream>
using namespace std;
class box
{
	private:
		int l,b,h;
	public:
		void get();
		void volume();
};
void box::get()
{
	l=20;
	b=30;
	h=40;
}
void box::volume()
{
	cout<<"Volume::"<<l*b*h;
}
int main()
{
	box v;
	v.get();
	v.volume();
		}
