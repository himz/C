#include <stdio.h>
#include <math.h>
#include <ctype.h>
#define DEBUG
#ifdef DEBUG
# define dbg_printf(...) printf(__VA_ARGS__)
#else
# define dbg_printf(...)
#endif
struct node
{
	int data;
	struct node *next;
};

void printList( struct node *q ) ;
void printNode( struct node *q ) ;
void push( struct node **headRef, int data ) ;


struct node *head;

int main() {
	int a;
	head = NULL;
	push( &head, 3);
	push( &head, 2);
	push( &head, 1);
	printf("Head Node: \n");
	printNode(head);
	printf("List: \n");
	printList(head);
	scanf("%d",&a);
}

void printList( struct node *q ) {
	if ( head == NULL )	
	{
		printf("List is Empty\n");
		return;
	}
	for( ; q != NULL ; q = q -> next ) {
		printNode(q);
	}
		
	printf(	"\n" );
}
void printNode( struct node *q ) {
	printf( "%d\n", q->data );
}

void push( struct node **headRef, int data ) {
	struct node * newNode = malloc(sizeof(struct node));
	newNode -> data = data;
	newNode -> next = *headRef;
	*headRef = newNode;
}
/**
 * Add here checks for validity of the list
 */
void checkList() {
	/**
	 * Checks :
	 * 1) Cycles in the list
	 * 
	 */
	struct node *tortoise, *hare;
	tortoise=head;
	hare=head;
	while( tortoise != NULL && hare != NULL	) {
		if ( hare == tortoise ) {
			printf("ERROR: Cycle has invaded the list\n");
			exit(1);
		}
	}
}