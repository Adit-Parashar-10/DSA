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

    int max = INT16_MIN;
    for(int i=0; i<n; i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }

    cout<<"largest element in an array is:"<<max<<endl;

    return 0;
}

