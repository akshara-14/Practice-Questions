// Given a linked list, reverse the nodes of a linked list k at a time and return its modified list.

// k is a positive integer and is less than or equal to the length of the linked list. If the number of nodes is not a multiple of k then left-out nodes, in the end, should remain as it is.

// You may not alter the values in the list's nodes, only nodes themselves may be changed.

struct ListNode * reversek(struct ListNode* head, int k){
    struct ListNode* a = head, *b = head->next, *c = NULL;
    int i;
    for (i=0;i< k - 1;++i){
        c = b->next;
        b->next = a;
        a = b;
        b = c;
    }
    head->next = b;
    return a;
}
 
struct ListNode* reverseKGroup(struct ListNode* head, int k) {
    struct ListNode* a = head, * b = NULL, *c=NULL;
    // first count
    int i = 0;
    while (a != NULL) {
        a = a->next;
        ++i;
    }
    int q = i / k;
    int j;
    a = head;
    for (j = 0; j < q ; ++j){
        b = reversek(a,k);  // end of each k-block
        if (j == 0) head = b;
        else c->next = b;
        c = a;
        a = a->next; // original head of next block
    }
    return head;