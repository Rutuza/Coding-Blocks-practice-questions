#include<iostream>
using namespace std;

void search(int arr[], int N)
{
    int M, i;
    cin>>M;
	bool flag=true;
   for (i = 0; i < N; i++)
   {
     if (arr[i] == M)
     {
        cout<<arr[i];
		flag=false;
        break;
     }
   }
   if(flag){
	   cout<<"-1";
   }

}

int main()
{
    int N, i;
    cin>>N;

    int arr[N];
    for (i=0; i<N; i++)
    {
        cin>>arr[i];
    }

    search(arr, N);
}

