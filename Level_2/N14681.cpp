#include <iostream>

using namespace std;

void Quadrant(int x, int y)
{
    if (x > 0 && y > 0)
    {
        cout << 1;
    }
    else if (x > 0 && y < 0)
    {
        cout << 4;
    }
    else if (x < 0 && y < 0)
    {
        cout << 3;
    }
    else if (x < 0 && y > 0)
    {
        cout << 2;
    }
}

int main()
{
    int x, y = 0;

    cin >> x;
    cin >> y;

    Quadrant(x, y);

    return 0;
}