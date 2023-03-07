#include<iostream>
#include<time.h>
using namespace std;
int randomnumber(int n)
{
    srand( (int) time(0));
    int number= 1+ rand() % (n+1);
    return number;
}
int main()
{
    int n;
    cin >> n;
    cout << randomnumber(n);
    return 0;
}
