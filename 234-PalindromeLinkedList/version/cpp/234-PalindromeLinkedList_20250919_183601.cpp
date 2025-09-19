// Last updated: 9/19/2025, 6:36:01 PM
//**
 //* Definition for singly-linked list.
 //* struct ListNode {
 //*     int val;
 //*     ListNode *next;
 //*     ListNode() : val(0), next(nullptr) {}
 //*     ListNode(int x) : val(x), next(nullptr) {}
 //*     ListNode(int x, ListNode *next) : val(x), next(next) {}
 //* };
 //
class Solution {
public:
  
    ListNode* reverse(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* curr = head;
        while (curr != nullptr) {
            ListNode* nextNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextNode;
        }
        return prev;
    }

    bool isPalindrome(ListNode* head) {
        if (!head || !head->next) return true;

        
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        }

        
        ListNode* newHead = reverse(slow);
        ListNode* first = head;
        ListNode* second = newHead;

        
        bool result = true;
        while (second != nullptr) {
            if (first->val != second->val) {
                result = false;
                break;
            }
            first = first->next;
            second = second->next;
        }

        
        reverse(newHead);

        return result;
    }
};
