#include <cstdio>
#include <vector>
#include <algorithm>

struct point{
    int pos;
    int x;
    int color;
};

bool pointComparePos(point A, point B){return A.pos < B.pos;}
bool pointCompareX(point A, point B){return A.x < B.x;}

int main(){

    int n, m; scanf("%d %d", &n, &m);

    point dummyPoint; dummyPoint.pos = 0; dummyPoint.x = 0; dummyPoint.color = 0;
    std::vector<point> pointVec(n, dummyPoint);

    for(int p = 0; p < n; p++){pointVec[p].pos = p; scanf("%d", &pointVec[p].x);}
    sort(pointVec.begin(), pointVec.end(), pointCompareX);

    for(int p = 0; p < n; p++){pointVec[p].color = p % 2;}
    sort(pointVec.begin(), pointVec.end(), pointComparePos);

    for(int p = 0; p < n; p++){printf("%d ", pointVec[p].color);}
    puts("");


    return 0;
}
