#include<iostream>
using namespace std;
 Mult(int x,int y)
{
if(y==1)
return x;
if(x==0 || y==0)
return -1;
return x+Mult(x,y-1);
}
int main()
{
	int a,b;
	cin>>a>>b;
	cout<<Mult(a,b);
	return 0;
}

