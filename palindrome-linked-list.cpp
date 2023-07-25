https://leetcode.com/problems/palindrome-linked-list/submissions/

class Solution {
public:
    bool isPalindrome(ListNode* head) {
    vector<int>org;
   
    ListNode* temp=head;
    while(temp!=NULL)
    {
        org.push_back(temp->val);
        temp=temp->next;
    }  
    for(int i=0;i<org.size()/2;i++)
    {
        if(org[i]!=org[org.size()-1-i])
        return false;
    }  
    return true;

    }
};
