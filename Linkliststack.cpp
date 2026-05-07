#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};
Node* top=NULL;
void push(int value){
    Node* newNode=new Node();
    newNode->data=value;
    newNode->next=top;
    top=newNode;
    cout<<value<<" Inserted into Stack"<<endl;
}
void pop(){
    if (top==NULL){
        cout<<"Stack is underflow(empty)"<<endl;
        return;
    }
    Node* temp=top;
    cout<<temp->data<<" Deleted from Stack"<<endl;
    top=top->next;
    delete temp;
    }
    void peek(){
        if(top==NULL){
            cout<<"Stack is Empty"<<endl;
        }else{
            cout<<"Top element is: "<<top->data<<endl;
        }
        }
        void disply(){
            if(top==NULL){
                cout<<"Stack is empty"<<endl;
            }

            Node* temp=top;
            cout<<"Stack elements:"<<endl;
            while(temp!=NULL){
                cout<<temp->data<<endl;
                temp=temp->next;
            }
        }
        int main(){
    int choice,value;
    do{
        cout<<"\nStack Menu"<<endl;
        cout<<"1.Push"<<endl;
        cout<<"2.Pop"<<endl;
        cout<<"3.Peek"<<endl;
        cout<<"4.Display"<<endl;
        cout<<"5.Exit"<<endl;
        cin>>choice;
        switch (choice)
        {
            case 1:
            cout<<"Enter Value you want to insert:"<<endl;
            cin>>value;
            push(value);
            break;

            case 2:
            pop();
            break;

            case 3:
            peek();
            break;  

            case 4:
            disply();
            break;
            
            case 5:
            cout<<"Exit"<<endl;
            break;
            default:
            cout<<"Invalid choice"<<endl;
            }
        }
        while (choice!=5);
        return 0;
    }
    
            