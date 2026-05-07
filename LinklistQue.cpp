#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
};
Node* front=NULL;
Node* rear=NULL;

void enqueue(int value){
    Node* newNode=new Node();
    newNode->data=value;
    newNode->next=NULL;
    if(front==NULL){
        front=rear=newNode;
    }else{
        rear->next=newNode;
        rear=newNode;
    }
    cout<<value<<" Inserted into Queue"<<endl;
}
void dequeue(){
    if(front==NULL){
        cout<<"Queue is underflow(empty)"<<endl;
        return;
    }
    Node* temp=front;
    cout<<temp->data<<" Deleted from Queue"<<endl;
    front=front->next;

    if(front==NULL){
        rear=NULL;
    }
    delete temp;
}
void display(){
    if(front==NULL){
        cout<<"Queue is empty"<<endl;
        return;
    }
    Node* temp=front;
    cout<<"Queue elements:"<<endl;
    while(temp!=NULL){
        cout<<temp->data<<endl;
        temp=temp->next;
    }
}
void peek(){
    if(front==NULL){
        cout<<"Queue is empty"<<endl;
    }else{
        cout<<"Front element is: "<<front->data<<endl;
    }
}
int main(){
    int choice,value;
    do{
        cout<<"\nQueue Menu"<<endl;
        cout<<"1.Enqueue"<<endl;
        cout<<"2.Dequeue"<<endl;
        cout<<"3.Display"<<endl;
        cout<<"4.Peek"<<endl;
        cout<<"5.Exit"<<endl;
        cin>>choice;
        switch (choice)
        {
            case 1:
            cout<<"Enter Value you want to insert:"<<endl;
            cin>>value;
            enqueue(value);
            break;
            case 2:
            dequeue();
            break;
            case 3:
            display();
            break;
            case 4:
            peek();
            break;
            case 5:
            cout<<"Exiting..."<<endl;
            break;
            default:
            cout<<"Invalid choice, please try again."<<endl;
        }
    }while(choice!=5);
}