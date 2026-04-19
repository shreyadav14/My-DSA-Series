/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode*Reverse(ListNode* head){
        ListNode* prev=NULL;
        ListNode* curr=head;
        ListNode* next=NULL;
        while(curr!=NULL){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev;
    }
    void insertAtTail(ListNode* &head,ListNode* &tail, int val){
        ListNode* temp= new ListNode(val);
        if(head==NULL){
            head=temp;
            tail=temp;
            return;
        }
        else{
            tail->next=temp;
            tail=temp;
        }
    }
    ListNode* add(ListNode* l1,ListNode* l2){
        int carry=0;
        ListNode* anshead=NULL;
        ListNode* ansTail=NULL;

        while(l1!=NULL || l2!=NULL|| carry!=0){
            int val1=0;
            int val2=0;
            if(l1!=NULL){
                val1=l1->val;
                l1=l1->next;
            }
                if(l2!=NULL){
                val2=l2->val;
                l2=l2->next;
            }
            
            int sum=carry+val1+val2;
            int digit=sum%10;
            carry=sum/10;
            insertAtTail(anshead,ansTail,digit);
        
        }
        return anshead;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        return add(l1,l2);
    }
};
