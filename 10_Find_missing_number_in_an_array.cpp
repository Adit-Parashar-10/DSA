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

    int sum = (n * (n+1))/2;

    int s2=0;
    for(int i=0; i<n-1; i++){
        s2 = s2 + arr[i];
    }

    int missing = sum - s2;

    cout<<"Missing no in array is:"<<missing<<endl;

    return 0;
}