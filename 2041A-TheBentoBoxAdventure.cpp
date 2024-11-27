#include <cstdio>

int main(){

    bool v[6] = {0};
    for(int p = 0; p < 4; p++){
        int x; scanf("%d", &x);
        v[x] = 1;
    }

    for(int p = 1; p <= 5; p++){if(!v[p]){printf("%d\n", p); break;}}

    return 0;

}
