#include<bits/stdc++.h>
using namespace std;
void Binary_search(int arr[],int n,int key)
{
    int st=0,en=n;
    int count1=0;
    bool check=false;
    while(st<=en)
    {
        count1++;
        int mid=(st+en)/2;
        if(arr[mid]==key)
        {
            check=true;
            break;
        }
        else if(arr[mid]>key)
        {
            en=mid-1;
        }
        else
        {
            st=mid+1;
        }
    }
    if(check)
    {
        cout<<"present ";
    }
    else{
        cout<<"Not present ";
    }
    cout<<count1<<endl;

}
int main()
{
    int n,testcase;
    cin>>testcase;
    while(testcase--)
    {
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
     int key;
    cin>>key;
    Binary_search(arr,n,key);
}
}
