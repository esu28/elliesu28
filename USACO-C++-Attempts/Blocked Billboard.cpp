// Source: https://usaco.org/index.php?page=viewproblem2&cpid=759

#include <bits/stdc++.h>
using namespace std;

int main() {
    int x_1, y_1, x_2, y_2;
    cin >> x_1 >> y_1 >> x_2 >> y_2;

    int x_3, y_3, x_4, y_4;
    cin >> x_3>> y_3 >> x_4 >> y_4;

    int x_5, y_5, x_6, y_6;
    cin >> x_5 >> y_5 >> x_6 >> y_6;

    int width_overlap1 = max(0, min(x_2,x_6) - max(x_1,x_5));
    int height_overlap1 = max(0, min(y_2,y_6) - max(y_1, y_5));

    int width_overlap2 = max(0, min(x_4,x_6) - max(x_3,x_5));
    int height_overlap2 = max(0, min(y_4,y_6) - max(y_3, y_5));

    int overlap = width_overlap1*height_overlap1 + width_overlap2*height_overlap2;

    int Area1 = (x_2-x_1)*(y_2-y_1);
    int Area2 = (x_4-x_3)*(y_4-y_3);

    int ans = Area1 + Area2 - overlap;

    cout << ans <<endl;
}
