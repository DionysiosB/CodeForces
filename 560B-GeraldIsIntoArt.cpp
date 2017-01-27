#include <cstdio>

int main(){

    int x, y, a, b, c, d; scanf("%d %d\n%d %d\n%d %d\n", &x, &y, &a, &b, &c, &d);

    bool possible(0);

    if(a + c <= x && b <= y && d <= y){possible = 1;}
    if(a + d <= x && b <= y && c <= y){possible = 1;}
    if(b + c <= x && a <= y && d <= y){possible = 1;}
    if(b + d <= x && a <= y && c <= y){possible = 1;}

    if(a + c <= y && b <= x && d <= x){possible = 1;}
    if(a + d <= y && b <= x && c <= x){possible = 1;}
    if(b + c <= y && a <= x && d <= x){possible = 1;}
    if(b + d <= y && a <= x && c <= x){possible = 1;}

    puts(possible ? "YES" : "NO");


    return 0;
}
