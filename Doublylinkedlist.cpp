#include<iostream>
using namespace std;
struct Node{
    int pre;
    int data;
    int next;
};
#define MAX 5
Node list[MAX];
int START=-1;
int AVAIL=0;

void initialize(){
    for(int i=0;i<MAX;i++){
        list[i].next=i+1;
    }
    list[MAX-1].next=-1;
}

int getnode(){
    if(AVAIL==-1){
        cout<<"Overflow"<<endl;
        return -1;
    }
    int p=AVAIL;
    AVAIL=list[AVAIL].next;
    return p;
}

void freenode(int p){
    list[p].next=AVAIL;
    AVAIL=p;
}

void insertNodeAtBeg(int value){
    int p=getnode();
    if(p==-1){
        return;
    }
    list[p].data=value;
    list[p].pre=-1;
    list[p].next=START;

    if(START!=-1){
        list[START].pre=p;
    }
    START=p;
}

void deleteAtBeg(){
    if(START==-1){
        cout<<"Underflow"<<endl;
    }
    int p=START;
    START=list[p].next;

    if(START!=-1){
        list[START].pre=-1;
    }
    freenode(p);
}

void display(){
    int temp=START;
    while(temp!=-1){
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
            insertNodeAtBeg(value);
            break;
        case 2:
            deleteAtBeg();
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

