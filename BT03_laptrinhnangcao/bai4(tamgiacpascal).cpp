#include<iostream>
#include<iomanip>
using namespace std;
int factorial(int n)
{
    int fact=1;
    for(int i=1; i<=n; i++)
    {
        fact *= i;
    }
    return fact;
}
int pascalelement(int k, int n)
{
    return factorial(n)/(factorial(k)*factorial(n-k));
}
int main()
{
    int n;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<=i; j++)
        {
            if(j==0)
            cout << pascalelement(j,i);
            else
            cout << setw(5) << pascalelement(j,i);
        }
        cout << endl;

    }
    return 0;
}
