#include <cstdio>
#include <cmath>

int main(){

    long n(0); scanf("%ld", &n);
    long upperBound = sqrt(2 * n);
    long *funky = new long[upperBound + 1];
    for(long k = 0; k <= upperBound; k++){funky[k] = k * (k + 1) / 2;}

    bool found(0); 
    int lowerIndex(1), upperIndex(upperBound);
    while(lowerIndex <= upperIndex){
        if(funky[lowerIndex] + funky[upperIndex] == n){found = 1; break;}
        else if(funky[lowerIndex] + funky[upperIndex] < n){++lowerIndex;}
        else if(funky[lowerIndex] + funky[upperIndex] > n){--upperIndex;}
    }

    if(found){puts("YES");} else{puts("NO");}
    return 0;
}
