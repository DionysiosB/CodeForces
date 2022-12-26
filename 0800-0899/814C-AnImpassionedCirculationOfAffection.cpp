#include <iostream>
#include <vector>

int main(){

    const int N = 26;
    std::ios_base::sync_with_stdio(false);

    long n; std::cin >> n;
    std::string s; std::cin >> s;
    std::vector<std::vector<long> > t(N, std::vector<long>(n + 1, -1));

    for(int letter = 0; letter < N; letter++){
        for(long p = 0; p < n; p++){
            long count(0);
            for(long q = p; q < n; q++){
                count += (s[q] != ('a' + letter));
                long length = q - p + 1;
                t[letter][count] = (t[letter][count] > length) ? t[letter][count] : length; 
            }
        }
    }

    for(int letter = 0; letter < N; letter++){for(long p = 1; p < t[letter].size(); p++){if(t[letter][p] < 0){t[letter][p] = t[letter][p - 1];}}}

    long q; std::cin >> q;
    while(q--){long m; char c; std::cin >> m >> c; std::cout << t[c - 'a'][m] << std::endl;}

    return 0;
}
