#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"input a number : ";
	cin>>n;
	

	while(1)
	{
		cout<<n<<" ";
		if(n==1)
		{
			break;
		}
		else if(n!=1)
		{
			if(n%2!=0)
			{
				n=3*n+1;
			}
			else if(n%2==0)
			{
				n=n/2;
			}
		}
	}

	cout<<"\n";
	return 0;
}	
