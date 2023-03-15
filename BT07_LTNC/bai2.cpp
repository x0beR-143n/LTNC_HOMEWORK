#include<iostream>
#include<time.h>
using namespace std;
int randomnumber()
{
    srand((int) time(0));
    return rand()%11;
}
int randomIndex(int *a)
{
    srand(*a);
    *a += rand()%11;
    int n=rand()%11;
    if(n==10)
        return randomIndex(a);
    else
        return n;
}
int main()
{
    int *a = new int (randomnumber());
    int race[71];
    for(int i=0; i<71; i++)
    {
        race[i]=i;
    }
    int tortoise_movement[]={3,3,3,3,3,1,1,1,-6,-6};
    int rabbit_movement[]={0,0,9,9,-12,1,1,1,-2,-2};
    int tortoise_pos=0;
    int rabbit_pos=0;
    int rua_index, tho_index;
    cout << "Race Start!" << endl;
    while(true)
    {
        rua_index = randomIndex(a);
        tho_index = randomIndex(a);
        tortoise_pos += tortoise_movement[rua_index];
        if(tortoise_pos < 0)
        {
            tortoise_pos = 0;
        }
        rabbit_pos += rabbit_movement[tho_index];
        if(rabbit_pos < 0)
        {
            rabbit_pos=0;
        }
        cout << "Tortoise position: " << tortoise_pos << " (Move: " << tortoise_movement[rua_index] << ")__________" << "Rabbit position: " << rabbit_pos << " (Move: " << rabbit_movement[tho_index] << ")" << endl;
        if(rabbit_pos >= 70 )
        {
            cout << "Race end! Rabbit won!";
            break;
        }
        if(tortoise_pos >=70)
        {
            cout << "Race end! Tortoise won!";
            break;
        }
    }
    return 0;
}
