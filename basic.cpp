/*#include<iostream>
using namespace std;
 int main()
{
	int a,b;//Data members of the class
	cout<<"Enter 2 values:";
	cin>>a;
	cin>>b;
	cout<<"Sum="<<a+b<<endl<<"Diff="<<a-b<<endl<<"Pro="<<a*b<<endl<<"Div="<<a/b<<endl<<"Hello"<<endl<<"Bye");
    return 0;
}
#include<stdio.h>
int main() {
    int n, d;
    scanf("%d%d", &n, &d);
    int ar[n];
    for(int i=0;i<n;i++) 
	{
        scanf("%d",&ar[i]);
    }
    d = d % n;
    for (int i = d; i < n; i++) {
        printf("%d ", ar[i]);
    }
    for (int i = 0; i < d; i++) {
        printf("%d ", ar[i]);
    }
    printf("\n");
    return 0;
}*/
#include <stdio.h>

int main() {
	// your code here
int a,b,c;
scanf("%d%d%d",&a,&b,&c)
  while(1)
{
	if(a==0&&b==0&&c==0)
	{
		break;
	}
	if(b-a==c-b)
	{
		printf("AP %d\n",c+c-b);
	}
	else
	{
		printf("GP %d\n",c*(c/b));
	}
}
	return 0;
}
