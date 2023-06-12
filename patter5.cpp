#include<iostream>
using namespace std;
int main()
{
	int n,row,col;
	cin>>n;
	for(row=1;row<=2*n-1;row++)
	{
	  int totalcolumns=row>n? 2*n-row:row;
	  for(col=1;col<=totalcolumns;col++)
	  {
	  	cout<<"* ";
	  }
	  cout<<"\n";
	}
	return 0;
}
//output for n=3
//*
//* *
//* * *
//* *
//*
