#include <iostream>

int main(){

    long t; std::cin >> t;
    while(t--){
        long a, b; std::cin >> a >> b;
        std::string s; std::cin >> s;
        long n = s.size();
        bool possible(true);
        long z(0), d(0);

        for(long p = 0; 2 * p < n; p++){
            if(s[p] != '?' && s[n - 1 - p] != '?' && s[p] != s[n - 1 - p]){
                possible = false;
                break;
            }
            else if(s[p] == s[n - 1 - p] && s[p] != '?'){
                z += (1 + (p != n - 1 - p)) * (s[p] == '0');
                d += (1 + (p != n - 1 - p)) * (s[p] == '1');
            }
            else if(s[p] == '?' && s[n - 1 - p] != '?'){
                s[p] = s[n - 1 - p];
                z += (1 + (p != n - 1 - p)) * (s[p] == '0');
                d += (1 + (p != n - 1 - p)) * (s[p] == '1');
            }
            else if(s[n - 1 - p] == '?' && s[p] != '?'){
                s[n - 1 - p] = s[p];
                z += (1 + (p != n - 1 - p)) * (s[p] == '0');
                d += (1 + (p != n - 1 - p)) * (s[p] == '1');
            }
        }

        for(long p = 0; 2 * p < n; p++){
            if(s[p] == '?' && s[n - 1 - p] == '?' && p != n - 1 - p){
                if(z <= a - 2){s[p] = s[n - 1 - p] = '0'; z += 2;}
                else if(d <= b - 2){s[p] = s[n - 1 - p] = '1'; d += 2;}
            }
            else if(s[p] == '?' && s[n - 1 - p] == '?' && p == n - 1 - p){
                if(z <= a - 1){s[p] = '0'; ++z;}
                else if(d <= b - 1){s[p] = '1'; ++d;}
            }

        }

        if(z != a){possible = false;}
        if(d != b){possible = false;}

        std::cout << (possible ? s : "-1") << std::endl;
    }

}
