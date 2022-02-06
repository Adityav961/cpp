// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	struct Node* next;
	
	Node(int x){
	    data = x;
	    next = NULL;
	}
	
};

struct Node* buildList(int size)
{
    int val;
    cin>> val;
    
    Node* head = new Node(val);
    Node* tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cin>> val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}

struct Node* makeUnion(struct Node* head1, struct Node* head2);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        
        cin>>n;
        Node* first = buildList(n);
        
        cin>>m;
        Node* second = buildList(m);
        
        printList(makeUnion(first,second));
    }
    return 0;
}
// } Driver Code Ends

void push(Node** head_ref, int new_data){
    Node* new_node = new Node(new_data);
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

struct Node* makeUnion(struct Node* head1, struct Node* head2){
    Node *ll1 = head1;
    Node *ll2 = head2;
    Node *temp = NULL;
    int mp[1000] = {0};
    // if(ll1 == NULL || ll2 == NULL)
    //     return;
    while(ll1){
        mp[ll1->data]++;
        ll1 = ll1->next;
    }
    
    while(ll2){
        mp[ll2->data]++;
        ll2 = ll2->next;
    }
    for(int i = 999; i >= 0; i--){
        if(mp[i] > 0)
            push(&temp, i);
    }
    return temp;
}
