#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int count=0;
    double max;
    while(n>0)
    {
        double x;
        cin >> x;
        if(count==0)
        {
            max=x;
            count++;
            n--;
            continue;
        }
        if(max < x && count>0)
        {
            max=x;
        }
        n--;
    }
    cout << max;
    return 0;
}
