#include<iostream>
using namespace std;
int merg(int *a,int s,int e)
{
    int m=(s+e)/2;
    int i=s,k=s,j=m+1;
    int t[100];
    while(i<=m&&j<=e)
    {
        if(a[i]<a[j])
        {
            t[k++]=a[i++];
        }
        else
            t[k++]=a[j++];
    }
    while(i<=m)
    {
        t[k++]=a[i++];
    }
    while(j<=e)
    {
        t[k++]=a[j++];
    }
    for(int i=s;i<=e;i++)
    {
        a[i]=t[i];
    }
}
int mergesort(int a[],int s,int e)
{
    if(s<e)
    {
        int m=(s+e)/2;
        mergesort(a,s,m);
        mergesort(a,m+1,e);
        merg(a,s,e);
    }
}
int main()
{
    
}
