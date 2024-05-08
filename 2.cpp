#include <iostream>
using namespace std;
int main()
{
    int n = 4;
    int row = 1;
    while (row <= n)
    {
        int col = 1;
        while (col <= n)
        {
            cout << row<<" ";
            col++;
        }
        cout << endl;
        row++;
    }
}