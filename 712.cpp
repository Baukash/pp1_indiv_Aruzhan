#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    int a[n];
    int b[n];
    
    for(int i=0; i<n; i++){
      cin>>a[i];
    }
    
    for(int i=0; i<n; i++){
      cin>>b[i];
    }
    
    
    int count=0;
    
    for(int i=0; i<n; i++){
      for(int j=0; j<n; j++){
        if(a[i]==b[j] && a[i]!=0 && b[j]!=0){
          a[i]=0;
          b[j]=0;
          count++;
        }
      }
    }
    
    cout<<count;
    
}
