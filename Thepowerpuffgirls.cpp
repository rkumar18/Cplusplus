
#include <iostream>
using namespace std;
int main()
{
	
	unsigned int n ,i ;
	unsigned long long int quantity[n],min=0,product[n];
	unsigned long long int ingredient[n];
	
	cin>>n;
	if(n<=0)
	{
		goto end;
	}
	for(i=0;i<n;i++)
	{	
		cin>>quantity[i];	
	}
	for(i=0;i<n;i++)
	{	
		cin>>ingredient[i];	
	}
	for(i=0;i<n;i++)
	{  
		product[i]=ingredient[i]/quantity[i];
	}
	min=product[0];
	for(i=1;i<n;i++)
	{
		if(min>product[i])
		min=product[i];
	}
	end:
	cout<<min<<endl;
	return 0;
}
