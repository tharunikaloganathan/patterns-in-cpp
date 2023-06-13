#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    
    for (int row = 1; row <= 2 * n - 1; row++)
    {
        int totalcolumns = row > n ? 2 * n - row : row;
        int totalspaces = n - totalcolumns;
        
        for (int s = 1; s <= totalspaces; s++)
        {
            cout << " ";
        }
        
        for (int col = totalcolumns; col >= 1; col--)
        {
            cout << col;
        }
        
        for (int col = 2; col <= totalcolumns; col++)
        {
            cout << col;
        }
        
        cout << "\n";
    }
    
    return 0;
}

