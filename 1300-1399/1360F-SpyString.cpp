#include <iostream>
#include <vector>
 
bool check(std::string x, std::string y){
    if(x.size() != y.size()){return false;}
    long cnt(0);
    for(long p = 0; p < x.size(); p++){
        cnt += (x[p] != y[p]);
        if(cnt > 1){return false;}
    }
 
    return true;
}
 
 
int main(){
 
    long t; std::cin >> t;
    while(t--){
        long n, m; std::cin >> n >> m;
        std::vector<std::string> a(n); for(long p = 0; p < n; p++){std::cin >> a[p];}
        std::string res("-1");
        for(long p = 0; p < m; p++){
            if(res[0] != '-'){break;}
            std::string tst = a[0];
            for(char c = 'a'; c <= 'c'; c++){
                tst= a[0]; tst[p] = c;
                for(long u = 1; u < n; u++){if(!check(a[u], tst)){tst = "-1"; break;}}
                if(tst[0] != '-'){res = tst; break;}
            }
        }
 
        std::cout << res << std::endl;
    }
 
    return 0;
}
