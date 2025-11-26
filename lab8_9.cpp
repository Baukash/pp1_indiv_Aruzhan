#include <iostream>
#include <map>
#include <set>
#include <algorithm>
#include <iterator>
#include <string>
#include <vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> v;

    set<int> s;

    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        s.insert(x);
    }

    int j=0;

    for(auto i: s){
        if(j==0) cout<<i;
        j++;
    }
}

// m['a']=1 m['s']=1 m['d']=1 m['l']=1 m[d]=2 m


//asdldkk sdsxsa sd 

// a 2
// s 3