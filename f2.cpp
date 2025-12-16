#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <map>
#include <cctype>
#include <utility>
#include <set>
#include <algorithm>
#include <iomanip>
using namespace std;


int main(){
  int n;
  cin>>n;
  int max = -67455;
  map<int, int> m;
  
  for(int i=0; i<n; i++){
    int x;
    cin>>x;
    m[x]++;
    
    if(max<x){
      max = x;
    }
  }
  

  
  for(auto i: m){
    if(i.first == max) cout<<i.second;
  }
  
}
