#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n; cin>>n;
	int *arr = new int[n];
	long double sum =0;
	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
		sum += arr[i];
	}
	long double avg= sum/n;
	cout<<avg;
	
}
