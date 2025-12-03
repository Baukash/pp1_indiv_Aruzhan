#include <iostream>
#include <vector>
#include <climits>
#include <map>
using namespace std;

int main(){
  map<int, int> m;
  
  int n;
  cin>>n;
  int max = INT_MIN;
  
  for(int i=0; i<n; i++){
    int x;
    cin>>x;
    m[x]++;
    if(m[x]>max) max = m[x];
  }
  
  for(auto i:m){
    if(i.second==max){
      cout<<i.first<<endl;
      break;
    } 
  }
  
}
// 5*4*3*2*1   5*4!
