#include<bits/stdc++.h>
#include<vector>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int d){
        data=d;
        next=nullptr;
    }
};

bool isPalindrome(Node* head){
    Node* currNode=head;
    stack<int>s;

    while(currNode!=nullptr){
        s.push(currNode->data);
        currNode=currNode->next;
    };

    while(head!=nullptr){
        int c=s.top();
        s.pop();

        if(head->data!=c){
            return false;
        }
        head=head->next;

    }
    return true;
}
  
int main () {
    Node* head=new Node(1);
    head->next=new Node(2);
    head->next->next=new Node(3);
    head->next->next->next=new Node(2);
    head->next->next->next->next=new Node(1);

    bool result=isPalindrome(head);

    if(head)
    cout<<"true";
    else
    cout<<"false";

return 0;
}