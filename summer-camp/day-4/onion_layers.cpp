#include <bits/stdc++.h>
using namespace std;

struct point {
    long long x, y;

    bool operator < (const point & p) const {
        return x < p.x || (x == p.x && y < p.y);
    }
    bool operator == (const point & o) const {
        return x == o.x && y == o.y;
    }
};

vector <point> points;

bool cmp(point a, point b) {
    return a.x < b.x || (a.x == b.x && a.y < b.y);
}

bool cw(point a, point b, point c) {
    return a.x * (b.y - c.y) + b.x * (c.y - a.y) + c.x * (a.y - b.y) <= 0;
}

bool ccw(point a, point b, point c) {
    return a.x * (b.y - c.y) + b.x * (c.y - a.y) + c.x * (a.y - b.y) >= 0;
}

vector <point> convex_hull(vector <point>& a) {
    vector <point> visited;

    if (a.size() == 1)
        return visited;

    sort(a.begin(), a.end(), & cmp);
    point p1 = a[0], p2 = a.back();

    vector <point> up, down;
    up.push_back(p1);
    down.push_back(p1);

    for (int i = 1; i < (int) a.size(); i++) {
        if (i == a.size() - 1 || cw(p1, a[i], p2)) {
            while (up.size() >= 2 && !cw(up[up.size() - 2], up[up.size() - 1], a[i]))
                up.pop_back();

            up.push_back(a[i]);
        }

        if (i == a.size() - 1 || ccw(p1, a[i], p2)) {
            while (down.size() >= 2 && !ccw(down[down.size() - 2], down[down.size() - 1], a[i]))
                down.pop_back();

            down.push_back(a[i]);
        }
    }

    for (int i = 0; i < (int) up.size(); i++)
        visited.push_back(up[i]);
    for (int i = down.size() - 2; i > 0; i--)
        visited.push_back(down[i]);

    return visited;
}

int main() {

    int n;
    while (scanf("%d", &n), n != 0) {

        for (int i = 0; i < n; i++) {
            point a;
            cin >> a.x >> a.y;

            points.push_back(a);
        }

        long long ans = 0;

        while (points.size() >= 3) {
            ans++;
            vector <point> visited = convex_hull(points);
            set <point> seen;

            for (auto & i: visited) {
                seen.insert(i);
            }

            vector <point> new_points;
            for (auto & i: points) {
                if (!seen.count(i)) new_points.push_back(i);
            }

            points = new_points;
        }

        cout << (ans & 1 ? "Take this onion to the lab!" : "Do not take this onion to the lab!") << endl;
        points.clear();
    }
}
