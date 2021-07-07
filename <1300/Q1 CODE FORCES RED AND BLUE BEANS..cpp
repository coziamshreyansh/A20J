#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	int red , blue, difference;
	while(t--)
	{
		cin>>red>>blue>>difference;
		
		if( (red>=1 && blue>=1) && abs(red-blue)<=difference)
		{
			cout<<"YES";
			cout<<endl;
		}
		else
		{
			cout<<"NO";
			cout<<endl;
		}
	}
}
