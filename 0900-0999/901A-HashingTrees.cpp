#include<cstdio>
#include<vector>

int main(){

    const int N = 200007;
    std::vector<std::vector<long> > fa(N, std::vector<long>(2, 0));

    long l(1), r(2);
    bool ambiguous(false);

    long h; scanf("%ld",&h);
    for(long p = 0; p <= h; p++){
        long a; scanf("%ld", &a);
        if(p == 0){continue;}

        if(r - l > 1 && a > 1){ambiguous = true;}
        for(long q = 0; q < a; q++){
            fa[r + q][0] = l;
            fa[r + q][1] = l + q % (r - l);
        }

        l = r; r += a;
    }

    if(ambiguous){
        puts("ambiguous");
        for(long p = 1; p < r; p++){printf("%ld ", fa[p][0]);}; puts("");
        for(long p = 1; p < r; p++){printf("%ld ", fa[p][1]);}; puts("");
    }
    else{puts("perfect");}

    return 0;
}
