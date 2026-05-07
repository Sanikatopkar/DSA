#include <iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter size of Queue:"<<endl;
    cin>>size;

    int queue[size];
    int front=-1;
    int rear=-1;
    int choice,value;

    do{
        cout<<"\nQueue Menu"<<endl;
        cout<<"1.Insert"<<endl;
        cout<<"2.Delete"<<endl;
        cout<<"3.Display"<<endl;
        cout<<"4.Exit"<<endl;
        cin>>choice;
        switch (choice)
        {
            case 1:
            if (rear==size-1){
                cout<<"Queue is overflow(full)"<<endl;
            }else{
                cout<<"Enter Value you want to insert:"<<endl;
                cin>>value;
                if(front==-1)
                    front=0;

                rear++;
                queue[rear]=value;
                cout<<value<<" Inserted into Queue"<<endl;
                }

            break;
            case 2:
            if(front==-1 || front>rear){
                cout<<"Queue is underflow(empty)"<<endl;
            }else{
                cout<<queue[front]<<" Deleted from Queue"<<endl;
                front++;

                if(front>rear){
                    front=-1;
                    rear=-1;
                }
            }
            break;
            case 3:
            if(front==-1 || front>rear){
                cout<<"Queue is Empty"<<endl;
            }else{
                cout<<"Queue elelments:"<<endl;
                for(int i=front;i<=rear;i++){
                    cout<<queue[i]<<endl;
                }
            }
            break;
            case 4:
            cout<<"Exit"<<endl;
            break;

        default:
            cout<<"Invalid Choice"<<endl;
        }

     }while (choice!=4);
    
    return 0;
}
