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
	struct node *left;
	struct node *right;
};

void printList( struct node *q ) ;
void printNode( struct node *q ) ;
void push( struct node **headRef, int data ) ;
void checkList() ;

struct node *root;