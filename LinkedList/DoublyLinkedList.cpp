#include<iostream>
using namespace std;
class Node{
    public:
     int data;
     Node* prev;
     Node* next;
    // Constructor
    Node(int data){
          this->data = data;
          this->next = NULL;
          this->prev = NULL;
    }
    ~Node(){
       int value = this->data;
       if(this->next != NULL){
         delete next;
         this->next = NULL;
       }
       cout<<"Memory Freed for: "<<this->data<<endl;
    }
};
void print(Node* &head){
    Node* temp = head;
    while(temp!= NULL){
          cout<<temp->data<<" ";
          temp = temp->next;
    }
    cout<<endl;
}
void insertatbeg(Node* &tail,Node* &head,int data){
    // Empty list condition
    if(head == NULL){
        Node* temp = new Node(data);
        head = temp;
        tail = temp;
    }
    else{
     Node* temp = new Node(data);
     temp->next = head;
     head->prev = temp;
     head = temp;
    }
}
void insertatend(Node* &tail,Node* &head,int data){
    if(head == NULL){
        Node* temp1 = new Node(data);
        head = temp1;
        tail = temp1;
    }
    else{
    Node* temp1 = new Node(data);
    temp1->prev = tail->next;
    tail->next = temp1;
    tail = temp1;
    }
}
void insertatpos(Node* &tail,Node* &head,int data,int pos){
    Node* temp2 = new Node(data);
    Node* temp3 = head;
    Node* temp4 = NULL;
    // To insert At beginning
    if(pos == 1){
        insertatbeg(tail,head,data);
        return;
    }
    // To insert at Position
    int i=1;
    while(i<pos){
        temp4 = temp3;
        temp3 = temp3->next;
        i++;
    }
    // To insert at End
    if(temp4->next == NULL){
        insertatend(tail,head,data);
        return;
    }
    temp4->next = temp2;
    temp2->prev = temp4;
    temp2->next = temp3;
    temp3->prev = temp2;
}
void delNode(Node* &head,Node* &tail,int pos){
    // At beginning
    if(pos == 1){
        Node* temp = head;
        head  = head->next;
        temp->next->prev=NULL;
        temp->next = NULL;
        delete temp;
    }
    // To delete at middle & end
    else{
        Node* curr = head;
        Node* prev1 = NULL;
        int i = 1;
        while(i<pos){
            prev1 = curr;
            curr = curr->next;
            i++;
        }
        if(curr->next == NULL){
            tail = prev1;
        }
        if(curr->next != NULL){
           curr->next->prev = prev1;
        }
        prev1->next = curr->next;
        curr->next = NULL;
        curr->prev = NULL;
        delete curr;
    }
}













int main()
{
  Node* head = NULL;
  Node* tail = NULL; 
  insertatbeg(tail,head,2);
  print(head);
  insertatend(tail,head,10);
  print(head);
  insertatpos(tail,head,5,2);
  print(head);
  delNode(head,tail,2);
  print(head); 
  cout<<"Head is at: "<<head->data<<endl;
  cout<<"Tail is at: "<<tail->data<<endl;  
         
         
         
 return 0;
}