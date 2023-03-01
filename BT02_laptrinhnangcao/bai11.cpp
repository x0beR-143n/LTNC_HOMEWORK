#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int min, max, step;
    cin >> min >> max >> step;
    cout << "Fahrenheit" << "     " << "Celsius" << "     " << "Absolute value" << endl;
    for( int i=min; i<=max ;i+=step)
    {
        double C=((i-32)*5.00)/9;
        double K=C+273.15;
        cout << i << setw(20) << setprecision(2) << fixed << C  << setw(12) << setprecision(2) << fixed << K << endl;
    }
    return 0;
}
