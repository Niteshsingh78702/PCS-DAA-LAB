#include<bits/stdc++.h>
using namespace std;
bool ISsorted(int n,int arr[])
{
   // bool check = true;
   int c=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<arr[i+1])
        {
            c++;
        }
    }
    if(c==(n-1))
    {
        return true;
    }
    else{
        return false;
    }

}
int main()
{

    int T;
    cin>>T;
    while(T>0)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        cout<<ISsorted(n,arr);
        T--;
    }
}
