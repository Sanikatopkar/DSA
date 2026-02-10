#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of elements:"<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter elelments:"<<endl;
    for(int i=0;i<n;i++){
    cin>>a[i];
}
    int key;
    cout<<"Enter key to search:"<<endl;
    cin>>key;

    for(int i=0;i<n;i++){
        if(a[i]==key)
        {
        cout<<"The key is found at index:"<<i<<endl;
        return 0;
         }
    }
cout<<"Not found"<<endl;
  return 0;
}