#include<iostream>
using namespace std;
struct Point{
    double x;
    double y;
    Point(double x1, double y1)
    {
        x=x1;
        y=y1;
    }
};
Point midPoint(const Point p1, const Point p2)
{
    Point new_point(0,0);
    new_point.x=(p1.x+p2.x) /2;
    new_point.y=(p1.y+p2.y) /2;
    return new_point;
}
int main()
{
    Point p1(4,8);
    Point p2(12,4);
    Point new_ = midPoint(p1,p2);
    cout << new_.x << " " << new_.y;
    return 0;
}
