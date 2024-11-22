#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cout << "Enter the number of rows and columns: ";
    cin >> n >> m;

    int A[n][m];
    int B[n][m];

    cout << "Enter the elements of the first array:\n";

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> A[i][j];
        }
    }

    cout << "Enter the elements of the second array:\n";

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> B[i][j];
        }
    }

    cout << "The elements of the first array are:\n";

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }

    cout << "The elements of the second array are:\n";

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << B[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
