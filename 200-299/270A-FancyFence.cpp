#include <cstdio>

int main(){
    int n; scanf("%d", &n);
    int angle; 
    while(n--){
        scanf("%d", &angle);
        (360 % (180 - angle) == 0) ? printf("YES\n") : printf("NO\n");
    }
    return 0;
}
