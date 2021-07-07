#include <bits/stdc++.h>
using namespace std;
int main()
{
	string yes_no;
	cin>>yes_no;
	for (int i = 0; i < yes_no.length(); ++i)
	{
		/* code */
		if(yes_no[i]=='H' || yes_no[i]=='Q' || yes_no[i]=='9')
		{
			cout<<YES<<endl;
			return 0;
		}
		
		
	}
	cout<<NO<<endl;
	return 0;
}