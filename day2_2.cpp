#include <iostream>
#include <map>
#include <set>
#include <algorithm>
#include <iterator>
#include <string>
using namespace std;

int main(){
    string s;
    getline(cin, s);

    map<char, int> m;

    for(char i: s){
        if((i>='a' && i<='z') || (i>='A' && i<='Z')) m[i]+=1;
    }


    for(auto i: m){
        cout<<i.first<<" "<<i.second<<endl;
    }
}

// m['a']=1 m['s']=1 m['d']=1 m['l']=1 m[d]=2 m


//asdldkk sdsxsa sd 

// a 2
// s 3