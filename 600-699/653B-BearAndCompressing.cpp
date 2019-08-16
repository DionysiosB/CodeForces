#include <iostream>
#include <vector>
#include <map>


std::vector<int> getVec(int x, int len, int B){
    std::vector<int> v(len, 0);
    for(int p = 0; p < len; p++){v[p] = x % B; x /= B;}
    return v;
}

bool convert(std::vector<int> v, const std::vector<std::vector<int> > &m, int target){

    bool done(v.size() <= 1);
    while(!done){
        if(v.size() <= 1){break;}
        int a = v.size() - 1;
        int b = m[v[a]][v[a - 1]];
        if(b < 0){break;}
        v.pop_back(); v.pop_back(); v.push_back(b);
    }

    if(v.size() == 1 && v[0] == target){return true;}
    return false;
}


int main(){

    const int L = 6;
    int n, q; std::cin >> n >> q;
    std::vector<std::vector<int> > m(L, std::vector<int>(L, -1));
    while(q--){
        std::string key; char c; std::cin >> key >> c;
        m[key[0] - 'a'][key[1] - 'a'] = c - 'a';
    }

    long total(1); for(int p = 0; p < n; p++){total *= L;}
    long count(0);
    for(long p = 0; p < total; p++){
        std::vector<int> v = getVec(p, n, L);
        count += convert(v, m, 0);
    }

    std::cout << count << std::endl;

    return 0;
}
