#include <bits/stdc++.h>
using namespace std;
int compare(string str1, string str2)
{   
	char c, c2;
                    int j;
	for (int i = 0; i < str1.length(); ++i)
	{
		 c = tolower(str1[i]); c2 = tolower(str2[i]);
		 if(c>c2)
		 {
		                     return 1;
		 }
		 else if(c2>c)
		 {
		                     return -1;
		 }
	}
	return 0;
	
}
int main()
{
	string str1; cin>>str1;
	string str2; cin>>str2;
	cout<<compare(str1, str2);
	return 0;
}