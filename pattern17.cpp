#include <iostream>
using namespace std;
int main()
{
	int n;
	cout<<"number of rows :";
	cin>>n;
	for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=i; j++)
		{
			if( (j==1) || (i==n))
				cout<<"*";
			else if( j==i)
				cout<<"*";
			else
				cout<<" ";
		}
		cout<<endl;
	}
	return 0;
}