#include<iostream>
using namespace std;
int main()
{
	int n,row,col;
	cin>>n;
	for(row=1;row<=n;row++)
	{
		for(col=1;col<=n-row+1;col++)
		{
			cout<<"* ";
			
		}
		cout<<"\n";
	}
	return 0;
}
//Output  for n=4
//* * * * 
//* * *
//* * 
//* 
