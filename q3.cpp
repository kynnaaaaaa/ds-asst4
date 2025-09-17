#include <iostream>
#include <queue>
using namespace std;

int main(){
    queue<int> q;
    int n,x;
    cin>>n;   // number of elements (even)
    for(int i=0;i<n;i++){cin>>x; q.push(x);}
    
    queue<int> first;
    for(int i=0;i<n/2;i++){ first.push(q.front()); q.pop(); }

    while(!first.empty()){
        cout<<first.front()<<" ";
        first.pop();
        cout<<q.front()<<" ";
        q.pop();
    }
}
