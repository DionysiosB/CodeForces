#include <cstdio>

int main(){

    const char array[7] = {'R','O','Y','G','B','I','V'};
    int n(0); scanf("%d", &n);
    for(int k = 0; k < 3; k++){printf("%c", array[k]);}
    for(int k = 3; k < n; k++){printf("%c", array[3 + k%4]);}
    puts("");
    
    return 0;
}
