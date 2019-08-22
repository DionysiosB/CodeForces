#include <cstdio>
#include <vector>

int main(){

    const long N = 2e5 + 7;
    long q; scanf("%ld\n", &q);
    std::vector<long> pos(N, 0);
    char t; long id; scanf("%c %ld\n", &t, &id);
    pos[id] = 0;
    long left(-1), right(1);
    while(--q){
        scanf("%c %ld\n", &t, &id);
        if(t == 'L'){pos[id] = left--;}
        else if(t == 'R'){pos[id] = right++;}
        else if(t == '?'){
            long tl = -1 + pos[id] - left;
            long tr = -1 + right - pos[id];
            printf("%ld\n", (tl < tr) ? tl : tr);
        }
    }

    return 0;
}
