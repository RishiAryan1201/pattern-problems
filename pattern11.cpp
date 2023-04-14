#include <iostream>
using namespace std;
int main()
{
	int j;
	cout<<"number of rows :";
	cin>>j;
	for(int i=0; i<=j; i++)
	{
		for(int s=1; s<=i; s++)
		{
			cout<<" ";

		}
		for( int n=1; n<=(j-i); n++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}