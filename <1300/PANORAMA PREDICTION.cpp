#include<bits/stdc++.h>
using namespace std;
bool isPrime(int x)
{
	if(x==1 || (x==2 || x==3))
	{
		return true;
	}
	for(int i=1; i<x/2; i++)\
	{
		if(x%i == 0)
		{
			return false;
		}
	}
	return true;
}
int main()
{
	int first, second; cin>>first>>second;
	if(!isPrime(second) || !isPrime(first))
	{
		cout<<"NO";
		return 0;
	}
	int nextprime;
	for(int i=first+1; i<=second; i++) 
	{
		if(isPrime(i))
		{
			nextprime = i;
			break;
		}
	}
	if(second == nextprime)
	{
		cout<<"YES";
	}
	return 0;
}