#include <cstdio>
#include <cstdlib>

int main(){

    int n; scanf("%d\n", &n);
    int * heights = new int[n];
    for(int k = 0; k < n; k++){scanf("%d", heights + k);}

    int absDiff(abs(heights[0] - heights[n - 1])), index(n - 1);
    for(int k = 0; k < n - 1 ; k++){if(abs(heights[k] - heights[k + 1]) < absDiff){absDiff = abs(heights[k] - heights[k + 1]); index = k;}}
    printf("%d %d\n", 1 + index, 1 + (index + 1)%n ); 
    return 0;
}
