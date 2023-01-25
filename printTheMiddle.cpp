#include <iostream>
using namespace std;
int length;
class Node{
    public:
    Node* next;
    int value;

    Node(int value){
        this->value=value;
        next=nullptr;
    }
};

class LinkedList{
    private:
    Node* head;
    Node* tail;
    // public:
    // int length;
    
    public:
    LinkedList(int value){
        Node* newnode=new Node(value);
        head=newnode;
        tail=newnode;
        length=1;
    }
    void append(int value){
        Node* newnode=new Node(value);
        if (length==0)
        {
            head=newnode;
            tail=newnode;
        }else{
            tail->next=newnode;
            tail=newnode;
        }
        length++;
    }
    Node* get(int index){
        Node* temp=head;
        for (int i = 0; i < index; i++)
        {
            temp=temp->next;
        }
        return temp;
    }
    Node* getValue(int index){
        Node* temp=get(index);
        cout<<temp->value;
        return temp;
    }
};

int main(){
    LinkedList* myLinkedList=new LinkedList(1);
    myLinkedList->append(2);
    myLinkedList->append(25);
    myLinkedList->append(4);
    myLinkedList->append(5);
    myLinkedList->getValue(length/2);
}