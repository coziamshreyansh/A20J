#include<iostream>
#include<climits>
using namespace std;
int main()
{
	int nchild, available;
	cin>>nchild>>available;
	int *requirement = new int[nchild];
	int max_factor = INT_MIN; int last_child = 0;
	for (int i = 0; i < nchild; ++i)
	{
		/* code */
		cin>>requirement[i];
		if(requirement[i]>available)
		{
			requirement[i] /= available;
			if( max <= requirement[i])
			{
				max = requirement[i];
				last_child = i+1;
			} 
		}
		

	}
	if ( last_child != 0)
	{
		/* code */
		cout<<last_child;
	}
	else
	{
		cout<<nchild;
	}

	
	

}