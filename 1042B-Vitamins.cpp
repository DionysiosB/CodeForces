#include <iostream>
#include <algorithm>

int main(){

    std::ios_base::sync_with_stdio(false);
    const long XX = 1e9;
    long n; std::cin >> n;
    long a(XX), b(XX), c(XX), ab(XX), ac(XX), bc(XX), abc(XX);

    while(n--){
        long cost; std::string s; std::cin >> cost >> s;
        sort(s.begin(), s.end());
        if(s == "A"){a = (a < cost) ? a : cost;}
        else if(s == "B"){b = (b < cost) ? b : cost;}
        else if(s == "C"){c = (c < cost) ? c : cost;}
        else if(s == "AB"){
            ab = (ab < cost) ? ab : cost;
            a = (a < cost) ? a : cost;
            b = (b < cost) ? b : cost;
        }
        else if(s == "AC"){
            ac = (ac < cost) ? ac : cost;
            a = (a < cost) ? a : cost;
            c = (c < cost) ? c : cost;
        }
        else if(s == "BC"){
            bc = (bc < cost) ? bc : cost;
            b = (b < cost) ? b : cost;
            c = (c < cost) ? c : cost;
        }
        else if(s == "ABC"){
            abc = (abc < cost) ? abc : cost;
            a = (a < cost) ? a : cost;
            b = (b < cost) ? b : cost;
            c = (c < cost) ? c : cost;
        }
    }
    

    long mc(a + b + c);
    mc = (mc < ab + c) ? mc : (ab + c);
    mc = (mc < ac + b) ? mc : (ac + b);
    mc = (mc < bc + a) ? mc : (bc + a);
    mc = (mc < abc) ? mc : abc;

    if(mc >= XX){mc = -1;}
    std::cout << mc << std::endl;

    return 0;
}
