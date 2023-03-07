#include<iostream>
#include<time.h>
#include<math.h>
using namespace std;
int randomnumber()
{
    srand( (int) time(0));
    int number= 1+ rand() % (25+1);
    return number;
}
void printThreenum(int a[], int n)
{
    for(int i=0; i<n-2; i++)
    {
        for(int j=i+1;j<n-1;j++)
        {
            for(int k=j+1; k<n; k++)
            {
                if( (a[i] + a[j] + a[k]) % 25 == 0)
                  {
                    cout << "(" << a[i] << " " << a[j] << " " << a[k] << ")" << endl;
                  }
            }
        }
    }
}

void printArr(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int n=randomnumber();
    int a[n];
    int count=0;
    for(int i=0; i<n;i++)
    {
        a[i]=count;
        count++;
    }
    printArr(a,n);
    printThreenum(a,n);
    return 0;
}

