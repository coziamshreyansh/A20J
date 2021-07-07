#include<iostream>
using namespace std;
int main()
{
	int n; cin>>n;
	int *arr = new int[n];
	int amazing=0, worst=0;
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
		if(i>0 && a[i]<a[i-1])
		{
			worst++;
		}
	}
	for (int i = 0; i < n-1; ++i)
	{
		if(a[i]<a[i+1])
		{
			amazing++;
		}
	}
	cout<<amazing;
	return 0;

}