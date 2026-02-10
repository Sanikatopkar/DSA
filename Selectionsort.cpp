#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of elements: "<<endl;
    cin>>n;

    int a[n];
    cout<<"Enter elelments:"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(a[j]<a[min]){
                min=j;
            }  
        }
        int t=a[i];
        a[i]=a[min];
        a[min]=t;
    }
    cout<<"Sorted array is: ";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
     return 0;
}