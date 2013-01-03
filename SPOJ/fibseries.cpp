#include<iostream>
#include <cmath>

using namespace std ;
int main()
{
	int i=2;
	long long a=0,b=1,c;
	long long test;
	cout<<a<<","<<b<<",";
	while (i<65)
	{
		c=a+b;
		cout<<c%10<<",";
		a=b;
		b=c;
		i++;
	}
	
	cout<<endl<<i<<","<<c;
}
