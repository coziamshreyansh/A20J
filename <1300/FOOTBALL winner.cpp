#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n; cin>>n;
	string s, result;
	map<string ,int> frequency; int max = 0;
	while(n--)
	{
		cin>>s;
		frequency[s]++;
		if(max < frequency[s])
		{
			result = s;
			max = frequency[s];
		}
	}
	if(n==1)
	{
		cout<<s;
	}
	else
	{
		cout<<result;
	}
}