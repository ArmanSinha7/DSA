class Solution { 
public: 
    ListNode* swapPairs(ListNode* head) { 
        if(head==nullptr || head->next==nullptr){ 
            return head; 
        } 
        ListNode dummy(0); 
        ListNode* x = &dummy; 
        dummy.next= head; 
        int i=0; 
        while(head != nullptr){ 
            if(i==0 || i%2==0){ 
                head=head->next; 
                i++; 
                continue; 
            } 
            ListNode* y = head->next; 
            head->next = x->next; 
            ListNode* a = x->next; 
            a->next = y; 
            x->next = head; 
            head = y; 
            x=a; 
            i++; 
 
        } 
        return dummy.next; 
    } 
};