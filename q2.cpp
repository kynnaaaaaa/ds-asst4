#include <iostream>
using namespace std;

int cq[10], front=-1, rear=-1, n=10;

void enqueue(int x){
    if((front==0 && rear==n-1) || (rear+1)%n==front) cout<<"Full\n";
    else{
        if(front==-1) front=0;
        rear=(rear+1)%n;
        cq[rear]=x;
        cout<<"Inserted "<<x<<"\n";
    }
}

void dequeue(){
    if(front==-1) cout<<"Empty\n";
    else{
        cout<<"Deleted "<<cq[front]<<"\n";
        if(front==rear) front=rear=-1;
        else front=(front+1)%n;
    }
}

void display(){
    if(front==-1) cout<<"Empty\n";
    else{
        int i=front;
        while(1){
            cout<<cq[i]<<" ";
            if(i==rear) break;
            i=(i+1)%n;
        }
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
