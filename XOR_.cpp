#include <stdio.h>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n=5,ans=0;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        ans=ans^a[i];
    }
    cout<<"Element with one occurence is ::"<<ans<<endl;
}
