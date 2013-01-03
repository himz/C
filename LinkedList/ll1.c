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
void checkList() ;

struct node *head;

int Count( struct node *headptr, int searchFor) {
	int count = 0 ;
	struct node *q = head;
	for(  ; q != NULL ; q = q -> next) {
		if(searchFor ==  q -> data)
			count++;
	}
	return count;

}

int GetNth( struct node *headptr, int index ) {
	struct node *q = head; 
	int i =0;
	while( q != NULL  ) {

		if( i == index )
			break;
        q = q -> next;
		i++ ;
	}
	
    for (q = head, i=0 ; i < index &&  q != NULL ; q = q -> next, ++i) ;
	return q -> data;
}


int main() {
	int a;
	head = NULL;
	push( &head, 3);
	push( &head, 2);
	push( &head, 1);
	push( &head, 1);
	checkList();
	printf("Head Node: \n");
	printNode(head);
	printf("List: \n");
	printList(head);
	/* Count Test */
	printf("Count of 1 = %d\n", Count( head, 1 ));
	/* GetNth test */
	printf("Value at node 2 = %d \n", GetNth( head, 2));
	scanf("%d",&a);
}
/* Helper Function Start */
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
		tortoise = tortoise -> next;
		if(	hare -> next != NULL )
			hare = ( hare -> next ) -> next;

		if ( hare == tortoise ) {
			printf("ERROR: Cycle has invaded the list\n");
		}
	}
}
/* Helper Function End */
