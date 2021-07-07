#include<bits/stdc++.h>
using namespace std;
int main()
{
	string first_name, second_name;
	map<char, int> m1;
	cin>>first_name>>second_name;
	for (int i = 0; i < first_name.length(); ++i)
	{
		/* code */
		m1[first_name[i]]++;
	}
	for (int i = 0; i < second_name.length(); ++i)
	{
		/* code */
		m1[second_name[i]]++;
	}
	string shuffled; cin>>shuffled;
	if(( first_name.length() + second_name.length() )!= shuffled.length() )
	{
		cout<<"NO";
		return 0;
	}
	for (int i = 0; i < shuffled.length(); ++i)
	{
		/* code */
		m2[shuffled[i]]++;
	}

	for (int i = 0; i < shuffled.length(); ++i)
	{
		/* code */
		if(m1[shuffled[i]] != m2[shuffled[i]])
		{
			cout<<"NO";
			return 0;
		}
	}
	cout<<"YES"; return 0;
}