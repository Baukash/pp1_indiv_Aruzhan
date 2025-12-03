#include <iostream>
using namespace std;

int po(int n){
  if(n==0) return 1;
  return 2*po(n-1);
}

int main(){
  int n;
  cin>>n;
  
  cout<<po(n);
}

// 5*4*3*2*1   5*4!
