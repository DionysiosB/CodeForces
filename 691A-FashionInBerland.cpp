#include<cstdio>

int main(){

    int n; scanf("%d\n", &n);
    bool one(0);
    for(int p = 0; p < n; p++){
        int x; scanf("%d", &x);
        if(x == 1){continue;}
        if(one == 0){one = 1;}
        else{one = 0; break;}
    }

    puts( (( n == 1 && one == 0) || (n > 1 && one == 1)) ? "YES" : "NO");

    return 0;
}
