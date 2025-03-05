#include<iostream>
#include<cstring>
using namespace std;

int getLength(char arr[100]){

    int length=0;
    int i =0;

    while(arr[i] != '\0'){
        length++;
        i++;
    }

    return length;

}

void reverseString(char arr[100]){

    cout<<"before reverse:"<<arr<<endl;

    int i=0;

    int j = strlen(arr) - 1;

    while(i < j){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }

    cout<<"after reverse:"<<arr<<endl;
}

void replaceSpaces(char sentence[100]){
    int i=0;
    int n = strlen(sentence);

    for(int i=0; i<n; i++){
        if(sentence[i] == ' '){
            sentence[i] = '_';
        }
    }

    cout<<sentence;

}

bool palindrome(char arr[100]){
    int i=0;
    int j=strlen(arr)-1;

    while(i <= j){
        if(arr[i] == arr[j]){
            i++;
            j--;
        }
        else{
            return false;
        }
    }

    return true;
}

void toUppercase(char arr[100]){
    int n = getLength(arr);

    

    for(int i=0; i<n; i++){

        if(arr[i] >= 'a' && arr[i] <= 'z'){
            arr[i] = arr[i] - 'a' + 'A';
        //arr[i] = arr[i] - 32;
        }
        
    }

}

void toLowerCase(char arr[100]){
    int n = getLength(arr);

    for(int i=0; i<n; i++){
         arr[i] = arr[i] - 'A' + 'a';
        //arr[i] = arr[i] + 32;
    }
}

int main(){
    char arr[100];

    cin.getline(arr,100);
    int ans = getLength(arr);

    
    toUppercase(arr);
    cout<<arr<<endl;

    toLowerCase(arr);
    cout<<arr<<endl;


   




    return 0;
}