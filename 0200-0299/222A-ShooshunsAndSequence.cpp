#include <cstdio>

int main(){
    long n, k; scanf("%ld %ld", &n, &k);
    long *array = new long[n + 1];
    for(long p = 1; p <= n; p++){scanf("%ld", array + p);}

    long output = n, target = array[k];
    for(long p = n; p > 0; p--){
        if(array[p] == target){--output;}
        else{break;}
    }
    if(output >= k){output = -1;}
    printf("%ld\n", output);
    return 0;
}
