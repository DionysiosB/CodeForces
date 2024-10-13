#include <iostream>

int main(){

    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::string a, b, c; std::cin >> a >> b >> c;
        long x(0), y(0), z(0);
        std::string t("");
        for(long p = 0; p < 3 * n && x < a.size() && y < b.size() && z < c.size(); p++){
            if(a[x] == b[y]){t += a[x]; ++x; ++y;}
            else if(a[x] == c[z]){t += a[x]; ++x; ++z;}
            else if(b[y] == c[z]){t += b[y]; ++y; ++z;}
        }


        if(x == a.size() && y <= z){for(long p = z; p < c.size(); p++){t += c[p];}}
        else if(x == a.size() && z <= y){for(long p = y; p < b.size(); p++){t += b[p];}}
        else if(y == b.size() && x <= z){for(long p = z; p < c.size(); p++){t += c[p];}}
        else if(y == b.size() && z <= x){for(long p = x; p < a.size(); p++){t += a[p];}}
        else if(z == c.size() && x <= y){for(long p = y; p < b.size(); p++){t += b[p];}}
        else if(z == c.size() && y <= x){for(long p = x; p < a.size(); p++){t += a[p];}}

        std::cout << t << std::endl;
    }

}
