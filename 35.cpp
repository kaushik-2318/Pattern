#include <iostream>
using namespace std;
int main()
{
    int n = 4;
    int row = 1;
    while (row <= n)
    {
        int col = 1;
        while (col <= row)
        {
            char ch = n - row + 1;
            cout << ch << " ";
            col++;
        }
        cout << endl;
        row++;
    }
}