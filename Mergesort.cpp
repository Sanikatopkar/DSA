#include<iostream>
using namespace std;
void merge(int a[],int l,int mid,int r)
{
    int n1=mid-l+1;
    int n2=r-mid;

    int L[n1],R[n2];

    for(int i=0;i<n1;i++)
    L[i]=a[l+i];

    for(int i=0;i<n2;i++)
    R[i]=a[mid+1+i];

    int i=0,j=0,k=l;

    while(i<n1 && j<n2)
    {
        if(L[i]<=R[j])
        {
            a[k]=L[i];
            i++;
        }
        else{
            a[k]=R[j];
            j++;
        }
        k++;
    }
    while(i<n1)
    {
        a[k]=L[i];
        i++;
        k++;
    }
    while(j<n2)
    {
        a[k]=R[j];
        j++;
        k++;
    }
}

void mergesort(int a[],int l,int r)
{
 if(l<r)
 {
    int mid=(l+r)/2;
    mergesort(a,l,mid);
    mergesort(a,mid+1,r);
    merge(a,l,mid,r);
 }
}
int main(){
    int n;
    cout<<"Enter number of elements: "<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter elements: "<<endl;
    for(int i=0;i<n;i++)
        cin>>a[i];
    mergesort(a,0,n-1);

    cout<<"Sorted array:"<<endl;
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
    return 0;
}