#include<bits/stdc++.h>
using namespace std;
void finding_index(int n,int arr[])
{   int st=0;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n-1;j++)
        {
          st=arr[i]+arr[j];

        int s=0;
        int en=n-1;
        while(s<=en)
        {
            int mid=(s+en)/2;
            if(arr[mid]==st)
            {
                cout<<i+1<<" "<<j+1<<" "<<mid+1<<endl;
                break;
            }
            else if(arr[mid]>st)
            {
                en=mid-1;
            }
            else{
                s=mid+1;
            }
        }


        }
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
       finding_index(n,arr);
        T--;

    }
    return 0;
}


