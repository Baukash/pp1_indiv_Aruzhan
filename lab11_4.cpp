#include <iostream>
using namespace std;

void pr(int n, int i){
  if(n==1) cout<<n-i;
  else{
    cout<<n-i<<" ";
    i-=2;
    pr(n-1, i);
  }
}

int main(){
  int n;
  cin>>n;
  
  pr(n, n-1);
    
}

// 5*4*3*2*1   5*4!
