#include<iostream>
using namespace std;
int main()
{
    int* p = new int;
    *p = 10;
    int* p2 = p;   // con tro p chua tro den 1 gia tri nao nhung da cho bang con tro p2, phai dao dong 3 len truoc
    delete p;
    *p2 = 100;
    cout << *p2;
    delete p2;

    return 0;
}
