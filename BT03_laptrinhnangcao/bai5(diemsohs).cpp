#include<iostream>
#include<iomanip>
using namespace std;
struct Student{
    double math;
    double physics;
    double english;
    double average;
    int id;
};
void sortMath(Student a[])
{
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            if(a[i].math < a[j].math)
            {
                swap(a[i],a[j]);
            }
        }
    }
}
void sortPhysics(Student a[])
{
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            if(a[i].physics < a[j].physics)
            {
                swap(a[i],a[j]);
            }
        }
    }
}
void sortAverage(Student a[])
{
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            if(a[i].average < a[j].average)
            {
                swap(a[i],a[j]);
            }
        }
    }
}
int main()
{
    Student a[3];
    for(int i=0; i<3; i++)
    {   a[i].id=i+1;
        cout <<"Sinh vien " << i+1 << " :"<< endl;
        do{
            cout <<"Nhap diem toan: ";
            cin >> a[i].math;
            if(a[i].math > 10 || a[i].math <0)
            {
                while(a[i].math > 10 || a[i].math <0)
                {
                    cout << "Diem khong duoc vuot qua 10 va phai lon hon 0" << endl;
                    cout<<"Nhap lai diem toan: ";
                    cin >> a[i].math;
                }
                break;
            }
            break;
        }
        while(true);
        do{
            cout <<"Nhap diem li: ";
            cin >> a[i].physics;
            if(a[i].physics > 10 || a[i].physics <0)
            {
                while(a[i].physics > 10 || a[i].physics <0)
                {
                    cout << "Diem khong duoc vuot qua 10 va phai lon hon 0" << endl;
                    cout<<"Nhap lai diem li: ";
                    cin >> a[i].physics;
                }
                break;
            }
            break;
        }
        while(true);
        do{
            cout <<"Nhap diem tieng anh: ";
            cin >> a[i].english;
            if(a[i].english > 10 || a[i].english <0)
            {

                while(a[i].english > 10 || a[i].english <0)
                {
                    cout << "Diem khong duoc vuot qua 10 va phai lon hon 0" << endl;
                    cout <<"Nhap lai diem tieng anh: ";
                    cin >> a[i].english;
                    break;
                }
            }
            break;
        }
        while(true);
    }
    sortMath(a);
    cout << "sap xep theo diem mon toan: ";
    cout << setw(15) << "Diem toan" << endl;
    for(int i=2; i>=0; i--)
    {
        cout << "Sinh vien " << a[i].id << setw(27) << a[i].math << endl;
    }

    sortPhysics(a);
    cout << "sap xep theo diem mon li: ";
    cout << setw(15) << "Diem li" << endl;
    for(int i=2 ;i>=0; i--)
    {
        cout << "Sinh vien " << a[i].id << setw(27) << a[i].physics<< endl;
    }
    for(int i=0; i<3; i++)
    {
        a[i].average =(double) (a[i].math+a[i].physics+a[i].english)/3;
    }
    sortAverage(a);
    cout << "sap xep theo diem trung binh: ";
    cout << setw(15) << "Diem trung binh" << endl;
    for(int i=2 ;i>=0; i--)
    {
        cout << "Sinh vien " << a[i].id << setw(27) <<setprecision(3) << fixed << a[i].average<< endl;
    }

    return 0;
}
