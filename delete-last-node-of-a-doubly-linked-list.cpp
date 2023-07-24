#https://www.codingninjas.com/studio/problems/delete-last-node-of-a-doubly-linked-list_8160469?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=1
/**
 * Definition of doubly linked list:
 *
 * struct Node {
 *      int data;
 *      Node *prev;
 *      Node *next;
 *      Node() : data(0), prev(nullptr), next(nullptr) {}
 *      Node(int val) : data(val), prev(nullptr), next(nullptr) {}
 *      Node(int val, Node *p, Node *n) : data(val), prev(p), next(n) {}
 * };
 *
 *************************************************************************/

Node * deleteLastNode(Node *head) {
    Node* curr=head;
    Node* previ=head;
    if(head->next==NULL)
    {
        delete(head);
        return NULL;
    }
    while(curr->next!=NULL)
    {
        previ=curr;
        curr=curr->next;
    }
    previ->next=NULL;
    curr->prev=NULL;
    delete(curr);

    return head;
   // Write your code here
}
