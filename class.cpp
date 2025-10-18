#include<iostream>
using namespace std;
class sample
{
  private:
		int x;
  public:
			void get()
			{
				x=10;
			}
			void display()
			{
				cout<<"x="<<x;
			}
};
int main()
{
	sample s;
s.get();
s.display();
	}
