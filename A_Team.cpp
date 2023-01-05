#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int count=0;
	int a1[n],a2[n],a3[n];
	for(int i=0;i<n;i++)
	{
		cin>>a1[i]>>a2[i]>>a3[i];
	}
	for(int i=0;i<n;i++)
	{
		if((a1[i]==1&&a2[i]==1) || (a2[i]==1&&a3[i]==1) || (a3[i]==1&&a1[i]==1)  || a1[i]==1&&a2[i]==1&&a3[i]==1)
		{
			count++;
		}
		else{
			continue;
		}
	}
	cout<<count<<"\n";
}