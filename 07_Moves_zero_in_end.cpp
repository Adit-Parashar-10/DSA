#include<iostream>
using namespace std;

void moveZeroes(int nums[], int n) {
        int start=0;
        for(int i=0; i<n; i++){
            if(nums[i]!=0){
                nums[start]=nums[i];
                start++;
            }
        }

        for(int i=start; i<n; i++){
            nums[i]=0;
        }

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

    moveZeroes(arr,n);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }


    return 0;
}