//task B2
#include <iostream>
using namespace std;
struct Node {
	int data;   
	Node* next;
};
// Insert new node at begining 
void insertAtHead(Node*& head,int val) {
	Node* n= new Node{val,head};
	head = n; //update head
}

//delete first node 
void deleteHead(Node*& head) {
	if (!head) return; //empty slist check 
	Node*temp = head; //store old head
	head = head->next; //move head
	delete temp; //free old head
}
void printlist(Node*head) {
	cout<<"List:";
	for (Node*cur = head; cur; cur= cur->next)
	cout<<endl;
}
int main () {
	Node*head = NULL;
	
	insertAtHead(head,30); //list: 30
	insertAtHead(head,20); //list: 20->30
	insertAtHead(head,10); //list: 10->20->30
	printlist(head);
	
	deleteHead(head); //remove 10
	printlist(head);
	
	return 0;
}
