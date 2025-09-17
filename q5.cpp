#include <iostream>
#include <queue>
using namespace std;

queue<int> q1,q2;

void push(int x){
    q2.push(x);
    while(!q1.empty()){ q2.push(q1.front()); q1.pop(); }
    swap(q1,q2);
}

void pop(){
    if(q1.empty()) cout<<"Empty\n";
    else {cout<<"Popped "<<q1.front()<<"\n"; q1.pop();}
}

int main(){
    push(1); push(2); push(3);
    pop();
    pop();
}

b): #include <iostream>
#include <queue>
using namespace std;

queue<int> q;

void push(int x){
    q.push(x);
    int s=q.size();
    for(int i=0;i<s-1;i++){ q.push(q.front()); q.pop(); }
}

void pop(){
    if(q.empty()) cout<<"Empty\n";
    else {cout<<"Popped "<<q.front()<<"\n"; q.pop();}
}

int main(){
    push(10); push(20); push(30);
    pop();
    pop();
}
