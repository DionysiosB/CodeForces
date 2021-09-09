#include<cstdio>

int main(){

    long t; scanf("%ld",&t);
    while(t--){
        long c, d; scanf("%ld %ld", &c, &d);
        if(c == d){puts(c == 0 ? "0" : "1");}
        else{puts((c - d) % 2 == 0 ? "2" : "-1");}
    }

}
