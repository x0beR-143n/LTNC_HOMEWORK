#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        a[i]=i+1;
    }
    bool mark[n];
    for(int i=0; i<n; i++)
    {
        mark[i]=true;
    }
    for(int i=1; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(a[j] % a[i] == 0)
            {
                mark[j]=false;
            }
        }
    }
    for(int i=1; i<n; i++)
    {
        if(mark[i] == true)
        cout << a[i] << " ";
    }
    return 0;
}
