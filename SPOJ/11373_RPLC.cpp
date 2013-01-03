#include<iostream>
using namespace std ;
int main()
{
	long long t ; 
	long long n;
	long long i;
	cin>>t;
	i=t;
    while(t--)
    {
		
		cin>>n;
		long long sum=0;
		long long outp=1;
		long long ni;
		while(n--)
		{
			cin>>ni;
			
			sum+=ni;
			if(sum<=0)
			{
				outp=outp-sum;
				sum=sum + outp;
			}
		}
		cout <<"Scenario #"<<(i-t)<<": "<<outp<<endl<<endl;
    }
}
