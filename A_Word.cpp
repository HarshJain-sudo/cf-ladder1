#include<bits/stdc++.h>
using namespace std;
int main()
{
	string x;
	cin>>x;
	int big=0;
	int small =0;
	for(int i=0;i<x.size();i++)
	{
		if(x[i]>=97 && x[i]<=122)
		{
			small++;
		}
		else{
			big++;
		}
	}
	if(big<=small)
	{
		for(int i=0;i<x.size();i++)
		{
			if(x[i]>=97 && x[i]<=122)
		{
			 continue;
		}
		else{
			x[i]=x[i]+32;
		}
		}
	}
	else{
		for(int i=0;i<x.size();i++)
		{
			if(x[i]>=65 && x[i]<=90)
		{
			 continue;
		}
		else{
			x[i]=x[i]-32;
		}
		}
		
	}
	for(int i=0;i<x.size();i++)
	{
		cout<<x[i];
	}
}