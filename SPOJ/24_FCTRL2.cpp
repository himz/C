#include<iostream>
#include<sstream>
using namespace std ;



#define fr(i,a,b) for(i=(int)a;i<(int)b;i++)
#define frd(i,a,b) for(i=(int)a;i>(int)b;i--)
#define sz(v) (int)v.size()
#define clr(a,b) memset(a,b,sizeof(a)) 
#define frsz(i,v) for(i=0;i<(int)sz(v);i++)
#define frdsz(i,v) for(i=(int)sz(v)-1;i>=0;i--)


int main()
{
	int t;
	cin >> t;
	while( t-- )
	{
		int n,i,j;
		cin >> n;
		string a="1";
		fr(i,2,n+1)
		{
			string temp="";
			int car=0;
			frdsz(j,a)
			{
				temp = (char)(((((int)a[j]-(int)'0')*i + car) % 10)+(int)'0') + temp;
				car = (((int)a[j]-(int)'0')*i + car)/10;
			}
			stringstream s;
			if(car)
			s << car;
			temp = s.str() + temp;
			a = temp;
			
		}
		cout << a << endl;
	}	
	return 0;
}

