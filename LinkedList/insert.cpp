#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(){
        this->data = 0
        this->next = NULL;
    }

    Node(int data){
        this->data=data;
        this->next=NULL;
    }

};

void insertAtHead(int data,Node* head){

    Node* newNode = new Node(data);
    newNode->next=head;
    head = newNode;
}

int main(){
    
    


    return 0;
}