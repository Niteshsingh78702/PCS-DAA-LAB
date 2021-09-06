#include<bits/stdc++.h>
using namespace std;
int main()
{
    //string s="acdnndjvnd";
    int n;
    cin>>n;
    char s[n];
        for(int i=0;i<n;i++)
        {
            cin>>s[i];
        }


    int freq[26];
    for(int i=0;i<26;i++)
    {
        freq[i]=0;
    }

    for(int i=0;i<n;i++)
    {
        freq[s[i]-'a']++;
    }
    int maxi=0;
    char ans='a';

    for(int i=0;i<26;i++)
    {
        if(freq[i]>maxi)
        {
            maxi=freq[i];
            ans=i+'a';
        }

    }
    cout<< "character = "<<ans<<endl;
    cout<<"Frequency =" <<maxi;
}
