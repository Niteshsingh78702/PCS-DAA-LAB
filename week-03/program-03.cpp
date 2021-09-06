#include<iostream>
using namespace std;
void Merge(int arr[],int l,int mid,int r)
{
    int n1=mid-l+1;
    int n2=r-mid;

    int a[n1];
    int b[n2];

    for(int i=0;i<n1;i++)
    {
        a[i]=arr[l+i];
    }

     for(int i=0;i<n2;i++)
    {
        b[i]=arr[mid+i+1];
    }
    int i=0;
    int j=0;
    int k=l;
    while(i<n1 && j<n2)
    {
        if(a[i]<b[j])
        {
            arr[k]=a[i];
            k++;
            i++;
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
            k++;
            i++;
     }

    while(j<n2)
    {
            arr[k]=b[j];
            j++;
            k++;
    }

}
void  merge_sort(int arr[],int l,int r)
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
    while(T>0)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        merge_sort(arr,0,n-1);

        // Printing
      /*  for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        } */  int count1=1;
            for(int i=0;i<n;i++)
            {
                if(arr[i]==arr[i+1])
                {
                    count1++;
                }
            }
            if(count1==1)
            {
                cout<<"NO";
            }
            else{
                cout<<"YES";
            }
              T--;
    }
}
