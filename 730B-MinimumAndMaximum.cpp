#include <cstdio>

int main(){

    int t; scanf("%d", &t);
    while(t--){
        int n; scanf("%d", &n);
        if(n == 1){puts("! 1 1"); fflush(stdout); continue;}

        int min(1), max(2), pairMin(0), pairMax(0); char ch;

        puts("? 1 2"); fflush(stdout); getchar();
        ch = getchar(); if(ch == '>'){min = 2; max = 1;}

        for(int p = 3; p <= n - 1; p += 2){
            pairMin = p; pairMax = p + 1;
            printf("? %d %d\n", p , p + 1); fflush(stdout); getchar();
            ch = getchar(); if(ch == '>'){pairMin = p + 1; pairMax = p;}

            printf("? %d %d\n", min, pairMin); fflush(stdout); getchar();
            ch = getchar(); if(ch == '>'){min = pairMin;}

            printf("? %d %d\n", pairMax, max); fflush(stdout); getchar();
            ch = getchar(); if(ch == '>'){max = pairMax;}
        }

        if(n % 2){
            printf("? %d %d\n", n, min); fflush(stdout); getchar();
            ch = getchar(); if(ch == '<'){min = n;}
            printf("? %d %d\n", n, max); fflush(stdout); getchar();
            ch = getchar(); if(ch == '>'){max = n;}
        }

        printf("! %d %d\n", min, max);
    }

    return 0;
}
