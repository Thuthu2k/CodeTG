#include <bits/stdc++.h>
using namespace std;

struct Point
{
    double x, y;
};

double distance(Point &A, Point &B)
{

    double ans = sqrt(double(B.y - A.y) * (B.y - A.y) + (B.x - A.x) * (B.x - A.x));
    return ans;
}

void input(Point &A)
{
    cin >> A.x >> A.y;
}

int main()
{
    struct Point A, B;
    int t;
    cin >> t;
    while (t--)
    {
        input(A);
        input(B);
//        cout << fixed << setprecision(4) << distance(A, B) << endl;
        // cout << A.x << " " << A.y << " " << B.x << " " << B.y << endl;
        printf("%.4f\n", distance(A, B));
    }
    return 0;
}
