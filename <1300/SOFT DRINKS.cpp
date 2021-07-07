#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,k,l,c,d,p,nl, np;
	cin>>n>>k>>l>>c>>d>>p>>nl>>np;
	int available_drinks = k*l/n;
	int available_slices = c*d;
	int salt_req = p/np;
	cout<<min(min(available_drinks, available_slices),salt_req)/n;
	return 0;

}