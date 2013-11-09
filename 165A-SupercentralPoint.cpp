#include <cstdio>
#include <vector>

#include <iostream>
using namespace std;

int main(){
    int n; scanf("%d", &n);
    vector<pair<int,int>> points; 

    int X = 0, Y = 0;
    for(int k = 0; k < n; k++){
        scanf("%d %d", &X, &Y);
        points.push_back(pair<int,int>(X,Y));
    }

    bool neighbors[4] = {0,0,0,0};
    int central = 0;

    for(int a = 0; a < n; a++){
        X = points[a].first;
        Y = points[a].second;
        neighbors[0] = neighbors[1] = neighbors[2] = neighbors[3] = 0;

        for(int b = 0; b < n; b++){
            if(b == a){continue;}
            if     (points[b].first == X && points[b].second <  Y){neighbors[0] = 1;}
            else if(points[b].first == X && points[b].second >  Y){neighbors[1] = 1;}
            else if(points[b].first <  X && points[b].second == Y){neighbors[2] = 1;}
            else if(points[b].first >  X && points[b].second == Y){neighbors[3] = 1;}
            if(neighbors[0] && neighbors[1] && neighbors[2] && neighbors[3]){++central; break;}
        }
    }

    printf("%d\n", central);
    return 0;
}
