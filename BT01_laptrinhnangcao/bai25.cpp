#include<iostream>
#include <math.h>
#include <set>
using namespace std;
int main()
{
    int a[5];
    set<int> s;
    for( int i=0; i<5; i++)
    {
        cin >> a[i];
        s.insert(a[i]);
    }
    int count =0;
    for(int i: s)
    {
        if(count==2)
        {
            cout << i;
        }
        count++;
    }
    return 0;
}
