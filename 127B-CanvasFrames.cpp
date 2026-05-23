#include <cstdio>

int main(){
    const int LIMIT = 100;
    int numSticks; scanf("%d", &numSticks);

    int array[LIMIT + 1] = {0};
    int temp(0), total(0);

    for(int k = 0; k < numSticks; k++){scanf("%d", &temp); ++array[temp];}
    for(int k = 0; k <= LIMIT; k++){ total += array[k] / 2;}
    total /= 2;
    printf("%d\n", total);

    return 0;
}
