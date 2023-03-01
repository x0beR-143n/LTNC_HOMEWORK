#include<iostream>
#include<math.h>
using namespace std;
bool checkInt(double n)
{
    if(n==(int)n)
        return true;
    else
        return false;
}
bool checkSquarenumber(int n)
{
   if(checkInt(sqrt(n)))
   {
       return true;
   }
    return false;
}
bool checkPrime(int n)
{
    if(n<=1)
    {
        return false;
    }
    if(n==2 || n==3)
    {
        return true;
    }
    if(n%2==0)
    {
        return false;
    }
    for(int i=3; i<=sqrt(n) ;i+=6)
    {
        if(n%i==0 || n%(i+2) ==0 || n%(i+4) == 0)
        {
            return false;
        }
    }
    return true;
}
bool checkPerfectNumber(int n)
{
    int sum=0;
   for(int i=1; i<=n/2; i++)
   {
       if(n%i==0)
       {
           sum+=i;
       }
   }
    if(sum == n)
    {
        return true;
    }
    else{
        return false;
    }
}
int main()
{
    int n;
    cin >> n;
    cout << "List of square number: ";
    for(int i=2; i<=n; i++)
    {
        if(checkSquarenumber(i))
            cout << i << " ";
    }

    cout << endl << "List of prime number: ";

    for(int i=2; i<=n; i++)
       {
           if(checkPrime(i))
            cout << i << " ";
       }
       cout << endl << "List of perfect number: ";

    for(int i=2; i<=n; i++)
       {
        if(checkPerfectNumber(i))
            cout << i << " ";
        }
    return 0;
}
