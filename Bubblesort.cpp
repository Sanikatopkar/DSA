#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number of elements:"<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter elements:"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n-1;i++){
      for(int j=0;j=n-i-1;j++){
       if (a[j]>a[i+1]){
        int t=a[j];
        a[j]=a[j+1];
        a[j+1]=t;
       }
    }
}

cout<<"Sorted array:"<<endl;
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
    return 0;
}