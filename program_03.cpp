#include<bits/stdc++.h>
using namespace std;
int Total_pair(int n,int arr[],int key)
{    int c=0;
    sort(arr,arr+(n));
    int l=0;
    int r=0;
    while(r<n)
    {
        if(arr[r]-arr[l]==key)
        {
            c++;
            l++;
            r++;
        }
        else if(arr[r]-arr[l]>key)
        {
            l++;
        }
        else{
            r++;
        }
    }
    return c;
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
      int key;
      cin>>key;
      cout<<Total_pair(n,arr,key);
      T--;
    }
}
