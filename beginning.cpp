#include <iostream>
using namespace std;

class Node{
    public:
    int value;
    Node* next;

    public:
    Node(int value){
    this->value=value;
    next=nullptr;
    }
};

class LinkedList{
    private:
    Node* head;
    Node* tail;
    int length;

    public:
    LinkedList(int value){
        Node* newnode=new Node(value);
        head=newnode;
        tail=newnode;
        length=1;
    }
    void push(int value){
        Node *newnode=new Node(value);
        Node* temp=head;
        newnode->next =temp;
        head=newnode;
    }
    void printlist(){
        Node* temp=head;
        while (temp)
        {
            cout<<temp->value<<endl;
            temp=temp->next;
        }
        
    }
};
int main(){
LinkedList* myLinkedList=new LinkedList(5);
myLinkedList->push(3);
myLinkedList->printlist();
}