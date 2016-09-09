#include <cstdio>
#include <vector>

int main(){

    int n; double b; scanf("%d %lf", &n, &b);
    std::vector<double> drink(n, 0);
    for(int p = 0; p < n; p++){scanf("%lf\n", &drink[p]); b += drink[p];}
    double eq = b / n; bool possible = 1;
    for(int p = 0; p < n; p++){
        if(drink[p] > eq){possible = 0; break;}
        drink[p] = eq - drink[p];
    }

    if(possible){for(int p = 0; p < n; p++){printf("%.6lf\n", drink[p]);};}
    else{puts("-1");}

    return 0;
}
