#include <iostream>
#include <vector>

int main(){

    const long N = 26;
    std::vector<std::vector<long> > left(N + 1), right(N + 1);

    long n; std::cin >> n;
    std::string s; std::cin >> s;
    std::string t; std::cin >> t;
    for(long p = 0; p < n; p++){
        if(s[p] == '?'){left[N].push_back(p + 1);}
        else{left[s[p] - 'a'].push_back(p + 1);}

        if(t[p] == '?'){right[N].push_back(p + 1);}
        else{right[t[p] - 'a'].push_back(p + 1);}
    }

    std::vector<std::pair<long, long> > bp;
    for(long p = 0; p < N; p++){
        while(left[p].size() > 0 && right[p].size() > 0){bp.push_back(std::make_pair(left[p].back(), right[p].back())); left[p].pop_back(); right[p].pop_back();}
    }

    for(long p = 0; p < N; p++){
        while(left[N].size() > 0 && right[p].size() > 0){bp.push_back(std::make_pair(left[N].back(), right[p].back())); left[N].pop_back(); right[p].pop_back();}
    }

    for(long p = 0; p < N; p++){
        while(left[p].size() > 0 && right[N].size() > 0){bp.push_back(std::make_pair(left[p].back(), right[N].back())); left[p].pop_back(); right[N].pop_back();}
    }

    while(left[N].size() > 0 && right[N].size() > 0){bp.push_back(std::make_pair(left[N].back(), right[N].back())); left[N].pop_back(); right[N].pop_back();}

    printf("%ld\n", bp.size());
    for(long p = 0; p < bp.size(); p++){printf("%ld %ld\n", bp[p].first, bp[p].second);}
    
    return 0;
}
