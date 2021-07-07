#include<bits/stdc++.h>
using namespace std;
int converttodecimal(long long x)
{
	int i=0; int decimal = 0; int remainder;
	while(x!=0)
	{
		remainder = x%10;
		x /= 10;
		decimal += remainder*pow(2,i);
		i++;
	}
	return decimal;
}
long long converttobinary(int x)
{
	int i=1; int decimal; long long  binary = 0;
	while(x != 0)
	{
		decimal = x%2;
		x /= 2;
		binary += decimal*i;
		i *= 10;
	}
	return binary;
}
int main()
{
                    long long i,j; 
                    cin>>i;
                    cin>>j;
                    int x = converttodecimal(i);
                    int y = converttodecimal(j);
					long long ans = converttobinary(x^y);
					cout<<ans;
	
}