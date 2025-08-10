#include <iostream>

int main(){

    long t; std::cin >> t;
    while(t--){
        long n, x; std::cin >> n >> x;
        std::string s; std::cin >> s;
        --x;
        long wl(-1); for(long p = x; p >= 0; p--){if(s[p] == '#'){wl = p; break;}}
        long wr(n); for(long p = x; p < n; p++){if(s[p] == '#'){wr = p; break;}}
        long ta = n - wr + 1; ta = (ta < (x + 1) ? ta : (x + 1));
        long tb = n - x; tb = (tb < (wl + 2) ? tb : (wl + 2));
        printf("%ld\n", (ta > tb ? ta : tb));
    }

}
