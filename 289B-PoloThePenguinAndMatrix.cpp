#include <cstdio>
#include <cstdlib>
#include <algorithm>

int main(){

    int n(0), m(0), d(0); scanf("%d %d %d", &n, &m, &d);
    int *array = new int[n * m];

    bool possible(1);
    int currentMod(-1);
    for(int k = 0; k < n * m; k++){
        scanf("%d", array + k); 
        if(currentMod < 0){currentMod = array[k] % d;}
        if(array[k] % d != currentMod){possible = 0; break;}
    }

    if(possible){
        std::sort(array, array + n * m);
        int median = array[n * m / 2];
        long total(0);
        for(int k = 0; k < m * n; k++){total += abs(array[k] - median) / d;}
        printf("%ld\n", total);
    }
    else{puts("-1");}

    return 0;
}
