#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(){
        this->data = 0;
        this->next = NULL;
    }

    Node(int data){
        this->data=data;
        this->next=NULL;
    }

};

void insertAtHead(int data, Node* &head, Node* &tail){

    if(head==NULL){
        tail=newNode;
    }

    Node* newNode = new Node(data);
    newNode->next=head;
    head = newNode;
}

insertAtTail(int data, Node* &tail){
    Node* newNode = new Node(data);
    tail->next=newNode;
    tail = newNode;

}

void insertAtTail 

Node print(Node* head){
    Node* temp=head;
    while(temp != NULL){
        cout<<temp->data<<"-->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

int main(){
    
    Node* head = new Node(10);

    insertAtHead(20,head);

    print(head);


    return 0;
}