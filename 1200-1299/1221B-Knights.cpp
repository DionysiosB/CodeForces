#include <cstdio>
#include <vector>
 
int main(){
    
    long n; scanf("%ld", &n);
    for(long row = 0; row < n; row++){
        for(long col = 0; col < n; col++){putchar((row + col) % 2 ? 'W' : 'B');}
        puts("");
    }
    
    return 0;
}
