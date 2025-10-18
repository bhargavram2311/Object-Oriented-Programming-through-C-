#include<iostream>
using namespace std;
class emp
{
	private:
		string name;
		string qualification;
		int empid;
		int salary;
		public:
			void get()
			{
				cin>>name;
				cin>>qualification;
				cin>>empid;
				cin>>salary;
			}
			void show()
			{
				cout<<name<<endl;
				cout<<qualification<<endl;
				cout<<empid<<endl;
				cout<<salary;
			}
};
int main()
{
	emp e;
	e.get();
	e.show();
	return 0;
}
