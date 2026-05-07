#include<iostream>
using namespace std;

#define MAX 10
struct Node{
    int data;
    int next;
};

Node list[MAX];
int START=-1;
int AVAIL=0;

void intialize(){
    for(int i=0;i<MAX-1;i++){
        list[i].next=i+1;
    }
    list[MAX-1].next=-1;
}

int getNode(){
    if(AVAIL==-1){
        cout<<"Overflow"<<endl;
        return -1;
    }
    int p=AVAIL;
    AVAIL=list[AVAIL].next;
    return p;
}
void freeNode(int p){
    list[p].next=AVAIL;
    AVAIL=p;
}

void insetNodeAtBeg(int value){
    int p=getNode();
    if (p==-1)
    return;
    list[p].data=value;
    list[p].next=START;
    START=p;
}

void deleteNodeAtBeg(){
    if(START==-1){
        cout<<"Underflow"<<endl;
        return;
    }
    int p=START;
    cout<<list[p].data<<" Deleted from list"<<endl;
    START=list[p].next;
    freeNode(p);
}

void display(){
    int temp=START;
    while (temp!=-1)
    {
        cout<<list[temp].data<<" "<<endl;
        temp=list[temp].next;
    }
    cout<<"NULL"<<endl;
    
}
int main(){
    intialize();
    int choice,value;
    do{
        cout<<"\nMenu"<<endl;
        cout<<"1.Insert at beginning"<<endl;
        cout<<"2.Delete from beginning"<<endl;
        cout<<"3.Display"<<endl;
        cout<<"4.Exit"<<endl;
        cout<<"Enter your choice: ";
        cin>>choice;
        switch (choice)
        {
        case 1:
            cout<<"Enter value to insert: ";
            cin>>value;
            insetNodeAtBeg(value);
            break;
        case 2:
            deleteNodeAtBeg();
            break;
        case 3:
            display();
            break;
        case 4:
            cout<<"Exiting..."<<endl;
            break;
        default:
            cout<<"Invalid choice. Please try again."<<endl;
        }
    } while (choice!=4);
}