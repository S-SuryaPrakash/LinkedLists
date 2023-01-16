#include <iostream>
using namespace std;

class Node{
    public:
    Node* next;
    int value;

    public:
    Node(int value){
    this->value=value;
    next=nullptr;
    }
};

class LinkedList{
    private:
    Node* head;
    int length;

    public:
    LinkedList(int value){          //constructor is created
        Node *newnode=new Node(value);
        head=newnode;
        length=1;
    }
    // deletes the node at the beginning
    void deletionAtBeginning(){
        Node* temp=head;
        if (head!=nullptr){
            head=temp->next;
            temp->next=nullptr;
        }
    }
    //adds the elements at the beginning of the linked list
    void prepend(int value){
        Node *newnode=new Node(value);
        Node* temp=head;
        newnode->next =temp;
        head=newnode;
    }
    //prints the linked list
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
    LinkedList* myLinkedList=new LinkedList(3);
    myLinkedList->prepend(2);
    myLinkedList->prepend(1);
    cout<<"list before deletion"<<endl;
    myLinkedList->printlist();
    myLinkedList->deletionAtBeginning();
     cout<<"list after deletion"<<endl;
    myLinkedList->printlist();
}