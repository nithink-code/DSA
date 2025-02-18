#include<iostream>
using namespace std;
class Node{
    public:
        int data;
        Node* next;
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
    ~Node(){
        int value = this->data;
        while(this->next != NULL){
            delete next;
            this->next = NULL;
        }
        cout<<"Memory Freed for value: "<<this->data<<endl;
    }

};
// Inserting based on element
void insertatEle(Node* &tail,int ele,int data){
    // Empty list
    if(tail == NULL){
        Node* curr = new Node(data);
        tail = curr;
        curr->next = curr;
    }
    // Non-Empty list
    else{
        Node* temp = tail;
        while(temp->data != ele){
            temp = temp->next;
        }
        Node* curr1 = new Node(data);
        curr1->next = temp->next;
        temp->next = curr1;

    }
}
void print(Node* &tail){
    // In this case tail pointer will be at the end

    // Empty list
    if(tail == NULL){
        cout<<"List is Empty!!"<<endl;
        return;
    }
    else{
        Node* temp = tail;
      do{
        cout<<tail->data<<" ";
        tail = tail->next;
      }
    while(tail != temp);
    cout<<endl;

    }
}
void delonEle(Node* &tail,int ele){
    // Empty List
    if(tail == NULL){
        cout<<"Empty List!!"<<endl;
        return;
    }
    else{
        Node* prev = tail;
        Node* curr = prev->next;
        while(curr->data != ele){
            prev = curr;
            curr = curr->next;
        }
        prev->next = curr->next;
        // To handle single node in a list
        if(prev == curr){
            tail = NULL;
        }
        // If >=2 nodes are there in a list
        else if(tail == curr){
            tail = prev;
        }
        curr->next = NULL;
        delete curr;
    }
}


int main()
{
  Node* tail = NULL;
  insertatEle(tail,5,2);
  insertatEle(tail,2,4);
  insertatEle(tail,4,6);
  insertatEle(tail,6,8);
  insertatEle(tail,8,10);

//   print(tail);
//   delonEle(tail,4);
//   print(tail);     
  return 0;
}