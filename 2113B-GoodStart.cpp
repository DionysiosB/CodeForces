#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long w, h, a, b; scanf("%ld %ld %ld %ld", &w, &h, &a, &b);
        long x1, y1, x2, y2; scanf("%ld %ld %ld %ld", &x1, &y1, &x2, &y2);

        if(x1 == x2){puts( (y1 - y2) % b ? "No" : "Yes");}
        else if(y1 == y2){puts( (x1 - x2) % a ? "No" : "Yes");}
        else{puts( ((x1 - x2) % a) && ((y1 - y2) % b)   ? "No" : "Yes");}
    }

}
