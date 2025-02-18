// Single Linked List

#include<iostream>
using namespace std;
class Node{
    public:
      int data;
      Node* next;
    // Constructor
    Node(int data){
        this ->data = data;
        this ->next = NULL;
    }
    // Destructor
    ~Node(){
        int value = this->data;
        if(this->next != NULL){
            delete next;
            this->next = NULL;
        }
        cout<<"Memory Freed for:"<<value<<endl;
    }
};

void insertAtFront(Node* &head,int data){
    Node* node2 = new Node(data);
    node2->next = head;
    head = node2;
}
void insertAtEnd(Node* &tail,int data){
    Node* node3 = new Node(data);
    node3->next = 0;
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

// ** Deletion **
void deleteNode(Node* &head,int pos,Node* &tail){
     // From Beginning
     if(pos == 1){
        Node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
     }
     // At position or End
     else{
        Node* current = head;
        int cnt = 1;
        Node* prev = NULL;
        while(cnt<pos){
            prev = current;
            current = current->next;
            cnt++;
        }
        prev->next = current->next;
        current->next = NULL;
        if(prev->next == NULL){
            tail = prev;
        }
        delete current;
     }
}
void delonValue(Node* &head,int value){
    // At beginning
    if(head->data == value){
        Node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    // At middle or end
    else{
    Node* curr = head;
    Node* prev = NULL;
    while(curr->data != value){
        prev = curr;
        curr = curr->next;
    }
    if(curr->data == value){
    prev->next = curr->next;
    curr->next = NULL;
    delete curr;
    }
    }
}
// Floyd's Deduction Algo[*Imp*]
// Detect Loop in List
Node* checkLoop(Node* &head){
    if(head == NULL){
        return NULL;
    }
    else{
        Node* slow = head;
        Node* fast = head;
        while(slow != NULL && fast != NULL){
            fast = fast->next;
            if(fast != NULL){
                fast = fast->next;
            }
            slow = slow->next;
            if(fast == slow){
                cout<<"Cycle Detected at ->"<<slow->data<<endl;
                return slow;
            }
        }
        cout<<"No Cycle Detected"<<endl;
        return NULL;
        
    }
}
// Find start Node of list
Node* getstartNode(Node* &head){
    if(head == NULL){
        return NULL;
    }
    else{
        Node* intersect = checkLoop(head);
        Node* slow = head;
        while(slow != intersect){
            slow = slow->next;
            intersect = intersect->next;
        }
        return slow;
    }
}
// Remove Loop
void removeLoop(Node* &head){
    if(head == NULL) return;

    else{
        Node* start = getstartNode(head);
        Node* temp = start;
        while(temp->next != start){
            temp = temp->next;
        }
        temp->next = NULL;
    } 
}

int main()
{
 // Created a new node
  Node* node1 = new Node(10);
  Node* head = node1;
  Node* tail = node1;
  //Insert a new node
   insertAtFront(head,5);
   insertAtEnd(tail,20);
   insertAtPos(tail,head,3,15);
   insertAtEnd(tail,25);
   insertAtEnd(tail,30);
   tail->next = head->next;

//    if(checkLoop(head)){
//     cout<<"Cycle Detected"<<endl;
//    }
//    else{
//     cout<<"No Cycle"<<endl;
//    }
   
  Node* ans = getstartNode(head);
  cout<<"Start Node of List ->"<<ans->data<<endl;

  // Removing Loop
  removeLoop(head);
  print(head);
  Node* ans1 = checkLoop(head);
 return 0;
}