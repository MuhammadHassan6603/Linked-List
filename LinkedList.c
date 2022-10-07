#include<stdio.h>
#include<stdlib.h>
struct Node
{
	int data;
	struct Node *link;
};
void main()
{
	struct Node *temp,*p,*lastNode;
	p=NULL;
	
	
	temp=(struct Node*)malloc(sizeof(struct Node));  //New node address stored in temp
	temp->data=10;                                   // node data has 10 stored in it
	temp->link=NULL;                                 // node address part is null
	p=temp;                                          //address of node is stored in p 
	lastNode=temp;                                   //for backup address
	
	
	temp=(struct Node*)malloc(sizeof(struct Node));  // Creating new node ,previous adress of temp will be replaced with new one
	temp->data=20;                                   //new node's data part has 20 stored in it
	temp->link=NULL;                                 //new node's address part is NULL
	lastNode->link=temp;                             //here we will send the address of new node and put it in previous node's address part
	lastNode=temp;                                   //we will take new node's address as backup
	temp=p;
	
	while(temp!=NULL)
	{
		printf("%i\t",temp->data);
		temp=temp->link;
	}
	                                   
}
