#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int l;
    int w;
    
    cin>>w>>l;
    
    int arr[100][100];
    
    for(int i=0; i<w; i++){
      for(int j=0; j<l; j++){
        arr[i][j]=0;
      }
    }
    
    int n;
    cin>>n;
    
    int count=0;
    
    for(int i=0; i<n; i++){
      int x1,y1,x2,y2;
      cin>>x1>>y1>>x2>>y2;
      

      for(int j=x1; j<x2; j++){
        for(int k=y1; k<y2; k++){
          if(arr[j][k]==0){
            arr[j][k]=1;
            count+=1;
          }
        }
      }
    }
    
    for(int i=0; i<w; i++){
      for(int j=0; j<l; j++){
        cout<<arr[i][j]<<" ";
      }
      cout<<endl;
    }
    
    cout<<l*w-count;
}
