#include <iostream>
#include <vector>


bool check(std::string x, std::string y, std::vector<long> r, long u){
    std::vector<bool> v(x.size(), true);
    for(long p = 0; p < u; p++){v[r[p]] = false;}
    std::string c("");
    for(long p = 0; p < x.size(); p++){if(v[p]){c += x[p];}}

    long q(0);
    for(long p = 0; p < c.size(); p++){
        if(c[p] == y[q]){++q;}
        if(q >= y.size()){break;}
    }

    return (q >= y.size());
}


int main(){
    std::ios_base::sync_with_stdio(false);
    std::string s, t; std::cin >> s >> t;
    long n = s.size();
    std::vector<long> a(n);
    for(long p = 0; p < s.size(); p++){std::cin >> a[p]; --a[p];}

    long left(0), right(a.size() - 1);
    while(left <= right){
        long mid = (left + right) / 2;
        if(check(s, t, a, mid)){left = mid + 1;}
        else{right = mid - 1;}
    }

    std::cout << (left - 1) << std::endl;

    return 0;
}
