# include <iostream>
using namespace std;
int main()
{
    int N, i;
    int arr[1000];
    cin>>N;
    for (i=0; i<=N-1; i++)
    {
        cin>>arr[i];
    }
    for (i=N-1;i>=0;i--)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}