#include<bits/stdc++.h>
 
using namespace std;
int main()
{
	string name;   getline(cin,name); ; int char_count=0;
	map<char, int>mp;
 
	for(int i=0; i< name.length(); i++)
	{
		
		mp[name[i]]++;
	}
	int one_or_not;
	map<char, int>::iterator it;
	for(it= mp.begin(); it!= mp.end(); it++)
	{
	         one_or_not =  it->second ;       
		if(one_or_not>=1)
		{
			char_count++;
		}
	}
	if(char_count % 2 == 0)
	{
		cout<<"CHAT WITH HER!";
 
	}
	else 
	{
		cout<<"IGNORE HIM!";
 
	}
}