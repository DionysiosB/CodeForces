#include <iostream>
typedef long long ll;

int main(){

    std::ios_base::sync_with_stdio(false);
    ll n, x, y; std::cin >> n >> x >> y;
    std::string s; std::cin >> s;
    ll zeros(s[0] == '0');
    for(ll p = 1; p < s.size(); p++){zeros += (s[p] == '0' && s[p - 1] == '1');}
    if(zeros == 0){puts("0");}
    else{std::cout << ((zeros - 1) * (x < y ? x : y) + y) << std::endl;}

    return 0;
}
