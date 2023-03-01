#include<iostream>
#include<iomanip>
using namespace std;
struct diemtb
{
    double mark;
    double he_so;
};
int main()
{
    cout << "Tong so mon hoc can tinh diem trung binh: ";
    int n;
    cin >> n;
    diemtb a[n];
    int n1=n;
    double diem;
    double heso;
    int i=0;
    do
    {
        cout << "Diem mon hoc " << i+1 << " : ";
        cin >> diem;
        if(diem > 10 || diem <0)
        {
            while(diem >10 || diem <0)
            {
                cout << "Nhap lai diem mon hoc " << i+1 << "(trong khoang tu 0-10): ";
                cin >> diem;
            }
            a[i].mark = diem;
        }
        else{
            a[i].mark=diem;
        }
        cout << "He so mon hoc " << i+1 << " : ";
        cin >> heso;
        if( heso != 3 && heso != 1  && heso != 2 && heso!=1.5 && heso!=2.5 )
        {
            while(heso != 3 && heso != 1  && heso != 2 && heso!=1.5 && heso!=2.5 )
            {
                cout << "Nhap lai he so mon hoc " << i+1 << "(1 1,5 2 2,5 hoac 3): ";
                cin >> heso;
            }
            a[i].he_so= heso;
        }
        else{
            a[i].he_so = heso;
        }
        i++;
        n--;
    }
    while(n>0);
    cout << "So mon hoc: " << i << endl;
    double sum=0;
    double sumheso=0;
    for(int j=0; j<n1; j++)
    {
        sum = sum + (a[j].mark * a[j].he_so);
        sumheso += a[j].he_so;
    }
    cout << "Tong he so: " << sumheso << endl;
    cout <<"Diem trung binh cua " << i << " mon hoc: " << setprecision(3) << fixed << sum/sumheso;
    return 0;
}
