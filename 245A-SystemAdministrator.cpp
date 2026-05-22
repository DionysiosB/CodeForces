#include <cstdio>

int main(){

    int n; scanf("%d\n", &n);

    const int numServers = 2; 
    int array[numServers + 1][2] = {0};
    int server(0),found(0), lost(0);

    while(n--){
        scanf("%d %d %d\n", &server, &found, &lost);
        array[server][0] += found;
        array[server][1] += lost;
    }

    for(int k = 1; k <= numServers; k++){array[k][0] >= array[k][1] ? puts("LIVE") : puts("DEAD");}

    return 0;
}
