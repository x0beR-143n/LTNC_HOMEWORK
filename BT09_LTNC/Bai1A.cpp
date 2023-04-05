#include<iostream>
using namespace std;
int length(const char* c)
{
    int count=0;
    while(c[count] != '\0')
    {
        count++;
    }
    return count;
}
char* concat(const char* c1, const char* c2)
{
    int length_c1=length(c1);
    int length_c2=length(c2);
    char* c = new char [length_c1+length_c2];
    for(int i=0; i<length_c1; i++)
    {
        c[i]=c1[i];
    }
    int index=0;
    for(int i=length_c1; i< length_c1+length_c2; i++)
    {
        c[i]=c2[index];
        index++;
    }
    c[length_c1+length_c2]='\0';
    return c;
}
int main()
{
    const char* a= new char [10];
    const char* b= new char [10];
    a="Hello";
    b="World";
    char* combine=concat(a,b);
    cout << combine;
    return 0;
}
