#include <iostream>
using namespace std;
int main()
{
    int n = 4;
    int row = 1;
    int count = 1;
    while (row <= n)
    {
        int space = n - row;
        while (space >= 1)
        {
            cout << " " << " ";
            space--;
        }
        int col = 1;
        while (col <= row)
        {
            cout << count << " ";
            count++;
            col++;
        }

        cout << endl;
        row++;
    }
}