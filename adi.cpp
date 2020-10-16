#include <iostream>

using namespace std;

int main()
{
    int n, ma = 0, mi = 0;
    cin >> n;
    int m[n];
    for (int i = 0; i < n; i++)
    {
        cin >> m[i];
        if (m[i] > m[ma])
            ma = i;
        if (m[i] <= m[mi])
            mi = i;
    }
    cout << ma + n - mi - 1 - (mi < ma);

    return 0;
}