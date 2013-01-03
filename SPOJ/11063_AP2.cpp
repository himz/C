#include <sstream>
#include <iostream>


using namespace std;


#define fr(i,a,b) for(i=(int)a;i<(int)b;i++)
#define frd(i,a,b) for(i=(int)a;i>(int)b;i--)
#define sz(v) (int)v.size()
#define clr(a,b) memset(a,b,sizeof(a)) 
#define frsz(i,v) for(i=0;i<(int)sz(v);i++)
#define frdsz(i,v) for(i=(int)sz(v)-1;i>=0;i--)

typedef long long int64;//NOTES:int64
typedef unsigned long long uint64;//NOTES:uint64


int main()
{
int t;
	cin >> t;
	int64 a3,a3l,sum;
	int64 n=0,a=0,d=0,i=0;
	while( t-- )
	{
		cin>>a3>>a3l>>sum;
		
		n=(2*sum)/(a3+a3l);
		d=(a3l-a3)/(n-5);
		a=(a3-(2*d));
		cout<<n<<endl;
		//Print the series 
		fr(i,0,n)
		{
			cout<<a+(i*d)<<" ";
		}
		cout<<endl;
	}
return 0;
}

