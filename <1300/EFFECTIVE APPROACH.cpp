#include <iostream>
using namespace std;
int main()
{
	int n; cin>>n;
	int *arr = new int[n];
	for (int i = 0; i < n; ++i)
	{
		/* code */
		cin>>arr[i];
	}
	int b; cin>>b;
	int search_query;
	int count1=0; int count2 = 0; 
	while(b--)
	{
	//1 to n approach
		cin>>search_query;
		 
		for(int j=0; j<n; j++)
		{
			count1++;
			if(arr[i]== search_query)
			{
				break;
			}
		}
	//n to 1 approach
		
		for (int j = n-1; j>= 0; i--)
		{
			/* code */
			count2++;
			if(arr[i]==search_query)
			{
				break;
			}
		}
	}
	cout<<count1<<" "<<count2;
	delete
	return 0;
}