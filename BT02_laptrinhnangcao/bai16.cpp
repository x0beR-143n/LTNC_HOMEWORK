#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    do{
        cout<<"Nhap vao 1 so trong khoang 0-9: ";
        cin >> n;
        switch(n)
        {
        case 0:
        {
            cout << "Vua nhap chu so: Khong" << endl;
            break;
        }
        case 1:
        {
            cout << "Vua nhap chu so: Mot" << endl;
            break;
        }
        case 2:
        {
            cout << "Vua nhap chu so: Hai" << endl;
            break;
        }
        case 3:
        {
            cout << "Vua nhap chu so: Ba" << endl;
            break;
        }
        case 4:
        {
            cout << "Vua nhap chu so: Bon" << endl;

            break;
        }
        case 5:
        {
            cout << "Vua nhap chu so: Nam" << endl;
            break;
        }
        case 6:
        {
            cout << "Vua nhap chu so: Sau" << endl;
            break;
        }
         case 7:
        {
            cout << "Vua nhap chu so: Bay" << endl;
            break;
        }
         case 8:
        {
            cout << "Vua nhap chu so: Tam" << endl;
            break;
        }
         case 9:
        {
            cout << "Vua nhap chu so: Chin" << endl;
            break;
        }
        default:
            {
            }
        }
    }
    while(0<=n && n<=9);


    return 0;
}
