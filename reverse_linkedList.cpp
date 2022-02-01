//https://practice.geeksforgeeks.org/problems/reverse-a-linked-list/1/?company[]=Amazon&company[]=Amazon&problemType=functional&page=1&sortBy=submissions&category[]=Linked%20List&query=company[]AmazonproblemTypefunctionalpage1sortBysubmissionscompany[]Amazoncategory[]Linked%20List#
//Initial Template for C++// C program to find n'th Node in linked list
#include <stdio.h>
#include <stdlib.h>
#include<iostream>
using namespace std;

/* Link list Node */
struct Node {
    int data;
    struct Node *next;
    Node(int x){
        data = x;
        next = NULL;
    }
};

void printList(Node *head){
    struct Node *temp = head;
        while (temp != NULL){
           printf("%d ", temp->data);
           temp  = temp->next;
        }   
    }

class Solution{
    public:
    //Function to reverse a linked list.
    struct Node* reverseList(struct Node *head){
        // code here
        struct Node* prev, *curr, *nxt;
        prev = NULL;
        curr = head;
        nxt = NULL;
        while(curr != NULL){
            nxt = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nxt;
        }
        head = prev;
        return head;
        // return head of reversed list
    }
};
/* Driver program to test above function*/
int main(){
    int T,n,l,firstdata;
    cin>>T;
    while(T--){
        struct Node *head = NULL,  *tail = NULL;
        cin>>n;
        cin>>firstdata;
        head = new Node(firstdata);
        tail = head;
        
        for (int i=1; i<n; i++){
            cin>>l;
            tail->next = new Node(l);
            tail = tail->next;
        }
        Solution ob;
        head = ob. reverseList(head);
        printList(head);
        cout << endl;
    }
    return 0;
}
  // } Driver Code Ends