#include <cstdio>
#include <vector>

int main(){

    int n, m; scanf("%d %d\n", &n, &m);
    std::vector<bool> boys(n, 0), girls(m, 0);

    int f, temp; 
    scanf("%d", &f); for(int p = 0; p < f; p++){scanf("%d", &temp); boys[temp] = 1;}
    scanf("%d", &f); for(int p = 0; p < f; p++){scanf("%d", &temp); girls[temp] = 1;}

    long day(0);
    for(long p = 0; p < m * m * n * n; p++){boys[p % n] = girls[p % m] = boys[p % n] | girls[p % m];}

    for(int p = 0; p < n; p++){if(!boys[p]){puts("No"); return 0;}}
    for(int p = 0; p < m; p++){if(!girls[p]){puts("No"); return 0;}}
    puts("Yes");

    return 0;
}
