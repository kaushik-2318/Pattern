#include <iostream>
using namespace std;
int main()
{
    int n = 4;
    int row = 1;
    while (row <= n)
    {
        int space = n - row;
        while (space)
        {
            cout << "  ";
            space--;
        }

        int count = 1;
        int col = 1;
        while (col <= row)
        {
            cout << count<<" ";
            col++;
            count++;
        }
        int start = row - 1;
        while(start >= 1){
            cout<<start<<" ";
            start--;
        }
        cout << endl;
        row++;
    }
}