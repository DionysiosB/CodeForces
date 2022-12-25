#include <cstdio>
#include <vector>

int main(){

    int n(0), a(0), b(0); scanf("%d %d %d", &n, &a, &b);
    std::vector<int> apples(n + 1, 2);   //When initializing to 2, we can skip the last line. 

    for(int k = 0; k < a; k++){int temp(0); scanf("%d", &temp); apples[temp] = 1;}
    for(int k = 0; k < b; k++){int temp(0); scanf("%d", &temp); apples[temp] = 2;}
    for(int k = 1; k <= n; k++){printf("%d ", apples[k]);}
    puts("");

    return 0;
}
