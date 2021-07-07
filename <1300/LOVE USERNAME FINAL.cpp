#include<iostream>
using namespace std;
int main()
{
	int n; cin>>n;
	int *arr= new int [n]; int worst_score==10000;

	for (int i = 0; i < n; ++i)
	{
		/* code */
		cin>>arr[i]; 
		if(arr[i]<worst_score)
		{
			arr[i]=worst_score;
		}
	}
	int count =0; 
	for (int i = 0; i < n; ++i)
	{
		/* code */
		if(i+1 != n && arr[i]<arr[i+1])
		{
			count ++;
		}
		else if(arr[i]>worst_score)
		{
			count++:
		}
	}
	cout<<count;
	return 0;
}