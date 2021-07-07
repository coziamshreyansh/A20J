#include<iostream>
#include<cstring>
int main()
{
	int x=0; 
	int n; cin>>n;
	string str; cin>>str;
	while(n--)
	{
		if(str[0]=='+' || str[2]=='+')
		{
			x +=1;
		}
		else
		{
			x-=1;
		}
	}
	cout<<x;
}