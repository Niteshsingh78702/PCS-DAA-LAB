#include<bits/stdc++.h>
using namespace std;
void linear_search(int arr[],int n,int key)
{    int c=0;
     bool check=false;
    for(int i=0;i<n;i++)
    {    c++;
        if(arr[i]==key)
        {
            check=true;
            break;
        }
    }
    if(check)
    {
        cout<<"present ";
    }
    else{
        cout<<"Not present ";
    }
    cout<<c<<endl;
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
    linear_search(arr,n,key);
}
}
