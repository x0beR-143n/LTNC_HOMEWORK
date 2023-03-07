#include <iostream>
#include<string>
#include<time.h>
#include<vector>
using namespace std;
string randomString()
{
    string a[] = {"c r o s s r o a d","h e l l o w o r l d","s o p h i s t i c a t e d","p r o c r a s t i n a t e"};
    srand((int)time(0));
    int index=rand()%(3+1);
    return a[index];
}
string convertString(string originalstring,int length)
{
    string stringneedconvert=originalstring;
    for(int i=0; i<length; i++)
    {
        if(stringneedconvert[i] == ' ')
        {
            continue;
        }
        stringneedconvert[i]='_';
    }
    return stringneedconvert;
}
bool containChar(char ch, string str)
{
    for(int i=0; i< str.length(); i++)
    {
        if( ch == str[i])
        {
            return true;
        }
    }
    return false;
}
string convert_(string original_string, string marked_string ,char ch)
{
    string str=marked_string;
    for(int i=0; i<original_string.length(); i++)
    {
        if(original_string[i] == ch)
        {
            str[i] = ch;
        }
    }
    return str;
}
bool checkDuplicate(vector<char> ch , char c)
{
    for(int i=0; i<ch.size(); i++)
    {
        if(ch[i] == c)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int count =0;
    string mysteryString = randomString();
    string markedString=convertString(mysteryString,mysteryString.length());
    vector<char> ch;
    cout << "The string is: " << markedString << " (" << mysteryString.length()/2 + 1 << " characters)" << endl;
    cout << "Please guess your string by input a character: ";
    char guessedChar;
    do
    {
        cin >> guessedChar;
        if(ch.empty())
        {
             ch.push_back(guessedChar);
        }
        else
        {
        if(checkDuplicate(ch,guessedChar))
        {
            ch.push_back(guessedChar);
        }
        else
        {
             cout << "The character has been entered before! Please input again: ";
             continue;
        }
        }
        if(containChar(guessedChar, mysteryString))
        {
            markedString = convert_(mysteryString,markedString,guessedChar);
             if(markedString == mysteryString)
            {
                break;
            }
            cout << "Correct! Your string now is: " << markedString << endl;
            cout << "Please input another character: ";
        }
        else{
            count++;
            if(count == 7)
            {
                break;
            }
            cout << "Wrong! Your fault: " << count << ". " << 7-count << " more fault and you will lose!" << endl;
            cout << "Please input another character: ";
        }

    }
    while(true);
    if(count == 7)
    {
        cout << "You loss! The given string is: " << mysteryString;
    }
    else
    {
    cout << "You won! The given string is: " << mysteryString;
    }
    return 0;
}
