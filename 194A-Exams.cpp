#include <cstdio>

int main(){
   int n, k;  scanf("%d %d", &n, &k);
   printf("%d\n", (k > 3 * n) ? 0 : 3 * n - k);
   return 0;
}
