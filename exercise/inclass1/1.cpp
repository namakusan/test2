#include <iostream>
#include <cmath>
using namespace std;

struct Point{
    int x, y;

    double calculateDistance(Point p1, Point p2){
        int dx = p2.x - p1.x;
        int dy = p2.y - p1.y;
        return sqrt(dx * dx + dy * dy);
    }
}

int main(){
    Point A, B;

    cin >> A.x >> A.y;
    cin >> B.x >> A.y;

    double dist = calculateDistance(A, B);
    cout << dist;
}