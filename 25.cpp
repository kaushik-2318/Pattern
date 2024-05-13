#include <iostream>
using namespace std;
int main()
{
    int n = 3;
    int row = 1;
    while (row <= n)
    {
        int space = 0;
        while (space < row)
        {
            cout << " ";
            space++;
        }
        int col = 1;
        while (col <= n - row + 1)
        {
            cout << row;
            col++;
        }
        cout << endl;
        row++;
    }
}