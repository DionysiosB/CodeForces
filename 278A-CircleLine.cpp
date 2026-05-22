#include <cstdio>
#include <iostream>

int main(){
    int n; scanf("%d\n", &n);
    unsigned int *dist = new unsigned int[n + 1];
    for(int k = 1; k <= n ; k++){scanf("%u", dist + k);}

    int first, second; scanf("%d %d", &first, &second);
    int a = std::min(first, second), b = std::max(first, second);

    int oneWay = 0, orAnother = 0;
    for(int k = 1; k <= n; k++){
        if(k >= a && k < b){oneWay+= dist[k];}
        else{orAnother += dist[k];}
    }
    printf("%u", std::min(oneWay, orAnother));
    return 0;
}
