#include <cstdio>
#include <vector>


int main(){

    int n; scanf("%d\n", &n);
    std::vector<bool> horizontal(n);
    std::vector<bool> vertical(n);

    for(int p = 0; p < n * n; p++){
        int x, y; scanf("%d %d\n", &x, &y);
        if(!horizontal[x - 1] && !vertical[y - 1]){
            printf("%d ", 1 + p); 
            horizontal[x - 1] = true; 
            vertical[y - 1] = true;
        }
    }
    puts("");

    return 0;
}
