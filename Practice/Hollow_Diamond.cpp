#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    // n = (n + 1)/2;

    for (int i = n; i > 1; i--)
    {

        for (int j = i; j > 0; j--)
        {
            if (i == n && j == n)
            {
                continue;
            }
            else
            {
                cout << "*\t";
            }
        }
        for (int j = i; j < n - 1; j++)
        {
            cout << " \t";
        }
        for (int j = i; j < n; j++)
        {
            cout << " \t";
        }
        for (int j = i; j > 0; j--)
        {
            cout << "*\t";
        }
        cout << endl;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)

        {
            if (i == n-1 && j == n-1)
            {
                continue;
            }
            else
            {
                cout << "*\t";
            }
        }
        for (int j = n - 1; j > i; j--)
        {
            cout << " \t";
        }
        for (int j = n - 1; j > i + 1; j--)
        {
            cout << " \t";
        }
        for (int j = 0; j <= i; j++)
        {
            cout << "*\t";
        }
        cout << endl;

        // for (int j = n-1; j>i; j--)
        // {
        //     cout<<" \t";
        // }

        // for (int j = n-1; j > i; j--)
        // {
        //     cout<<" \t";
        // }
        // for (int j = 0; j < i; j++)
        // {
        //     cout<<"*\t";
        // }
    }
}