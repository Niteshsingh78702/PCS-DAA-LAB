#include<bits/stdc++.h>
using namespace std;
// First occurrence of duplicate element
  int Duplicate_count(int n,int arr[],int key)
{
    int s=0, res=-1;
    int en=n-1;
    while(s<en)
    {
        int mid=(s+en)/2;
        if(arr[mid]==key)
        {
            res=mid;
            en=mid-1;
        }
        else if(arr[mid]>key)
        {
         en=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return res;


}

// last occurrence of duplicate element
int Duplicate_count2(int n,int arr[],int key)
{
    int s=0, res2=-1;
    int en=n-1;
    while(s<=en)
    {
        int mid=(s+en)/2;
        if(arr[mid]==key)
        {
            res2=mid;
            s=mid+1;
        }

        else if(arr[mid]>key)
        {
         en=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return res2;


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
       int f= Duplicate_count(n,arr,key);
        int l=Duplicate_count2(n,arr,key);
        cout<<l-f+1<<endl;
        T--;

    }
    return 0;
}
