#include<iostream>
using namespace std ;

int main()
{
	int n ; //number of primes in b/w numbers
    //number of test cases 
	//scanf("%d",&x);
	int x;
	cin>>n;
    while(n--)
    {
		cin>>x;
		if(x%4== 0 || x%4==1)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
		
		          
    }
}
