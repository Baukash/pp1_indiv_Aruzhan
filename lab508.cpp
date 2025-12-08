#include <iostream>
using namespace std;

int main(){
    int arr[100][100];

    int n;
    cin>>n;

    bool isPer = true;


    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(arr[i][j]!=arr[j][i]){
                isPer=false;
                break;
            }
        }
    }

    if(isPer)cout<<"Perfect";
    else cout<<"Not perfect";
}