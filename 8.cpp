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
            cout << row + col - 1 << " ";
            col++;
        }
        cout << endl;
        row++;
    }
}

#include <iostream>
using namespace std;
int main()
{
    int n = 4;
    int row = 1, count = 1;
    while (row <= n)
    {
        int col = 1;
        count = row;
        while (col <= row)
        {
            cout << count << " ";
            col++;
            count++;
        }
        cout << endl;
        row++;
    }
}

#include <iostream>
using namespace std;
int main()
{
    int n = 4;
    int row = 1;
    while (row <= n)
    {
        int col = row;
        while (col < row * 2)
        {
            cout << col << " ";
            col++;
        }
        cout << endl;
        row++;
    }
}