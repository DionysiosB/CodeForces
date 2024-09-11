#include <iostream>
#include <map>

int main(){

    std::map<long, long> msqrt;
    for(long p = 1; p <= 1000; p++){msqrt[p * p] = p;}



    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::string s; std::cin >> s;
        if(!msqrt.count(s.size())){puts("No"); continue;}

        long sz = msqrt[s.size()];
        bool possible(true);
        for(long row = 0; possible && row < sz; row++){
            for(long col = 0; possible && col < sz; col++){
                bool digit = (s[row * sz + col] == '1');
                bool edge  = (row == 0 || row == sz - 1 || col == 0 || col == sz - 1);
                if(edge ^ digit){possible = false;}
            }
        }

        puts(possible ? "Yes" : "No");
    }

}
