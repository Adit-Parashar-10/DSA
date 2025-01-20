#include<iostream>
#include<vector>
using namespace std;

int getSecondLargest(int arr[], int n) {
    int lg = INT16_MIN;
    int slg = INT16_MIN;
    for(int i=0; i<n; i++){
            
        if(arr[i]>lg){
            slg = lg;
            lg = arr[i];
        }
        else if(arr[i]<lg && arr[i]>slg){
            slg = arr[i];
        }
    }
    return (slg == INT16_MIN) ? -1 : slg;
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

    int ans = getSecondLargest(arr,n);

    cout<<"second largest array is:"<<ans<<endl;

    return 0;
}