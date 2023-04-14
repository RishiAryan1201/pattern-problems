#include <iostream>
using namespace std;
int main()
{
	for(int i=1; i<=3; i++)
	{
		for( int j=1; j<=i; j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	for (int k=2; k>=1; k--)
	{
		for (int f=1; f<=k; f++)
		{
			cout<<"*";
		}
		cout<<endl;
	}

	return 0;
}