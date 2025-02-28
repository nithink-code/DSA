#include<iostream>
using namespace std;
class Node{
    public:
        int data;
        Node* next;
     Node(int d){
        this->data = d;
        this->next = NULL;
     }
};
void insertAtFront(Node* &head,int data){
    Node* node2 = new Node(data);
    node2->next = head;
    head = node2;
}
void insertAtEnd(Node* &tail,int data){
    Node* node3 = new Node(data);
    node3->next = NULL;
    tail->next = node3;
    tail = tail->next;
}
void insertAtPos(Node* &tail,Node* &head,int pos,int data){
    if(pos == 1){
        insertAtFront(head,data);
        return;
    }
    Node* temp1 = head;
    int i=1;
    while(i<pos-1){
        temp1 = temp1->next;
        i++;
    }
   // To update the tail after any addition of a nodes
   if(temp1 ->next == NULL){
      insertAtEnd(tail,data);
      return;
   }

    Node* node4 = new Node(data);
   node4->next = temp1->next;
   temp1->next = node4;
}
void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
void sortList(Node* &head){
    Node* temp = head;
    Node* curr = temp->next;
    int maximum = temp->data;
    while(curr != NULL){
        if(temp->data >= curr->data){
            temp->next = curr->next;
            curr->next = curr->next->next;
            curr->next->next = temp->next;
            temp = curr;
            curr = curr->next;
        }
        else{
            temp = curr;
            curr = curr->next;   
        }
    }
}


int main()
{
 Node* node1 = new Node(3);
 Node* head = node1;
 insertAtFront(head,2);
 insertAtFront(head,4);
 insertAtFront(head,6);
 insertAtFront(head,3);
 sortList(head);
//  insertAtPos(tail,head,2,6);
 print(head);
 

         
         
         
return 0;
}