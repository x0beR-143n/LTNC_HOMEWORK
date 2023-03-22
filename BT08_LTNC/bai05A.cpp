#include<iostream>
using namespace std;
struct Point {
    int x[10];
    int y;
};
int main()
{
    Point p1;
    for(int i=0;i<10; i++)
    {
        p1.x[i]=i;
    }
    p1.y=21;
    Point p2;
    p2=p1;
    cout << p1.x << " " << p1.y << " " << &p1.y << endl;
    cout << p2.x << " " << p2.y<< " " << &p2.y << endl;
    for( int i=0; i<10; i++)
    {
        cout << p2.x[i] << " ";
    }
    // cac gia tri trong mang va gia tri bienn y deu giong nhau nhung dia chi o nho thi khac nhau.
    return 0;
}
