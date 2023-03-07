#include<iostream>
#include<math.h>
using namespace std;
double convertIntway1(double x)
{
    return ceil(x);
}
int convertIntway2(double x)
{
    double tmp = x- (int) x;
    if(tmp < 0.5)
    {
        return ( (int) x );
    }else
    {
         return ( (int) x ) + 1;
    }
}
int main()
{
    double x;
    cin >> x;
    cout <<"Way 1: " << convertIntway1(x) << endl << "Way 2: " << convertIntway2(x);
    return 0;
}
