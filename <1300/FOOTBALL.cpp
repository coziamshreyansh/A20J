#include <iostream>
using namespace std;
int main()
{
	/* code */
	string str; cin>>str; int count;
	if(str.length() <= 6)
	{
		cout<<"NO"; return 0;
	}
	for (int i = 0; i < str.length() ; ++i)
	{
		/* code */
        if((str[i] == str[i+1] && i+1 != str.length()) && (i + 6 < str.length()))
        {
        	count = 1;
        	int j = i+1;
			for (; j < i+6; ++j)
			{
				/* code */
				if (str[j] == str[j+1] )
				{
					/* code */
                    count++;
				}
				else
				{
					break;
				}
			}
			i=j;
		}
		if(count >= 6)
		{
			cout<<"YES";
			return 0;
		}


	}

	cout<<"NO";
	return 0;
}