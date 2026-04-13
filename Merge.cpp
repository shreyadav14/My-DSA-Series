#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int val){
        data=val;
        next=NULL;
    }
};
struct Node* merge(Node*L1,Node*L2){
    if(L1==NULL||L2==NULL){
        return L1==NULL?L2:L1;
    }
    if(L1->data<=L2->data){
        L1->next=merge(L1->next,L2);
        return L1;
    }
    else{
        L2->next=merge(L2->next,L1);
        return L2;
    }
}
void insert(Node*&head,int val){
    Node* newNode=new Node(val);
    if(head==NULL){
        head=newNode;
        return;
    }
    Node*temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newNode;
}
void Print(Node* head){
    while(head!=NULL){
        cout<<head->data<<"->";
        head=head->next;
    }
    cout<<"NULL"<<endl;
}

int main(){
    Node*L1=NULL;
    Node* L2=NULL;

    insert(L1,1);
    insert(L1,3);
    insert(L1,5);

    insert(L2,2);
    insert(L2,4);
    insert(L2,6);

    cout << "List 1: ";
    Print(L1);

    cout << "List 2: ";
    Print(L2);
    Node* merged=merge(L1,L2);

    cout << "Merged List: ";
    Print(merged);

    return 0;

}
