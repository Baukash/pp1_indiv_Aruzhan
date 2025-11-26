#include <iostream>
#include <map>
#include <utility>
#include <vector>
#include <algorithm>
#include <map>
#include <stack>
using namespace std;

int comp(char a, char b){
  return a<b;
}

int main() 
{
  int n;
  cin>>n;
  stack<int> s;
  for(int i=0; i<n; i++){
    int x;
    cin>>x;//2    // 3 4 2
    stack<int> sTemp;//  
    
    while(!s.empty()){
      if(x>=s.top()) s.pop();
      else{
        sTemp.push(s.top());
        s.pop();
      }
    }
    s = sTemp;
    s.push(x);
    
    cout<<s.size()<<" ";
  }
}
//1 1 1 1 1 1 2

// 5
// 3 0 3 4 1
// 1 2 1 1 2