#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node*next;
    Node(int val){
        data=val;
        next=NULL;
    }
};
class List{
    Node*head;
    Node*tail;
public:
    List(){
        head=tail=NULL;
    }     
        void push_at_front(int val){        //O(1)
            Node* newNode=new Node(val);
            if(head==NULL){
                head=tail=newNode;
                return;
            }
            else{
                newNode->next=head;
                head=newNode;
            }
        }
         void push_at_back(int val){    //O(1)
            Node* newNode=new Node(val);
            if(tail==NULL){
                head=tail=newNode;
                return;
            }
            else{
                tail->next=newNode;
                tail=newNode;
            }
               
            }  
        void pop_front(){//o(1)
            Node* temp=head;
            if(head==NULL){
                cout<<"Empyty list"<<endl;
            }
            else{
                head=head->next;
                temp->next=NULL;
                delete temp;
            }
        }
        void pop_back(){   //O(1)
            Node* temp=head;
            if(head==NULL){
                cout<<"Empyty list"<<endl;
            }
            while(temp->next!=tail){
                    temp=temp->next;
                }
                temp->next=NULL;
                delete tail;
                tail=temp;
            
        }
        void insert_at_pos(int pos,int val){ ////O(n)
            if(pos<0){
                cout<<"Invalid"<<endl;
                return;
            }
            if(pos==0){
                push_at_front(val);
                return ;
            }
            Node* temp=head;
            for(int i=0;i<pos-1;i++){
                temp=temp->next;
            }
            Node* newNode=new Node(val);
            newNode->next=temp->next;
            temp->next=newNode;
        }
            void printll(){     ///O(n)
                Node*temp=head;
                while(temp!=NULL){
                    cout<<temp->data<<"->";
                    temp=temp->next;
                
                }
                cout<<"NULL"<<endl;
            }
            int search(int key){ //O(n)
                Node* temp=head;
                int index=0;
                while(temp!=NULL){
                    if(temp->data==key){
                        cout<<"Found"<<endl;
                        return index;
                    }
                    temp=temp->next;
                    index++;
                }
                cout<<"Not found"<<endl;
                return -1;
            }
    };


    int main(){
        List ll;
        ll.push_at_front(10);
        ll.push_at_front(20);   
        ll.push_at_front(30);
        ll.push_at_back(00);
        ll.insert_at_pos(1,25);
        cout<<ll.search(25)<<endl;
        ll.printll();
        return 0;
    }
