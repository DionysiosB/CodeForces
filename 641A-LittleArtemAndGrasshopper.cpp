#include<cstdio>
#include<iostream>
#include<vector>

int main(){

    int n; std::cin >> n;
    std::string dir; std::cin >> dir;
    std::vector<long> next(n);
    for(long p = 0; p < n; p++){
        int x; std::cin >> x;
        next[p] = x * ((dir[p] == '<') ? (-1) : 1);
    }

    std::vector<bool> visited(n, 0);
    long pos(0); 
    bool finite(false);
    while(true){
        if(pos < 0 || pos >= n){finite = true; break;}
        if(visited[pos]){finite = false; break;}
        visited[pos] = true;
        pos += next[pos];
    }

    puts(finite ? "FINITE" : "INFINITE");

    return 0;
}
