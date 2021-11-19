#include <iostream>

using namespace std;

void alarmSet(int h, int m)
{
    int modH = h, modM = m;
    if (m < 45)
    {
        if (h == 0)
        {
            modH = 24 + (h - 1);
        }
        else
        {
            modH = h - 1;
        }
        modM = 60 + (m - 45);
    }
    else
    {
        modM = m - 45;
    }
    cout << modH << " " << modM;
}

int main()
{
    int H, M;

    cin >> H >> M;

    alarmSet(H, M);

    return 0;
}