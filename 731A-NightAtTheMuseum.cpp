#include <iostream>

int main(){

    const int N = 26;
    std::string s; std::cin >> s;
    char prev('a');
    long count(0);
    for(int p = 0; p < s.size(); p++){
        char c = s[p];
        int dist = c - prev;
        if(dist < 0){dist += N;}
        if(dist > N/2){dist = N - dist;}
        count += dist;
        prev = c;
    }

    std::cout << count << std::endl;

    return 0;
}
