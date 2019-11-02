#include <cstdio>
#include <iostream>

int main(){

    long n; std::cin >> n;
    std::string s; std::cin >> s;

    long countA(0), countD(0);
    for(int p = 0; p < s.size(); p++){
        countA += s[p] == 'A';
        countD += s[p] == 'D';
    }

    if(countA > countD){puts("Anton");}
    else if(countA < countD){puts("Danik");}
    else if(countA == countD){puts("Friendship");}

    return 0;
}
