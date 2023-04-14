#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"number of rows : ";
	cin>>n;
	for(int i=0; i<=n; i++)
	{
		for(int s=1; s<=(n-i); s++)
		{
			cout<<" ";

		}
		for( int k=1; k<=(i+1); k++)
		{
			cout<<"* ";
		}
		cout<<endl;
	}
	return 0;
}