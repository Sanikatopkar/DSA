#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of elements:"<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter elements of sorted list:"<<endl;
    for(int i=0;i<n;i++){
    cin>>a[i];
    }
    int key;
    cout<<"Input the key to search:"<<endl;
    cin>>key;

    int low=0,high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(a[mid]==key){
            cout<<"Element found at index: "<<mid<<endl;
            return 0;
        }
        else if(a[mid]<key){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    cout<<"Element not found"<<endl;
}