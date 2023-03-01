#include<iostream>
using namespace std;
bool check( double a[][2], int n)
{
    for(int i=0 ; i<n; i++)
    {
        if(a[i][0] < a[i][1])
        {
            return false;
        }
    }
    return true;
}
void sortarr(double arr[][2],int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++ )
        {
            if(arr[i][0] > arr[j][0] )
            {
                swap(arr[i][0], arr[j][0]);
            }
            if(arr[i][1] > arr[j][1] )
            {
                swap(arr[i][1], arr[j][1]);
            }
        }
    }
}
int main()
{
    int n;
    cin >> n;
    double a[n][2];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<2; j++)
        {
        cin >> a[i][j];
        }
    }
    sortarr(a,n);
    if(check(a,n))
    {
        cout << "yes";
    }
    else{
        cout << "No";
    }

    return 0;
}
