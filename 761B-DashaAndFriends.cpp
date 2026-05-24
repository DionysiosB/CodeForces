#include <iostream>
#include <vector>

int main(){

    std::ios_base::sync_with_stdio(false);
    int n, L; std::cin >> n >> L;
    std::vector<int> a(n);
    for(int p = 0; p < n; p++){std::cin >> a[p];}
    std::vector<int> da(n);
    da[0] = (L - a[n - 1]) + a[0];
    for(int p = 1; p < n; p++){da[p] = a[p] - a[p - 1];}

    std::vector<int> b(n);
    for(int p = 0; p < n; p++){std::cin >> b[p];}
    std::vector<int> db(n);
    db[0] = (L - b[n - 1]) + b[0];
    for(int p = 1; p < n; p++){db[p] = b[p] - b[p - 1];}


    std::string res("NO");
    for(int lag = 0; lag < n; lag++){
        bool possible(true);
        for(int p = 0; p < n; p++){if(da[p] != db[(p + lag) % n]){possible = false; break;}}
        if(possible){res = "YES"; break;}
    }

    std::cout << res << std::endl;

    return 0;
}
