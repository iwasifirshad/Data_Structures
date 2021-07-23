//Insert in Middle of Linked List

#include <bits/stdc++.h>
using namespace std;

struct Node 
{
    int data;
    struct Node *next;
    
    Node(int x) {
        data = x;
        next = NULL;
    }
};

// function to display the linked list
void display(Node* head)
{
	while (head != NULL) {
		cout << head->data << " ";
		head = head->next;
	}
	cout<<endl;
}

Node* insertInMiddle(Node* head, int x);

int main()
{
    int T, n, x;
    cin>>T;
    while(T--)
    {
        cin>> n >> x;
        
        struct Node *head = new Node(x);
        struct Node *tail = head;
        
        for (int i=0; i<n-1; i++)
        {
            cin>>x;
            tail->next = new Node(x);
            tail = tail->next;
        }
        
        cin>> x;
        head = insertInMiddle(head, x);
        display(head);
    }
    return 0;
}
// } Driver Code Ends


/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/
#include<cmath>
//Function to insert a node in the middle of the linked list.
Node* insertInMiddle(Node* head, int x)
{
     Node *newNode = new Node(x);
     if(head==NULL)
     {
         head=newNode;
     }
	struct Node *slow=head;
	struct Node *fast=head->next;
	
	while(fast!=NULL && fast->next!=NULL)
	{
	    slow=slow->next;
	    fast=fast->next->next;
	}
	newNode->next=slow->next;
	slow->next=newNode;
	
	return head;
}