#include<iostream>
using namespace std;
//here we are creating merge function in which we are passing an array and its lower and upper limit in which we do merging
int merg(long int *a, long int s,long int e)
{
   long int m=(s+e)/2;
    long int i=s,k=s,j=m+1;
   long int t[100];
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
//here we are creating merge sort function in which we do the partion of array
int mergesort(long int a[],long int s,long int e)
{
    if(s<e)
    {
       long int m=(s+e)/2;
        mergesort(a,s,m);
        mergesort(a,m+1,e);
        merg(a,s,e);
    }
}
int main()   
{
    long int n;
    cin>>n;
    long int a[n],i;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    //here we call thee function
    mergesort(a,0,n-1);
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }

    
    
}
