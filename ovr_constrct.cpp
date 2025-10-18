#include<iostream>
using namespace std;
class volume
{
	private:
		int x,y,z;
		public:
			volume()
			{
				x=3;
				y=4;
				z=5;
			}
			volume(int l,int b,int h)
			{
				x=l;
				y=b;
				z=h;
			}
			int box()
			{
				return (x*y*z);
			}
};
int main()
{
	volume v1;
	volume v2(5,6,3);
	cout<<"Volume v1::"<<v1.box()<<endl;
	cout<<"Volume v2::"<<v2.box()<<endl;
	return 0;
}
