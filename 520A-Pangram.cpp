#include <cstdio>
#include <set>
#include <iostream>

int main(){

    const int N = 26;
    int n; scanf("%d\n", &n);
    std::set<char> s;
    std::string input; getline(std::cin, input);
    for(int p = 0; p < input.size(); p++){
        char c = input[p];
        if('A' <= c && c <= 'Z'){c += 'a' - 'A';}
        s.insert(c);
    }

    puts(s.size() == N ? "YES" : "NO");

    return 0;
}
