#include <cstdio>
#include <vector>

int main(){

    int a, b, c; scanf("%d %d %d\n", &a, &b, &c);
    std::vector<bool> possible(c + 1, 0);
    possible[0] = 1;
    for(int p = 0; p <= c; p++){
        if(!possible[p]){continue;}
        if(p + a <= c){possible[p + a] = 1;}
        if(p + b <= c){possible[p + b] = 1;}
    }

    puts(possible[c] ? "Yes" : "No");

    return 0;
}
