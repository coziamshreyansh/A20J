
#include <iostream>
#include <cstdlib>
using namespace std;
 
int a,b,n;
int main()
{
    cin >> a>>b>>n;
    a*=10; // dividend increased by one digit
    int flag=0;
    for(int i=0;i<10;i++) // 
    {
        if(a%b==0) 
        {
            flag=1;    
            break;
        }
        a++;
    }
  // if dividend range % divisor gives 0 rem, add more n-1 digits, n-1 more coz we have already added one digit before 
    if(flag)
    {
        cout << a;
        for(int i=0;i<n-1;i++)
        {
            cout<<"0";
        }
        cout << endl;
    }
    else
    {
        cout << "-1"<<endl;
    }
return 0;
}
