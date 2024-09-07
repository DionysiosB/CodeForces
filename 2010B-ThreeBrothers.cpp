#include <cstdio>

int main(){
    int x, y; scanf("%d %d", &x, &y);
    if(x > y){int z = x; x = y; y = z;}
    if(x == 1 && y == 2){puts("3");}
    else if(x == 1 && y == 3){puts("2");}
    else if(x == 2 && y == 3){puts("1");}
    else{puts("ERROR");}
}
