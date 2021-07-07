#include <bits/stdc++.h>
using namespace std;
int count(int *arr, int d, int x)
{
	int count = 0; 
	int i = x-1;
	while(i<d)
	{
		if(arr[i]==1)
		{
			arr[i]=0; 
			count ++;
			
		}
		i += x;
	}
	return count;
}
int main()
{
	int k,l,m,n,d;
	cin>>k>>l>>m>>n>>d;
	int arr[d]= {1};
	if(k==1 || l==1 || m==1 || n==1)
	{
		cout<<d;
		return 0;
	}
	int i = count(arr, d, k);
	int j = count(arr, d, l);
	int x = count(arr, d, m);
	int y = count(arr, d, n);
	cout<<i+j+x+y;
	return 0;
}