#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(){
        this->data = 0;
        this->next=NULL;
    }

    Node(int data){
        this->data = data;
        this->next=NULL;
    }

};
int main(){
    
    Node* head = new Node(1);
    Node* second = new Node(2);
    Node* third = new Node(3);

    head->next = second;
    second->next = third;
    third->next = NULL;

    Node* temp = head;

    while(temp!= NULL){
        cout<<temp->data<<"-->";
        temp = temp->next;
    }
    cout<<"NULL";

    return 0;
}