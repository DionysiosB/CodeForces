#include <cstdio>
#include <iostream>
#include <vector>

bool isVowel(char c){return (c == 'a') || (c == 'e') || (c == 'i') || (c == 'o') || (c == 'u') || (c == 'y') || (c == 'A') || (c == 'E') || (c == 'I') || (c == 'O') || (c == 'U') || (c == 'Y');}


int main(){

    int n; scanf("%d\n", &n);
    std::vector<int> pat(n);
    for(int p = 0; p < n; p++){scanf("%d ", &pat[p]);}
    scanf("\n");
    bool res(true);
    for(int p = 0; p < n; p++){
        std::string s; getline(std::cin, s);
        int count(0);
        for(int a = 0; a < s.size(); a++){count += isVowel(s[a]);}
        if(count != pat[p]){res = false; break;}
    }

    puts(res ? "YES" : "NO");

    return 0;
}
