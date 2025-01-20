#include<iostream>
using namespace std;

int partition(int arr[], int s, int e){
    int pvtIdx = s;
    int pvtele = arr[s];

    int count = 0;
    for(int i = s; i<=e; i++){
        if(arr[i] < pvtele) count++;
    }

    int rightIdx = s + count;
    int temp = arr[pvtIdx];
    arr[pvtIdx] = arr[rightIdx];
    arr[rightIdx] = temp;

    pvtIdx = rightIdx;

    int i=s;
    int j=e;

    while(i < pvtIdx && j > pvtIdx){
        while(arr[i] <= pvtele){
            i++;
        }
        while(arr[j] > pvtele){
            j--;
        }
        if(i < pvtIdx && j > pvtIdx){
            swap(arr[i], arr[j]);
        }
    }
    return pvtIdx;
}

void quickSort(int arr[], int s, int e){
    if(s>=e)
        return;

    int p = partition(arr,s,e);

    quickSort(arr,s,p-1);

    quickSort(arr,p+1,e);    
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

    int s = 0;
    int e = n-1;

    quickSort(arr,s,e);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}