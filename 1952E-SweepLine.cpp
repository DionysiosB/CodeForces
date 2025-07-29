#include <cstdio>
#include <algorithm>

int main() {

    long n; scanf("%ld", &n);
    std::pair<int, int> cur(1, 0), nxt(1, 1);

    for(int p = 0; p < n; p++) {
        int x; scanf("%d", &x);
        if(x == 0){cur.second = 0;}
        else if(x == 1){std::swap(cur.first, cur.second);}
        else if(x == 2){cur.first = 0;}
        std::swap(cur, nxt);
    }

    printf("%d\n", (cur.first + cur.second) * nxt.first);
}
