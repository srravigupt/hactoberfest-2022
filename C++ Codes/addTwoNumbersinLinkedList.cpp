#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

class Solution
{
    Node *reverse(Node *curr)
    {
        Node *prev = NULL;
        Node *next;
        while (curr != NULL)
        {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        curr = prev;
        return curr;
    }

public:
    // Function to add two numbers represented by linked list.
    struct Node *addTwoLists(struct Node *first, struct Node *second)
    {
        // code here
        first = reverse(first);
        second = reverse(second);

        int sum = 0;
        int carry = 0;

        Node *temp;
        Node *res = NULL;
        Node *curr = NULL;

        while (first != NULL || second != NULL)
        {
            sum = carry + (first ? first->data : 0) + (second ? second->data : 0);
            carry = (sum >= 10) ? 1 : 0;
            sum = sum % 10;

            temp = new Node(sum);
            if (res == NULL)
                res = temp;
            else
                curr->next = temp;
            curr = temp;

            if (first)
                first = first->next;
            if (second)
                second = second->next;
        }

        if (carry > 0)
        {
            temp = new Node(carry);
            curr->next = temp;
            curr = temp;
        }

        res = reverse(res);
        return res;
    }
};