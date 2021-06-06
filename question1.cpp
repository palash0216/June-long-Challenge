#include <iostream>
using namespace std;
int main()
{
    int t, x, y, X, Y;
    float A, B;
    cin >> t;
    while (t--)
    {
        cin >> x >> y >> X >> Y;
        A = X / x;
        B = Y / y;
        cout << A + B << endl;
    }
    return 0;
}