#include <cstdio>
 
int main(){
    
    long q; scanf("%ld", &q);
    while(q--){
        long n; scanf("%ld", &n);
        long xmin(-1e5), xmax(1e5), ymin(-1e5), ymax(1e5);
        for(long p = 0; p < n; p++){
            long x, y, down, right, up, left; scanf("%ld %ld %ld %ld %ld %ld", &x, &y, &down, &right, &up, &left);
            if(!down){xmin = (xmin > x) ? xmin : x;}
            if(!up){xmax = (xmax < x) ? xmax : x;}
            if(!left){ymin = (ymin > y) ? ymin : y;}
            if(!right){ymax = (ymax < y) ? ymax : y;}
        }
        if((xmax < xmin) || (ymax < ymin)){puts("0");}
        else{printf("1 %ld %ld\n", (xmin + xmax) / 2 , (ymin + ymax) / 2);}
    }
    
    return 0;
}
