#include<iostream>
#include<math.h>
using namespace std;
bool checkPrime(int n)
{
    if(n <= 1)
    {
        return false;
    }
    if(n ==2 || n==3)
    {
        return true;
    }
    if(n%2==0)
    {
        return false;
    }
    for( int i=3; i<=sqrt(n); i+=6)
    {
        if(n%i==0 || n%(i+2)==0 ||n%(i+4) == 0)
          {
            return false;
        }
    }
    return true;
}
int main()
{
    int n;
    cin >> n;
    for(int i=2; i<=n; i++)
    {
    if(checkPrime(i))
        cout << i << " ";
    else
        continue;
    }

    return 0;
}
