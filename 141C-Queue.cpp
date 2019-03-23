#include<iostream>
#include<vector>
#include<algorithm>

int main(){

    std::ios_base::sync_with_stdio(false);
    long n; std::cin >> n;

    std::vector<std::pair<long, std::string> > a(n);
    for(long p = 0; p < n; p++){std::cin >> a[p].second >> a[p].first;}
    sort(a.begin(), a.end());

    bool possible(true);
    std::vector<long> h(n);
    for(long p = 0; p < n; p++){
        h[p] = p - a[p].first;
        if (h[p] < 0){possible = false; break;}
        ++h[p]; //Avoid zero height;
        for(long q = 0; q < p; q++){if(h[q] >= h[p]){++h[q];}}
    }

    if(possible){for(long p = 0; p < n; p++){std::cout << a[p].second << " " << h[p] << std::endl;}}
    else{puts("-1");}

    return 0;
}
