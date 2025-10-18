//Default constructor
#include<iostream>
using namespace std;
class rectangle
{
	private:
		int x,y;
	public:
		rectangle(int l,int b)
		{
			x=l;
			y=b;
		}
		void show()
		{
			cout<<"Area of rectangle::"<<x*y;
		}
};
int main()
{
	rectangle r(5,6);
	r.show();
	return 0;
	}
