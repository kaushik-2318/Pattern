#include <iostream>
using namespace std;
int main()
{
    int n = 3;
    int row = 1;
    int count = 1;
    while (row <= n)
    {
        int col = 1;
        while (col <= n)
        {
            cout << count << " ";
            count++;
            col++;
        }
        cout << endl;
        row++;
    }
}