#include<bits/stdc++.h>
#include<vector>
using namespace std;


class Node{
    public:
    int data;
    Node* next;
    Node(int d){
      this->data=d;
        this->next=nullptr;
    }
};

bool  detectLoop(Node* head){
    unordered_set<Node*>st;

    while(head!=nullptr){

        if(st.find(head)!=nullptr){
            return true;

            st.insert(head);
            head=head->next;
        }
       
    }
     return false;
}
  
int main () {

    Node* head=new Node(1);
    head->next=new Node(3);
    head->next->next=new Node(4);

    head->next->next->next=head->next;

    if(detectLoop(head))
    cout<<"true";
    else
    cout<<"false";
 
return 0;
}