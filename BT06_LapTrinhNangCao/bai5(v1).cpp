#include<iostream>
using namespace std;
int x[20];
int number;
bool b[20];
int sum=0;
void printarr(int a[],int n)
{
    for(int i=0; i<n; i++)
    {
        if(a[i] != 0 && b[i]==true)
        cout << a[i] << " ";
    }
    cout <<endl;
}
void partition_(int index,int n)
{
    for(int i=n; i>=1; i--)
    {
        sum+=i;
        x[index]=i;
        if(sum==number)
        {
            printarr(x,number);
            continue;
        }
        if(sum > number)
        {
            sum-=i;
            b[index]=false;
        }
        if(sum+i<=number)
        {
            partition_(index+1,i);
            continue;
        }
        if(sum+i > number)
        {
            partition_(index+1,i-1);
        }

        sum=0;
        for(int j=0; j<number; j++)
        {
            b[j]=true;
        }
    }

}
int main()
{
    int n;
    cin >> n;
    number=n;
    for(int i=0; i<number; i++)
    {
        x[i] =0;
    }
     for(int j=0; j<number; j++)
    {
        b[j]=true;
    }
    partition_(0,n);
    return 0;
}
