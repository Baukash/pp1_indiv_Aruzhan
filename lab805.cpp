#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main(){
  int n;
  cin>>n;
  vector<int> v;
  
  for(int i=0; i<n; i++){
    int x;
    cin>>x;
    v.push_back(x);
  }
  
  int m;
  cin>>m;
  
  for(int i=0; i<m; i++){
    int l, r;
    cin>>l>>r;
    int max = INT_MIN;
    int sum=0;
    
    for(int i=l; i<=r; i++){
      if(v[i]>max){
        max = v[i];
        sum++;
      }
    }
    
    cout<<sum<<endl;
  }
  
}
// 5*4*3*2*1   5*4!
