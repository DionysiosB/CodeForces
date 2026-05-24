#include <iostream>
#include <vector>

long long gcd (long long a, long long b){return (b == 0) ? a : gcd (b, a%b);}

int main(){

    std::ios_base::sync_with_stdio(false);
    int n; std::cin >> n;
    std::vector<int> crush(n + 1, 0);
    std::vector<bool> in(n + 1, 0);
    for(int p = 1; p <= n; p++){
        int a; std::cin >> a;
        crush[p] = a;
        in[a] = 1;
    }

    bool possible(true);
    for(int p = 1; p <= n; p++){possible &= in[p];}
    if(!possible){std::cout << "-1" << std::endl; return 0;}

    std::vector<int> len;
    for(int p = 1; p <= n; p++){
        if(in[p] == 0){continue;}
        int start = p;
        int t(0);
        do{p = crush[p]; in[p] = 0; ++t;}while(p != start);
        len.push_back((t % 2) ? t : (t / 2));
    }

    long long lcm = len[0];
    for(int p = 1; p < len.size(); p++){
        long long u = lcm * len[p];
        long long v = gcd(lcm , len[p]);
        lcm = u / v;
    }

    std::cout << lcm << std::endl;

    return 0;
}
