#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    // cosntructor
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};

  void insertathead(Node* &head, int d){
    // create a new node 
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
  }
//   insert at tail 
void  insertatail(Node* &tail, int d){
    Node* temp = new Node(d);
    tail -> next = temp;
    tail =tail->next;

}

// insert at postion
void insertatposition(Node* &tail,Node* &head, int position, int d){
    // insert at 1st postion
    if(position == 1)
       insertathead(head , d);
       return;
    Node* temp = head;
    int count = 1;
    while(count < position-1){
        temp = temp->next;
        count++;
    }

    // insert at last postion
    if(temp -> next == NULL){
        insertatail(tail,d);
        return;
    }
    // creating a node 
    Node* nodetoinsert = new Node(d);
    nodetoinsert ->next = temp->next;
    temp -> next = nodetoinsert;
}
  void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<endl;
        temp = temp->next;
    }
    cout<<endl;
  }
int main(){
    Node* node1 = new Node(10);
    // cout<<node1->data <<endl;
    // cout<<node1->next<<endl;

    Node* head = node1;
    Node* tail = node1;
    print(head);
    insertathead(head , 12);
    print(head);
    insertatail(tail,21);
    print(head);
    insertatposition(tail ,head , 1,22);
    print(head);
}
