#include <cstdio>
#include <vector>

int main(){

    long n, b, a; scanf("%ld %ld %ld", &n, &b, &a);
    std::vector<int> s(n); for(long p = 0; p < n; p++){scanf("%d", &s[p]);}

    long x(a), pos(0);
    for(long p = 0; p < n; p++){
        if(s[p]){
            if(b > 0 && x < a){--b; ++x;}
            else if(x > 0){--x;}
            else if(b > 0){--b;}
            else{break;}
        }
        else{
            if(x > 0){--x;}
            else if(b > 0){--b;}
            else{break;}
        }

        pos = p + 1;
    }

    printf("%ld\n", pos);

    return 0;
}
