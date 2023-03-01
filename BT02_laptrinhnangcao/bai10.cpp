#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    cout << "Fahrenheit" << "     " << "Celsius" << "     " << "Absolute value" << endl;
    for( int i=0; i<=300; i+=20)
    {
        double C=((i-32)*5.00)/9;
        double K=C+273.15;
        cout << i << setw(20) << setprecision(2) << fixed << C  << setw(12) << setprecision(2) << fixed << K << endl;
    }
    return 0;
}
