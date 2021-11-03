#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//#include<assert.h>
//#include<errno.h>
#include<stdlib.h>
//#include<string.h>
 typedef struct ListNode 
 {
   int val;
   struct ListNode *next;
}Node;
 

//typedef struct ListNode Node;
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2)
{
    Node* cur1 = l1;
    Node* cur2 = l2;
    Node* newList = (Node*)malloc(sizeof(Node));
    Node* cur3 = newList;
    int count = 0;
    while (cur1 && cur2)
    {
        Node* newNode = (Node*)malloc(sizeof(Node));
        if (newList != NULL)
        {
            cur3->next = newNode;
            
        }
        if ((cur1->val + cur2->val) < 10)
        {
            cur3->val = cur1->val + cur2->val + count;
            count = 0;
        }
        else
        {
            cur3->val = (cur1->val + cur2->val + count) % 10;
            count = 1;

        }
        cur1 = cur1->next;
        cur2 = cur2->next;
        cur3 = cur3->next;
    }
    if (cur1)
    {
        while (cur1)
        {
            Node* newNode = (Node*)malloc(sizeof(Node));
            cur3->next = newNode;
            cur3 = cur3->next;
            if (count == 1)
            {
                if (cur1->val + 1 < 10)
                {
                    cur3->val = cur1->val + count;
                    count = 0;
                }
                else
                {
                    cur3->val = 0;
                    count = 1;
                }
            }
            cur1 = cur1->next;
        }
    }
    if (cur2)
    {
        while (cur2)
        {
            Node* newNode = (Node*)malloc(sizeof(Node));
            cur3->next = newNode;
            cur3 = cur3->next;
            if (count == 1)
            {
                if (cur2->val + 1 < 10)
                {
                    cur3->val = cur2->val + count;
                    count = 0;
                }
                else
                {
                    cur3->val = 0;
                    count = 1;
                }
            }
            cur2 = cur2->next;
        }
    }
    return newList;
}
int main()
{
    struct ListNode* n1 = (struct ListNode*)malloc(sizeof(struct ListNode));
        struct ListNode* n2 = (struct ListNode*)malloc(sizeof(struct ListNode));
        struct ListNode* n3 = (struct ListNode*)malloc(sizeof(struct ListNode));
        
        n1->val = 2;
        n1->next = n2;
        n2->next = n3;
        n2->val = 8;
        n3->next = NULL;
        n3->val = 1;

        struct ListNode* n4 = (struct ListNode*)malloc(sizeof(struct ListNode));
        struct ListNode* n5 = (struct ListNode*)malloc(sizeof(struct ListNode));
        struct ListNode* n6 = (struct ListNode*)malloc(sizeof(struct ListNode));

        n4->val = 2;
        n4->next = n3;
        n5->val = 8;
        n5->next = n6;
        n6->val = 4;
        n6->next = NULL;
        Node* head = addTwoNumbers(n1,n4);
        while (head)
        {
             printf("%d->", head->val);
             head = head->next;
        }
                printf("NULL");
        free(head);
        free(n1); free(n2); free(n3); free(n4); free(n5); free(n6);
        head = NULL;
        n1 = NULL;
        n2 = NULL;
        n3 = NULL;
        n4 = NULL;
        n5 = NULL;
        n6 = NULL;
        return 0;
}