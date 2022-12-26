#include <cstdio>

int main(){

    const int N = 10;
    long n; scanf("%ld\n", &n);
    int action[N]; for(int p = 0; p < N; p++){action[p] = -1;}
    while(n--){
        char x; int u; scanf("%c %d\n", &x, &u);
        for(int p = 0; p < N; p++){
            bool v = u & 1;
            if(x == '&' && !v){action[p] = 0;}
            else if(x == '|' && v){action[p] = 1;}
            else if(x == '^' && v){action[p] = 1 - action[p];}
            u /= 2;
        }
    }

    int andint(0); for(int p = N - 1; p >= 0; p--){andint *= 2; andint += 1 - (action[p] == 0);}
    int orint(0); for(int p = N - 1; p >= 0; p--){orint *= 2; orint += (action[p] == 1);}
    int xorint(0); for(int p = N - 1; p >= 0; p--){xorint *= 2; xorint += (action[p] == 2);}
    printf("3\n& %d\n| %d\n^ %d\n", andint, orint, xorint);

    return 0;
}
