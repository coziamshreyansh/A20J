#include<iostream>
using namespace std;
int main()
{
	int n; cin>>n;  int petya, y, z; int count =0;
	while(n--)
	{
		int a=0,b=0,c=0;
		cin>>petya>>y>>z;
		a+= petya; b+= y; c+=z;
		if((a+b+c )>= 2)
		{
			count++;
		}
	}
	cout<<count;
	return 0;

}