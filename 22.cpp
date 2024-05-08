// #include <iostream>
// using namespace std;
// int main()
// {
//     int n = 4;
//     int row = 1;
//     while (row <= n)
//     {        
//         int col = n;
//         while (col >= row)
//         {
//             cout << "*"<<" ";
//             col--;
//         }
//         cout << endl;
//         row++;
//     }
// }

#include <iostream>
using namespace std;
int main()
{
    int n = 4;
    int row = 1;
    while (row <= n)
    {        
        int col = 1;
        while (col <= n - row +1)
        {
            cout << "*"<<" ";
            col++;
        }
        cout << endl;
        row++;
    }
}
