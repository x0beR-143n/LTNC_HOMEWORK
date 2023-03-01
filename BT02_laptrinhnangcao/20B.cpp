#include <iostream>
using namespace std;
int main()
{
    int salary;
    cin >> salary;
    int insurance=salary*0.09;
    salary = salary-insurance;
    int thue;
    if(salary <= 1000000)
    {
        thue=0;
    }
    if(salary > 1000000 && salary <= 1500000)
    {
        thue=(salary-1000000)*0.1;
    }
    if(salary > 1500000 && salary <= 2000000)
    {
        thue=500000*0.1 + (salary - 1500000)*0.15;
    }
    if(salary > 2000000)
    {
        thue= 500000*0.1 + 500000*0.15+(salary-2000000)*0.2;
    }
        cout << "thue phai tra: " << thue << endl;
        cout << "So tien nhan duoc sau thue: " << salary-thue;
    return 0;
}
