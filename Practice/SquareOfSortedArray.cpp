#include <iostream>
using namespace std;
int main()
{
    int n, i, j;
    cout << "Enter size: ";
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        arr[i]=arr[i]*arr[i];
    }
 cout << endl;
   
    // swapping the positions
    for (i = 0; i <= n; i++)
    {
        for (j = 0; j <= n; j++)
        {
            if (arr[j] >= arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }    
    }
   for (int i = 0; i < n; i++)
   {
     cout<<arr[i]<<" ";
   }
   
    return 0;
}
