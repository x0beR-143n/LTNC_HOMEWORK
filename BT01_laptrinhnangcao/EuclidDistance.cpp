#include <iostream>
#include <iomanip>
#include<math.h>
using namespace std;
int main()
{
    int x1,x2,y1,y2;
    cin >> x1 >> y1 >> x2 >> y2;
    cout << setprecision(3) << fixed << sqrt((x1-x2) * (x1-x2) + (y1-y2)*(y1-y2));
    return 0;
}
