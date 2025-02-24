#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of an array:";
    cin>>n;
    int arr[n];
    cout<<"enter the value of elements:";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int lgst = INT16_MIN;
    int slgst = INT16_MIN;

    for(int i=0; i<n; i++){
        if(arr[i] > lgst){
            slgst = lgst;
            lgst = arr[i];
        }
        else if( arr[i] > slgst && arr[i] < lgst){
            slgst = arr[i];
        }
    }

    for(int i=0; i<n; i++){
        
    }

    cout<<"Largest element: "<<lgst<<endl;
    cout<<"Second largest element: "<<slgst<<endl;

    return 0;
}