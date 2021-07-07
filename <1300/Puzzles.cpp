#include<iostream>
#include <climits>
using namespace std;
int main()
{
	int n , m;  cin>>n>>m;
	int *psize = new int[m];
	

	for (int i = 0; i < n; ++i)
	{
		/* code */
		cin>>psize[i];
		
	}
	sort(psize , psize + n);
	int min_result = psize[0] - psize[1];

	if(n > 2)
    {
    		for (int i = 1; i < m-1; ++i)
    		{
    			/* code */

    		    if(psize[i+1] - psize[i] < min_result)
    		    {
    		    	min_result = psize[i+1] - psize[i];
    		    }
    		}
    		cout<<min_result;
    }
    else
    {
    	cout<<min_result;
    }
	return 0;
}