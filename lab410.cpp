#include <iostream>
using namespace std;



int main() 
{
  int n;
  cin>>n;
  int arr[1000];
  
  for(int i=0; i<n; i++){
    cin>>arr[i];
  }


  for(int i=0; i<n; i++){
    bool isDub = false;
    for(int j=i+1; j<n; j++){
      if(arr[i]==arr[j]) isDub = true;
    }

    if(!isDub) cout<<arr[i]<<" "; 
  }
}

