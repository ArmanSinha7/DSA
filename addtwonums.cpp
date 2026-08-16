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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head = nullptr;
        ListNode* tail = nullptr;
        int carry = 0;
        while(l1!=nullptr || l2!=nullptr){
            int a =0,b=0;
            if(l1!=nullptr){
            a=l1->val;}
            if(l2!=nullptr){
            b=l2->val;}
            int sum = a+b+carry;
            int dig = sum%10;
            carry = sum/10;
            ListNode* newNode = new ListNode(dig);
             if (head == nullptr) {
                head = newNode;
                tail = newNode;
            }
            else {
                tail->next = newNode;
                tail = newNode;
            }
            if(l1!=nullptr){
                l1=l1->next;
            }
            if(l2!=nullptr){
                l2=l2->next;
            }
        }
        if (carry != 0) {
            tail->next = new ListNode(carry);
        }
        return head;
    }
};