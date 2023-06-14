#include<iostream>
using namespace std;
int main()
{   int n;
	cout<<"Enter the value of n"<<endl;
	cin>>n;
	
	for (int row=1;row<=n;row++)//outer for loop for rows
	{
		for(int s =1;s<=n-row;s++)//this for spaces
		{
			cout<<" ";
		}
		for(int col=row;col>=1;col--)
		{
			cout<<col;
			
		}
		for (int col=2;col<=row;col++)
		{
			cout<<col;
		}
		cout<<"\n";
 
	}
	return 0;
		
	
	
}
