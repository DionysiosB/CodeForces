#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    long n(0); scanf("%ld", &n);
    std::vector<long> array(n,0);

    for(int k = 0; k < n; k++){scanf("%ld", &array[k]);}
    std::sort(array.begin(), array.end());

    if(n == 1){puts("-1");}
    else if(array[0] == array[n - 1]){printf("1\n%ld\n", array[0]);}
    else if(n == 2){
        long diff = (array[1] - array[0]);
        if(diff % 2 == 0){puts("3");} else{puts("2");}
        printf("%ld ", 2 * array[0] - array[1]);
        if(diff % 2 == 0){printf("%ld ", (array[1] + array[0]) / 2);}
        printf("%ld ", 2 * array[1] - array[0]);
    }
    else if(n == 3){
        long firstDiff = array[1] - array[0];
        long secondDiff = array[2] - array[1];
        if(firstDiff == secondDiff){printf("2\n%ld %ld\n", array[0] - firstDiff, array[2] + firstDiff);}
        else if(firstDiff == 2 * secondDiff){printf("1\n%ld\n", array[0] + secondDiff);}
        else if(secondDiff == 2 * firstDiff){printf("1\n%ld\n", array[1] + firstDiff);}
        else{puts("0");}
    }
    else if(n > 3){
        std::vector<long> diffs(n - 1,0);
        for(int k = 0; k < n - 1; k++){diffs[k] = array[k + 1] - array[k];}
        std::sort(diffs.begin(), diffs.end());
        if(diffs[0] == diffs[n - 2]){printf("2\n%ld %ld\n", array[0] - diffs[0], array[n - 1] + diffs[0]);}
        else if(diffs[0] == diffs[1] && diffs[0] == diffs[n - 3] && diffs[n - 2] == 2 * diffs[0]){
            puts("1");
            for(int k = 0; k < n - 1; k++){if(array[k + 1] > array[k] + diffs[0]){printf("%ld\n", array[k] + diffs[0]); break;}}
        }
        else if(diffs[n - 2] == diffs[n - 3] && diffs[1] == diffs[n - 2] && diffs[0] == 2 * diffs[n - 2]){
            puts("1");
            for(int k = 0; k < n - 1; k++){if(array[k + 1] > array[k] + diffs[1]){printf("%ld\n", array[k] + diffs[1]); break;}}
        }
        else{puts("0");}
    }

    return 0;
}
