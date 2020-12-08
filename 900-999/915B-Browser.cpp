#include <cstdio>

int main(){

    long n, pos, l, r; scanf("%ld %ld %ld %ld", &n, &pos, &l, &r);
    long num(0);
    if(l > 1 && r < n){
        if(pos <= l){num = (r - pos) + 2;}
        else if(r <= pos){num = (pos - l) + 2;}
        else if(pos - l <= r - pos){num = (pos - l) + (r - l) + 2;}
        else if(pos - l >= r - pos){num = (r - pos) + (r - l) + 2;} 
    }
    else if(l == 1 && r < n){
        if(pos <= r){num = (r - pos) + 1;}
        else{num = (pos - r) + 1;}
    }
    else if(l > 1 && r == n){
        if(pos < l){num = (l - pos) + 1;}
        else{num = (pos - l) + 1;}
    }

    printf("%ld\n", num);

    return 0;
}
