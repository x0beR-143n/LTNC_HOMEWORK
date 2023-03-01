#include <iostream>
using namespace std;
bool checkInt(double n)
{
    if(n==(int)n)
        return true;
    else
        return false;
}
int main()
{
    int money;
    cin >> money;
    double interest= 0.02*money;
    for(int i=0 ;i<12; i++)
    {
         money= money+interest;
         cout << money << " ";
         interest = money*0.02;
         if(checkInt(interest) == false)
         {
            if ( interest-((int) interest) >=0.5)
            {
                interest=(int) interest + 1;
            }
            else{
                interest=(int) interest;
            }
         }
         cout << interest << endl;
    }

}
