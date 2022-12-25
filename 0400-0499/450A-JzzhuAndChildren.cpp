#include <cstdio>

int main(){


    int n, m; scanf("%d %d\n", &n, &m);

    int currentMax(0), lastChild(0);
    for(int p = 1; p <= n; p++){
        int need; scanf("%d", &need);
        int temp = (need / m) + ((need % m) > 0);
        if(temp >= currentMax){currentMax = temp; lastChild = p;}
    }

    printf("%d\n", lastChild);

    return 0;
}
