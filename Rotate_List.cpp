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
    ListNode* rotateRight(ListNode* head, int k) { 
        if(head==nullptr || head->next==nullptr){ 
            return head; 
        } 
        ListNode* start = head; 
        int count=1; 
        while(head->next!=nullptr){ 
            count++; 
            head=head->next; 
        } 
        if(k%count==0){ 
            return start; 
        } 
        int rem = count - k%count; 
        head->next = start; 
        ListNode* x; 
        for(int i=1;i<=rem;i++){ 
            if(i==rem){ 
                x=start->next; 
                start->next=nullptr; 
            } 
            start=start->next; 
        } 
        return x; 
    } 
};