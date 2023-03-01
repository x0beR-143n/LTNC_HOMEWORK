#include<iostream>
using namespace std;
struct patient{
    int stt;
    int waiting_time;
};

void sorting(patient a[], int length)
{
    for(int i=0; i<length; i++)
    {
        for(int j=0; j<length; j++)
        {
            if(a[i].waiting_time < a[j].waiting_time )
            {
                swap(a[i],a[j]);
            }
        }

    }
}
int sumof(patient a[], int length)
{
    int sum=0;
    for(int i=0; i<length-1; i++)
    {
        sum+= a[i].waiting_time;
    }
    return sum;
}
int main()
{
    int n;
    cin >> n;
    patient a[n];
    for(int i=0; i<n; i++)
    {
        cin >> a[i].waiting_time;
        a[i].stt=i+1;
    }
    sorting(a,n);
    cout <<"Waiting time: " << sumof(a,n) << endl;
    cout << "The order: ";
    for(int i=0; i<n; i++)
    {
        cout << a[i].stt << " ";
    }
    return 0;
}
