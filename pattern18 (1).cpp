#include <iostream>

using namespace std;
int main()
{
	int n;
	cout<<"number of row :";
	cin>>n;
	for(int i=1; i<=n; i++)
	{
		for(int s=1; s<=(n-i); s++)
		{
			cout<<" ";
		}
		for(int j=1; j<=i; j++)
		{
			if( (j==1) || ( i==n) || (j==i))
				cout<<"*";
			else
				cout<<" ";
		}
		cout<<endl;
	}

	return 0;

}