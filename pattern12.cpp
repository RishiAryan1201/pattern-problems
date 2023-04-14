#include<iostream>
using namespace std;
int main()
{
	int k;
	cout<<"number of rows :";
	cin>>k;
	for(int i=0; i<=k; i++)
	{
		for(int s=1; s<=((2*i)+1) ; s++)
		{
			cout<<" ";
		}
		for(int j=1; j<=(k-i); j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}

	return 0;
}