#include<iostream>
using namespace std;

int binarySearch(int arr[], int s, int e, int k){
    while(s<=e){
        int mid = s + (e-s)/2;
        if(k == arr[mid]){
            return mid;
        }
        else if(arr[mid] < k){
            s = mid + 1;
        }
        else{
            e = mid-1;
        }
    }
    return -1;
}

int main(){
    int n;
    cout<<"Enter the size of an array:";
    cin>>n;
    int arr[n];
    cout<<"enter the value of elements:";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int s=0;
    int e=n-1,k;
    cout<<"enter the searching element:";
    cin>>k;

    int ans = binarySearch(arr,s,e,k); 

    if(ans == -1){
        cout<<"element does not exist in an array";
    }
    else{
        cout<<"element is found at index "<<ans;
    }

    return 0;
}