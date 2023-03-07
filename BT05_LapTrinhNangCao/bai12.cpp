#include<iostream>
using namespace std;
int validateInput(int k, int n)
{
    if(k<0 || k>n)
    {
        return 0;
    }
    if(n<1 || n>20)
    {
        return 0;
    }
    return 1;
}
long long factorial(int n)
{
    long long tich=1;
    if(n==1 || n==0)
    {
        return 1;
    }
    for(int i=2; i<=n; i++)
    {
        tich *= i;
    }
    return tich;
}
long long toHop(int k, int n)
{
    return  factorial(n) / (factorial(k) * factorial(n-k));
}
int main()
{
    int n,k;
    do{
        cin >> k >> n;
        if(n==k || n==-1)
        {
            break;
        }
        if(validateInput(k,n) == 0)
        {
            cout << "Invalidate input!" << endl;
            continue;
        }
        cout << toHop(k,n) << endl;
    }
    while(true);
    return 0;
}
