#include <iostream>
#include <stack>
#include <queue>
#include <deque>
using namespace std;

int main(){
    stack<int> s;

    s.push(4);
    s.push(6);
    s.push(7);
    s.push(8);     
    
    //Last in First out LIFO  4 6 7 8

    stack<int> f;
    while(!s.empty()){                  
        f.push(s.top());
        s.pop();
    }

    while(!f.empty()){
        cout<<f.top()<<" ";
        f.pop();
    }

    cout<<endl;
    // First in First out 4 6 7 8
    queue<int> q;
    q.push(4);
    q.push(6);
    q.push(7);
    q.push(8);

    cout<<q.front()<<" "<<q.back()<<endl;

    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }

    deque<int> dq;

    dq.push_back(34);
    dq.push_front(56);   //56 34 28
    dq.push_back(28);
    dq.pop_back();
    cout<<endl<< dq.front()<<" "<<dq.back()<<endl;

    dq.push_back(1);
    for(int i: dq){
        cout<<i<<" ";
    }
}