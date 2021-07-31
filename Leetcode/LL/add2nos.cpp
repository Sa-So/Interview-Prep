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
    int carry = 0;
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* tempe = l1;
        //int carry=0;
        ListNode* temp = rec(l1,l2);
        //ListNode* temp2;
        //temp->next = new ListNode()
        //if(carry) temp->next= new ListNode(1);
        if(temp)
        cout<<"temp = "<<temp->val<<endl;
        return tempe;
    }
    ListNode* rec(ListNode* &l1, ListNode* l2){
        //if(!l1 && !l2) return;
        //if(!l1 && l2) 
        //static int carry = 0;
        int sum = l1->val+l2->val;
        if(carry) sum++;
        if(sum>9) carry=1;
        else carry = 0;
        sum=sum%10;
        l1->val=sum;
        if(!(l1->next) && !(l2->next)){
            if(carry){
                
             l1->next = new ListNode(1);
             l1=l1->next;
             //return l1->next;
            }
            return l1;
        }
        if(!(l1->next) && l2->next){
            l1->next = new ListNode(0);
        }
        if(l1->next && !(l2->next)){
            l2->next = new ListNode(0);
        }
        
        l1=l1->next;
        l2=l2->next;
        
        rec(l1,l2);
        
        return l1;
    }
};
