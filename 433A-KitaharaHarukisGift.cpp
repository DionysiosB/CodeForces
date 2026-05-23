#include <cstdio>

int main(){

    int n; scanf("%d\n", &n);
    int ones(0), twos(0);
    for(int k = 0; k < n; k++){
        int weight; scanf("%d ", &weight);
        if(weight == 100){++ones;}
        else{++twos;}
    }

    bool possible(1);
    if(ones % 2 == 1){possible = 0;}
    else if(twos % 2 == 1 && ones < 2){possible = 0;}

    puts(possible ? "YES" : "NO");

    return 0;
}
