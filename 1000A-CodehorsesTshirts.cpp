#include <iostream>
#include <map>

int main(){

    std::ios_base::sync_with_stdio(false);
    long n; std::cin >> n;
    std::map<std::string, long> a,b;
    for(long p = 0; p < n; p++){std::string x; std::cin >> x; ++a[x];}
    for(long p = 0; p < n; p++){std::string x; std::cin >> x; ++b[x];}

    long chg(n);
    for(std::map<std::string, long>::iterator it = a.begin(); it != a.end(); it++){
        long u = it->second;
        long v = b.count(it->first) ? b[it->first] : 0;
        if(b.count(it->first)){chg -= (u < v) ? u : v;}
    }

    std::cout << chg << std::endl;

    return 0;
}
