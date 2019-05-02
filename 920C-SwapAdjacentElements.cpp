#include <iostream>
#include <vector>
#include <set>

int main(){

    std::ios_base::sync_with_stdio(false);
    long n; std::cin >> n;
    std::vector<long> a(n + 1); for(long p = 1; p <= n; p++){std::cin >> a[p];}

    std::vector<long> f(n + 1, 0); for(long p = 1; p <= n; p++){f[p] = p;}
    std::string s; std::cin >> s; s += '0'; s = '0' + s;
    bool possible = true;

    bool state(0);
    long start(0); 
    std::set<long> st;
    for(long p = 1; p <= n; p++){
        if(!state && s[p] == '0'){if(a[p] != p){possible = false; break;}}
        else if(s[p] == '1'){
            if(!state){state = 1; start = p;}
            st.insert(a[p]);
        }
        else if(state && s[p] == '0'){
            st.insert(a[p]);
            for(long k = start; k <= p; k++){if(st.count(k) == 0){possible = false; break;}}
            if(!possible){break;}
            state = 0; st.clear(); start = 0;
        }
    }

    std::cout << (possible ? "YES" : "NO") << std::endl;

    return 0;
}
