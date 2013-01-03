#include<iostream>
#include<cstdio>
using namespace std ;
int main()
{	
	int    c;
size_t s = 0;
int i=0,j=0
int hash[15000][26];
char arr[15000][10];
char sarr[15000][10];
for(int i=0;i<15000;i++)
	for(int j=0;j<26;j++)
		hash[i][j]=0;

while ((c = getchar()) != EOF)
{	//generate String array and hash array.
	arr[i][j]=c;
	hash[i][c-'a']++;
	if(c=="\n")r
		i++;
	else
		j++;
  s++;
}

printf("Size: %z\n", s);
printf("Size: %d\n", s);
}
