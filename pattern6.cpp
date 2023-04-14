#include<iostream>
using namespace std;
int main()
{
	

	for(int i=1, k=0; i<=3; i++, k=0)
	{
		for(int s=1; s<=(3-i); s++)
		{
			cout<<" ";
		}
		while(k!= (2*i) -1)
		{
			cout<<"*";
			k++;
		}
		cout<<endl;
	}
	
	return 0;
}