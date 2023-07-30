// #include<iostream>
// using namespace std;
// int main()
// {
//     int n, j;
//     cin>>n;

// int c;
//     for(int i=0; i<=n; i++)
//     {
        
//         for (int j = 0; j <=i; j++)
//         {
//             if(i==0 || j==0){
//                 c=1;
//                 cout<<c<<" ";
//             }
//             else{
//                 c=(c*(i-j+1))/j;
//                 cout<<c<<" ";
//             }
//         }
//         cout<<endl;
        

//     }
    //2nd method

#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;

	for(int i=0; i<n; i++)
	{
		int num=1;
		for(int j=0; j<=i; j++)
		{
			cout<<num<<" ";
			num = num * (i-j)/(j+1);
		}
		cout<<endl;
	}
}
    