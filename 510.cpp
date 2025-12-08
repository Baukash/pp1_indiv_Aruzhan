#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin>>n;
    
    int arr[100][100];
    
    for(int i=0; i<n; i++){
      for(int j=0; j<n; j++){
        if(i==0) arr[i][j] = j;
        else if(j==0) arr[i][j] = i;
        else if(i==j) arr[i][j] = i*i;
      }
    }
    
    for(int i=0; i<n; i++){
      for(int j=0; j<n; j++){
        cout<<arr[i][j]<<" ";
      }
      cout<<endl;
      
    }
    
    
}
