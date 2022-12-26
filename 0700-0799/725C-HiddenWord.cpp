#include<iostream>

int main(){

    const int N  =  26;
    int a(0), b(0);
    std::string s; std::cin>>s;

    for(int p  =  0; p <=  N; p++){for(int q = p + 1; q <= N; q++){if(s[p] == s[q]){a = p, b = q;}}}
    if(b == a + 1){std::cout << "Impossible" << std::endl; return 0;}

    for(int p = 0, q = a + ((b - a) + 1) / 2; p < (N / 2); p++ , q++){if(q%(N + 1) == b){++q;}; std::cout << s[(q + N + 1) % (N + 1)];}
    std::cout<<std::endl;
    for(int p = 0,q = a+((b-a)-1)/2;p < (N / 2); p++,q--){std::cout<<s[(q+N + 1)%(N + 1)];}
    std::cout<<std::endl;

    return 0;
}
