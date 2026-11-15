#include <iostream>

int main(){

    const int B = 26;

    std::ios_base::sync_with_stdio(false);

    int t; std::cin >> t;
    while(t--){

        int v[B] = {0};

        long n, m; std::cin >> n >> m;
        std::string a, b; std::cin >> a >> b;
        for(char x : a){++v[x - 'a'];}
        for(char x : b){--v[x - 'a'];}

        bool ans(true);
        for(int p = 0; p < B; p++){
            if(p == 8 || p == 18 || p == 23){if(v[p] != 1){ans = false; break;}}
            else if(v[p] != 0){ans = false; break;}
        }

        std::cout << (ans ? "YES" : "NO") << std::endl;
    }

}
