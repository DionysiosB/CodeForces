#include <cstdio>
#include <vector>

int main(){

    long n; scanf("%ld\n", &n);
    std::vector<long> array(n, 0);

    for(int p = 0; p < n; p++){scanf("%ld ", &array[p]);}


    bool down = 0, possible = 1;
    long moves(0);
    for(int p = 1; p < n; p++){
        if(array[p - 1] <= array[p]){continue;}
        if(down){possible = 0; break;}
        down = 1;
        moves = n - p;
        if(array[p] > array[0]){possible = 0; break;}
    }

    if(down && array[n - 1] > array[0]){possible = 0;}

    if(!possible){puts("-1");}
    else{printf("%ld\n", moves);}

    return 0;
}
