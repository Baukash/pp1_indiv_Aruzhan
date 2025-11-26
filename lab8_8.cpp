#include <iostream>
#include <map>
#include <set>
#include <algorithm>
#include <iterator>
#include <string>
using namespace std;

int main(){
    map<int, int> m;

    int n;
    cin>>n;

    for(int i=0; i<n; i++){
        int A, B, C, D;
        cin>>A>>B>>C>>D;

        int start = A*60+B;
        int finish = C*60+D;

        if(start<finish){
            for(int i=start; i<finish; i++){
                m[i]+=1;
            }
        }
        else if(start==finish){
            for(int i=0; i<=1439; i++){
                m[i]+=1;
            }
        }
        else if(finish<start){
            for(int i=start; i<1439; i++){
                m[i]+=1;
            }
            for(int i=0; i<finish; i++){
                m[i]+=1;
            }
        }
    }

    int count=0;

    for(auto i: m){
        if(i.second==n) count++;
    }

    cout<<count;
}

