#include<iostream>
#include <cmath>
using namespace std ;
int main()
{
	int t ; 
	int n;
	int k;
	cin>>t;
    while(t--)
    {
		cin>>n>>k;
		int kmod4= k%4;
		
		if(kmod4== 0 || kmod4==3)
		{
			if(kmod4%4== 0 || kmod4%4==3)
				{cout<<"Male"<<endl;}
			else
				{cout<<"Female"<<endl;}
		}
	
		else if(kmod4==1 || kmod4==2)
		{
			if(kmod4%4== 1 || kmod4%4==2)
				{cout<<"Female"<<endl;}
			else
				{cout<<"Male"<<endl;}
		}		
    }
}
