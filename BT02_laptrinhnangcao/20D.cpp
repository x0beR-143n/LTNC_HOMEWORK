#include <iostream>
using namespace std;
int main()
{
    int salary=100*12000+50*16000+5*20000;
    int insurance=salary*0.09;
    salary = salary-insurance;
    salary=salary-(500000*0.1+100000*0.15);
    int payment=1500000+(salary)-2000000;
    int month=1;
    int debt=10000000;
    double interest;
    while(payment < debt)
    {
        interest=debt*0.02;
        debt=debt+interest;
        debt=debt-payment;
        month++;
    }
    cout << month;
    return 0;
}
