#include<iostream>
using namespace std;
int main()
{
    int count[10];
    for(int i=0; i<10; i++)
    {
        count[i] = 0;
    }
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    for(int j=0; j<=9; j++)
    {
        for(int i=0; i<n; i++)
        {
        if(a[i] == j)
        {
            (count[j])++;
        }
        }
    }
    for(int i=0; i<=9; i++)
    {
        if(count[i] > 1)
            cout << "number " << i << " appears " << count[i] <<" times"<< endl;
        else
            cout << "number " << i << " appears " << count[i] <<" time"<< endl;
    }
    return 0;
}
