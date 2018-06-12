#include <iostream>
#include <set>

bool lucky(long x){
    const long S = 2;
    std::set<long> s;
    if(x < 0){return false;}
    while(x > 0){s.insert(x % 10); x /= 10;}
    return (s.size() <= S);
}


void dfs(long n, long N, long &count){

    if(n > N || !lucky(n)){return;}
    ++count;
    for(int p = 0; p <= 9; p++){
        if(n == 0 && p == 0){continue;}
        dfs(10 * n + p, N, count);}
    return;
}


int main(){

    long u; std::cin >> u;
    long total(0);
    dfs(0, u, total);
    --total;  //For zero;
    std::cout << total << std::endl;

    return 0;
}
