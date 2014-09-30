#include <cstdio>

int dist(int x, int y){return (x < y) ? (y - x) : (x - y);}

int main(){

    int first(0), second(0); scanf("%d %d", &first, &second);
    int left(0), equal(0), right(0);
    for(int k = 1; k <= 6; k++){
        if(dist(k, first) < dist(k, second)){++left;}
        else if(dist(k, first) == dist(k, second)){++equal;}
        else if(dist(k, first) > dist(k, second)){++right;}
    }

    printf("%d %d %d\n", left, equal, right);

    return 0;
}
