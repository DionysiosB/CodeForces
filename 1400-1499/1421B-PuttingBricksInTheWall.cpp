#include <iostream>
#include <vector>

int main(){

    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::vector<std::string> v(n);
        for(long p = 0; p < n; p++){std::cin >> v[p];}
        long a = (v[0][1] - '0');
        long b = (v[1][0] - '0');
        long c = (v[n - 2][n - 1] - '0');
        long d = (v[n - 1][n - 2] - '0');

        if(a == 0 && b == 0 && c == 0 && d == 0){printf("2\n1 2\n2 1\n");}
        if(a == 0 && b == 0 && c == 0 && d == 1){printf("1\n%ld %ld\n", n - 1, n);}
        if(a == 0 && b == 0 && c == 1 && d == 0){printf("1\n%ld %ld\n", n, n - 1);}
        if(a == 0 && b == 0 && c == 1 && d == 1){puts("0");}

        if(a == 0 && b == 1 && c == 0 && d == 0){printf("1\n1 2\n");}
        if(a == 0 && b == 1 && c == 0 && d == 1){printf("2\n1 2\n%ld %ld\n", n, n - 1);}
        if(a == 0 && b == 1 && c == 1 && d == 0){printf("2\n2 1\n%ld %ld\n", n, n - 1);}
        if(a == 0 && b == 1 && c == 1 && d == 1){printf("1\n2 1\n");}

        if(a == 1 && b == 0 && c == 0 && d == 0){printf("1\n2 1\n");}
        if(a == 1 && b == 0 && c == 0 && d == 1){printf("2\n2 1\n%ld %ld\n", n, n - 1);}
        if(a == 1 && b == 0 && c == 1 && d == 0){printf("2\n1 2\n%ld %ld\n", n, n - 1);}
        if(a == 1 && b == 0 && c == 1 && d == 1){printf("1\n1 2\n");}

        if(a == 1 && b == 1 && c == 0 && d == 0){puts("0");}
        if(a == 1 && b == 1 && c == 0 && d == 1){printf("1\n%ld %ld\n", n, n - 1);}
        if(a == 1 && b == 1 && c == 1 && d == 0){printf("1\n%ld %ld\n", n - 1, n);}
        if(a == 1 && b == 1 && c == 1 && d == 1){printf("2\n1 2\n2 1\n");}
    }

    return 0;
}
