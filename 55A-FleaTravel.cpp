#include <cstdio>
#include <vector>

int main(){

    int n; scanf("%d\n", &n);
    std::vector<int> present(n, 0); present[0] = 1;

    int pos(0);
    for(int p = 1; p <= 2 * n; p++){pos += p; pos %= n; present[pos] = 1;}

    bool possible(1);
    for(int p = 0; p < n; p++){if(present[p] == 0){possible = 0; break;}}
    puts(possible ? "YES" : "NO");

    return 0;
}
