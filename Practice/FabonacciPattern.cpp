#include <iostream>
using namespace std;
int main()
{
    int N, index = 0;
    cin >> N;

    int arr[N] = {0,1,1};

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout<<arr[index]<<" ";
            arr[index] = arr[index + 1] + arr[index + 1];
            index++;
        }
        cout << endl;
    }
}

