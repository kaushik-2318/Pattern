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
            cout << n - col + 1 << " ";
            col++;
        }
        cout << endl;
        row++;
    }
}