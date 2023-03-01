#include<iostream>
using namespace std;
bool checkDup(int a[], int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(a[i] == a[j])
            {
                return true;
            }
        }
    }
     return false;
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    if(checkDup(a,n))
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
    return 0;

}
