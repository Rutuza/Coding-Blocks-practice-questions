#include<iostream>
using namespace std;
void printarray(int a[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<*(a+i)<<" ";
    }
    cout<<endl;
}

int main()
{
    int n = 5;
    int a[n] = {1,2,3,4,5};
    printarray(a,n);
    // int a = 10;
    // int *ap = &a; //ap is the pointer of a
    // cout<<"Address of a: "<<ap<<endl;
    // int arr[] = {1, 2, 3, 4, 5};
    // cout<<"arr: "<<arr<<endl;
    // cout<<"arr[0]: "<<arr[0]<<endl;
    // cout<<"&arr: "<<&arr[0]<<endl;

    // int n = 5;
    // int a[n] = {1, 2, 3, 4, 5};
    
    // for (int i = 0; i < n; i++)
    // {
    //     cout<<*(a + i)<<" ";
    // }

}