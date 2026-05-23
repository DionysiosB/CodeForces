#include <iostream>
#include <vector>
#include <map>

int main(){

    const int64_t N = 26;
    std::vector<int64_t> v(N);
    for(int64_t p = 0; p < N; p++){std::cin >> v[p];}
    std::string s; std::cin >> s;

    std::vector<std::map<int64_t, int64_t> > a(N);

    int64_t sofar(0), total(0);
    for(int64_t p = 0; p < s.size(); p++){
        int64_t current = s[p] - 'a';
        if(a[current].count(sofar) > 0){total += a[current][sofar];}
        sofar += v[current];
        if(a[current].count(sofar) > 0){++a[current][sofar];}
        else{a[current][sofar] = 1;}
    }

    std::cout << total << std::endl;

    return 0;
}
