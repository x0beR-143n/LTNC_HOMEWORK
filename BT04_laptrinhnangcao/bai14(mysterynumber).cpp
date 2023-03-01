#include<iostream>
using namespace std;
bool check(int a[], int n, int x)
{
    for(int i=0; i<n; i++)
    {
        if(a[i]==x)
        {
            return false;
        }
    }return true;
}
int mysterynumber(int a[], int b[], int n)
{
    for(int i=0; i<n+1; i++)
    {
        if(check(a,n,b[i]))
        {
            return b[i];
        }
    }
    return 0;
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    int b[n+1];
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    for(int i=0; i<n+1; i++)
    {
        cin >> b[i];
    }
    cout << mysterynumber(a,b,n);
    return 0;
}
