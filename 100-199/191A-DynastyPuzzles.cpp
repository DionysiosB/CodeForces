#include <cstdio>
#include <cstring>
#include <algorithm>

int main(){

    const int N = 26;
    const int MAX_LENGTH = 12;
    long count[N][N] = {0};
    long n; scanf("%ld\n", &n);

    long ans(0);

    while(n--){
        char s[MAX_LENGTH]; scanf("%s\n", s);
        long length = strlen(s);
        long first = s[0] - 'a';
        long last = s[length - 1] - 'a';
        for(int p = 0; p < N; p++){
            if(count[p][first] <= 0){continue;}
            count[p][last] = std::max(count[p][last], count[p][first] + length);
        }

        count[first][last] = std::max(count[first][last], length);
        ans = std::max(ans, count[last][last]);
    }

    printf("%ld\n", ans);

    return 0;
}
