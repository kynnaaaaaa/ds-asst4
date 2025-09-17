#include <iostream>
using namespace std;

int q[10], front=-1, rear=-1, n=10;

void enqueue(int x){
    if(rear==n-1) cout<<"Queue Full\n";
    else{
        if(front==-1) front=0;
        rear++;
        q[rear]=x;
        cout<<"Inserted "<<x<<"\n";
    }
}

void dequeue(){
    if(front==-1 || front>rear) cout<<"Queue Empty\n";
    else{
        cout<<"Deleted "<<q[front]<<"\n";
        front++;
    }
}

void display(){
    if(front==-1 || front>rear) cout<<"Queue Empty\n";
    else{
        for(int i=front;i<=rear;i++) cout<<q[i]<<" ";
        cout<<"\n";
    }
}

int main(){
    int ch,x;
    while(1){
        cout<<"\n1.Enqueue 2.Dequeue 3.Display 4.Exit\n";
        cin>>ch;
        if(ch==1){cin>>x; enqueue(x);}
        else if(ch==2) dequeue();
        else if(ch==3) display();
        else return 0;
    }
}
