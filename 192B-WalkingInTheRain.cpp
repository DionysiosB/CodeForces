#include <cstdio>

int main(){

    int n(0); scanf("%d", &n);

    int first(0); scanf("%d", &first);
    int second(first);

    int minSoFar(first);
    for(int k = 1; k < n; k++){
        scanf("%d", &second);
        int current = (first > second) ? first : second;
        if(current < minSoFar){minSoFar = current;}
        first = second;
    }
    if(second < minSoFar){minSoFar = second;}

    printf("%d\n", minSoFar);

    return 0;
}
