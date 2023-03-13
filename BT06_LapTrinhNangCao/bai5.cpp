#include<iostream>
using namespace std;
int sum=0;
int number;
void partition_(int n)
{
    if(n==0)
    {
        return;
    }
    sum+=n;
    if(sum==number)
    {
        cout << n << " ";
    }
    else
    {
        if(sum<number)
        {
            cout << n << " ";
        }
        if(sum>number)
        {
            sum-=n;
        }
        if(sum+n<=number)
        {
            partition_(n);
        }
        if(sum+n>number)
        {
            partition_(n-1);
        }

    }
}
int main()
{
    int n;
    cin >> n;
    number=n;
    for(int i=n; i>=1; i--)
   {
        partition_(i);
        sum=0;
        cout << endl;
   }
    return 0;
}

