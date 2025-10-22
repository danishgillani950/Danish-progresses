#include <iostream>
using namespace std;
int main() 
{
    int h, x, y;
    cin >> h >> x >> y;
    bool inside1 = (x > 0 && x < 3 * h && y > 0 && y < h);
    bool inside2 = (x > h && x < 2 * h && y > h && y < 4 * h);
    bool border1 = (x >= 0 && x <= 3 * h && (y == 0 || y == h)) || (y >= 0 && y <= h && (x == 0 || x == 3 * h));
    bool border2 = (x >= h && x <= 2 * h && (y == h || y == 4 * h)) ||(y >= h && y <= 4 * h && (x == h || x == 2 * h));
    if (inside1 || inside2) cout << "inside";
    else if (border1 || border2) cout << "border";
    else cout << "outside";
    return 0;
}