#include <iostream>
#include <map>
#include <set>
#include <algorithm>
using namespace std;

int main(){
    set<int> s;
    int n;
    cin>>n;

    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        s.insert(x);
    }

    for(int i: s){
        cout<<i<<" ";
    }
    cout<<endl;

    set<char> t;
    t.insert('h');
    t.insert('a');
    t.insert('d');
    t.insert('#');

    for(char i: t){
        cout<<i<<" ";
    }
}