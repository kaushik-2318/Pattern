#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    int row = 1;
    while (row <= n)
    {
        int col = 1;
        while (col <= n - row + 1)
        {
            cout << col << "  ";
            col++;
        }
        int star = 1;
        while (star <= (row - 1) * 2)
        {
            cout << "*" << "  ";
            star++;
        }
        int toprint = n - row + 1;
        while (toprint >= 1)
        {
            cout << toprint << "  ";
            toprint--;
        }
        cout << endl;
        row++;
    }
}