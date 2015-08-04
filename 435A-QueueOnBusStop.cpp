#include <cstdio>

int main(){

    int n, m; scanf("%d %d\n", &n, &m);

    int people(0), total(1);
    for(int p = 0; p < n; p++){
        int group(0); scanf("%d", &group);
        if(people + group <= m){people += group;}
        else{++total; people = group;}
    }

    printf("%d\n", total); 

    return 0;
}
