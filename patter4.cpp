#include<iostream>
using namespace std;
int main()
{
	int n,row,col;
	cin>>n;
	for(row=1;row<=n;row++)
	{
		for(col=1;col<=row;col++)
		{
			cout<<col<<" ";
		}
		cout<<"\n";
	}
	return 0;
}
//Output for n=4
//1 
//1 2 
//1 2 3
//1 2 3 4 
//for(row=1;row<=n;row++)
//	{
//		for(col=1;col<=row;col++)
//		{
//			cout<<row<<" ";//if i print row
//		}
//		cout<<"\n";
//	}
//	return 0;
//output 
//1
//2 2
//3 3 3 
//4 4 4 4

