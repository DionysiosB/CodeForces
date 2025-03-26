#include <cstdio>

int main(){

    int t; scanf("%d", &t);
    while(t--){
        int n; scanf("%d", &n);
        int zero(3), one(1), two(2), three(1), five(1);
        int idx(0);
        for(int p = 0; p < n; p++){
            int d; scanf("%d", &d);
            if(d == 0 && zero){--zero;}
            else if(d == 1 && one){--one;}
            else if(d == 2 && two){--two;}
            else if(d == 3 && three){--three;}
            else if(d == 5 && five){--five;}
            if(!idx && !zero && !one && !two && !three && !five){idx = p + 1;}
        }

        printf("%d\n", idx);
    }

}
