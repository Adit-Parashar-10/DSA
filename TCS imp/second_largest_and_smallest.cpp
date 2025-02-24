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
    int smlst = INT16_MAX;
    int ssmlst = INT16_MAX;

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
        if(arr[i] < smlst){
            ssmlst = smlst;
            smlst = arr[i];
        }
        else if(arr[i] > smlst && arr[i] < ssmlst){
            ssmlst = arr[i];
        }
    }

    cout<<"Largest element: "<<lgst<<endl;
    cout<<"Second largest element: "<<slgst<<endl;
    cout<<"Smallest element: "<<smlst<<endl;
    cout<<"Second smallest element: "<<ssmlst<<endl;

    return 0;
}