#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);

    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::string u, v; std::cin >> u >> v;
        bool res(true);
        for(long p = 0; p < n; p++){
            if(u[p] == v[p]){continue;}
            else if(u[p] == 'G' && v[p] == 'B'){continue;}
            else if(u[p] == 'B' && v[p] == 'G'){continue;}
            res = false; break;
        }

        std::cout << (res ? "YES" : "NO") << std::endl;

    }

}
