#include<iostream>
using namespace std;
int main()
{
	int n; cin>>n;
	int *a = new int[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}
	int m; cin>>m;
	int *b = new int[m];
	for (int i = 0; i < m; ++i)
	{
		cin>>b[j];
	}
	int max = 0, max_count = 0; int remainder, divison;
	for (int i = 0; i < n; ++i)
	{
		for (int i = 0; i < m; ++i)
		{
			remainder = (b[j] % a[i]);
			divison = (b[j]/a[i]);
			if ( remainder == 0 && max == division)
			{
				max_count++;
			}
			else if (remainder == 0 && max < division)
			{
				max = division; max_count = 1;
			}
		}
	}
	cout<<max_count;
	return 0;
}