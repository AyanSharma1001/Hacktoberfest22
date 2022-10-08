//SINGLY LINKED LIST
#include<bits/stdc++.h>
using namespace std;
class Node {
    public : 
        int data;
        Node* next;
    //Default Constructor
    Node()
    {
         data=0;
         next=NULL;
    }
    //Parametrised constructor
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};
class LinkedList {
    Node* head;

    public: 
    //Default constructor
    LinkedList()
    {
        head=NULL;
    }
    void traversal();
    void insertAtbeginning(int);
    void insertAtlast(int);
    void insertAtindex(int , int);
    void deleteAtbeginning();
    void deleteAtlast();
    void deleteAtindex(int);
};
void LinkedList::traversal(){
    Node* temp= head;
    if(temp != NULL){
    cout<<"The list contains: ";
    while(temp!=NULL){
      cout<<temp->data<<" ";
      temp=temp->next;
    }
    cout<<endl;
    }
    else {
        cout<<"The list is empty"<<endl;
    }
}
void LinkedList::insertAtbeginning(int new_data){
    Node* newNode = new Node(new_data); // allocate node
    //Assign to head
    if(head==NULL){
        head = newNode;
        return;
    }
    //Insert at beginning
    newNode->next = head;
    head= newNode;
}
void LinkedList::insertAtlast(int new_data){
    Node* newNode = new Node(new_data);
      if(head==NULL){
        head = newNode;
        return;
    }
     Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newNode;
    newNode->next=NULL;
}

void LinkedList::insertAtindex(int new_data , int index){
    Node* newNode = new Node(new_data);
    if(head==NULL){
        head = newNode;
        return;
    }
    //   Node* temp=head;
    //  for(int i=1;i<index;i++){
    //     if(temp->next!=NULL){
    //         temp=temp->next;
    //     }
    //  }
    //  newNode->next=temp->next;
    //  temp->next=newNode;
    int i=0;
    Node* p=head;
    Node* q=head->next;
    while(i!=index-1){
        i++;
        p=p->next;
        q=q->next;
    }
    p->next=newNode;
    newNode->next=q;
}
void LinkedList::deleteAtbeginning(){
    Node* temp=head;
    if(head==NULL){
        return;
    }
    head=head->next;
    free(temp);
}
void LinkedList::deleteAtlast(){
    if(head==NULL){
        return;
    }
   Node* p=head;
   Node* q=head->next;
   while(q->next!=NULL){
       p=p->next;
       q=q->next;
   }
   p->next=q->next;
   free(q);
}
void LinkedList::deleteAtindex(int index){
    //*************FIRST METHOD******************//
    //   if(head==NULL){
    //     return;
    // }
    // Node* temp=head;
    // int i=0;
    // while(i!=index-1){
    //     i++;
    //     temp=temp->next;
    // }
    // temp->next=temp->next->next;
     if(head==NULL){
        return;
      }
     Node* p=head;
     Node* q=head->next;
     for(int i=0;i<index-1;i++){
                p=p->next;
                q=q->next;
     }
      p->next=q->next;
        free(q);
}

int main(){
      LinkedList list;
    //inserting nodes
    list.insertAtbeginning(1);
    list.insertAtbeginning(2);
    list.insertAtbeginning(3);
    list.insertAtbeginning(4);
    list.insertAtlast(5);
    list.insertAtlast(6);
    list.insertAtindex(7,2);
    list.insertAtindex(8,4);
    list.insertAtbeginning(9);
    list.insertAtbeginning(10);
    list.insertAtbeginning(11);
    list.insertAtbeginning(12);
    list.deleteAtbeginning();
    // list.deleteAtlast();
    // list.deleteAtindex(3);
    // list.deleteAtindex(2);
    cout<<"Element of the list are: ";
    list.traversal();
    return 0;
}