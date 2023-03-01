#include<iostream>
#include<vector>
#include<iomanip>
using namespace std;
int main()
{
    int i=1;
    double diem;
    vector<double> vc;
    do{
        cout << "Nhap diem mon hoc " << i << " : ";
        cin >> diem;
        if(diem < 0)
        {
            cout << "So mon hoc: " << i-1 << endl;
            break;
        }
        if(diem > 10)
        {
            while(diem>10)
            {
            cout << "nhap lai diem mon " << i << "(trong khoang tu 0-10): ";
            cin >> diem;
            }
            vc.push_back(diem);
            i++;
            continue;
        }
        if(diem <= 10 && diem >= 0)
        {
            vc.push_back(diem);
            i++;
        }
    }
    while(true);
    double sum=0;
    for(int k : vc)
    {
        sum+=k;
    }
    cout <<"Diem trung binh cua " << i <<" mon hoc: " <<setprecision(3) << fixed << (sum*1.000)/(i-1);
    return 0;
}
