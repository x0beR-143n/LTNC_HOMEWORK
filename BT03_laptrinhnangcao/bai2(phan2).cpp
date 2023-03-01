#include<iostream>
#include<algorithm>
using namespace std;
int evensum(int a[], int length)
{
    int sum=0;
    for(int i=0; i<length; i++)
    {
        if(a[i]%2==0)
        {
            sum+=a[i];
        }
    }
    return sum;
}
int oddquantity(int a[], int length)
{
    int count=0;
    for(int i=0; i<length; i++)
    {
        if(a[i]%2 != 0)
            {
                count++;
            }
    }
    return count;
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++)
    {cin >> a[i];}
    sort(a,a+n);
    cout << evensum(a,n) << endl << oddquantity(a,n);
    return 0;
}
