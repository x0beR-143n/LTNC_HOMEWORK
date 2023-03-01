#include<iostream>
using namespace std;
double Average(int a[], int length)
{
    double average;
    int sum=0;
    for(int i=0; i<length; i++)
    {
        sum+=a[i];
    }
    average=(sum*1.0)/length;
    return average;
}
double Variance(int a[], int length, double average)
{
    double variance;
    double sum;
    for(int i=0; i<length; i++)
    {
        sum+=((a[i]-average)*(a[i]-average));
    }
    variance=sum/length;
    return variance;
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
    double aver_rage=Average(a,n);
    cout << aver_rage << endl << Variance(a,n,aver_rage);
    return 0;
}
