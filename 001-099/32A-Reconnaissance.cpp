#include <cstdio>
#include <algorithm>

int main(){

    long n(0), d(0); scanf("%ld %ld", &n, &d);
    long * height = new long[n];
    for(int k = 0; k < n; k++){scanf("%ld", height + k);}
    std::sort(height, height + n);

    long total(0);
    for(int k = 0; k < n; k++){
        for(int m = k + 1; m < n; m++){
            if(height[m] <= height[k] + d){++total;}
            else{break;} 
        }
    }

    printf("%ld\n", 2 * total);

    delete[] height;
    return 0;
}
