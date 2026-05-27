#include <iostream>
#include <vector>

int main(){

    const int N = 8;

    long t; std::cin >> t;
    while(t--){
        std::vector<std::string> b(N);
        long row(0), col(0);
        for(long p = 0; p < N; p++){std::cin >> b[p];}
        for(long p = 1; p + 1 < N; p++){
            for(long q = 1; q + 1 < N; q++){
                if(b[p][q] != '#'){continue;}
                if(b[p + 1][q + 1] != '#'){continue;}
                if(b[p + 1][q - 1] != '#'){continue;}
                if(b[p - 1][q + 1] != '#'){continue;}
                if(b[p - 1][q - 1] != '#'){continue;}
                row = p + 1; col = q + 1;
            }
        }

        printf("%ld %ld\n", row, col);
    }
}
