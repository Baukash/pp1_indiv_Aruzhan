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
  int r, c;
  bool isSame=true;
  cin>>r>>c;
  
  
  vector<int> v;
  int max = -123123;
  
  for(int i=0; i<r; i++){
    int count=0;
    for(int j=0; j<c; j++){
      int x;
      cin>>x;
      
      if(x>0) count++;
      
      if(max<count) max = count;
    }
    v.push_back(count);
  }
  
  for(int i=0; i<v.size(); i++){ // 3 2 3    3
    if(v[i]!=max) isSame=false;
  }
  
  
    
  
  if(isSame) cout<<"Numbers are equal";
  else{
    for(int i=0; i<v.size(); i++){  //2 3     3
      if(v[i]==max) cout<<i+1<<" ";
    }
  }
  
}
