#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

int main() {
    
    map<char, int> m;
    
    string s;
    cin>>s;
    
    int max = -12010;
    
    for(int i=0; i<s.size()-1; i++){
      m[s[i]]++;
      if(max<m[s[i]]) max = m[s[i]];
    }
    
    
    for(auto i:m){
      if(i.second == max) {
        cout<<i.first<<" "<<i.second<<endl;
        break;
        
      }
    }
}
