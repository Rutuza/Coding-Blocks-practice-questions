#include<iostream>
using namespace std;
int main()
{
    char ch;
    ch = cin.get();
    int x= 0, y = 0;
    while (ch != '\n')
    {
        if (ch == 'N')
        {
            y++;
        }
        else if(ch == 'E')
        {
            x++;
        }
        else if(ch == 'S')
        {
            y--;
        }
        else
        {
            x--;
        }
        ch = cin.get();
        
    }
    
}