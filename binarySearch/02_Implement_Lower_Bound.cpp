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

    int k;
    cout<<"enter the value for lower bound";
    cin>>k;

    

    return 0;
}