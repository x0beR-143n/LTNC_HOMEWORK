#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int b;
    int sum=0;
    while(n>0)
    {
        b=n%10;
        n=n/10;
        sum+=b;
    }
    cout << sum;
    return 0;
}
