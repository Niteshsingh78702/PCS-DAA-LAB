#include<bits/stdc++.h>
using namespace std;
void Merge(int arr[],int l,int mid,int r)
{
    int n1=mid-l+1;
    int n2=r-mid;

    int a[n1];
    int b[n2];    // temp array

    for(int i=0;i<n1;i++)
    {
        a[i]=arr[l+i];
    }

    for(int i=0;i<n2;i++)
    {
        b[i]=arr[mid+1+i];
    }

    int i=0;
    int j=0;
    int k=l;

    while(i<n1 && j<n2)
    {
        if(a[i]<b[j])
        {
            arr[k]=a[i];
            i++;
            k++;

        }
        else{
            arr[k]=b[j];
            j++;
            k++;
        }
    }

    while(i<n1)
    {
        arr[k]=a[i];
            i++;
            k++;

    }
    while(j<n2)
    {
        arr[k]=b[j];
        j++;
        k++;
    }
}

void merge_sort(int arr[],int l,int r)
{
    if(l<r)
    {
        int mid=(l+r)/2;
        merge_sort(arr,l,mid);
        merge_sort(arr,mid+1,r);

        Merge(arr,l,mid,r);

    }
}
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }

        merge_sort(arr,0,n-1);

       /* for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        } */


        // Searching
        int key;
        cout<<"Enter key ";
        cin>>key;
           int st=0;
           int en=n-1;
        while(st<=en)
        {
            if(arr[st]+arr[en]==key )
            {
                cout<<arr[st]<<" "<<arr[en]<<endl;
                st++;
                en--;
            }
            else if(arr[st]+arr[en]<key)
            {
                st++;
            }
            else{
                en--;
            }
        }
        if(st>en )
        {
            cout<<"No pair exit";
        }


    }
}
