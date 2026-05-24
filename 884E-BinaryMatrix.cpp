#include <iostream>
#include <bitset>

int main(){

    const long M = 16384 + 10;
    std::ios_base::sync_with_stdio(false);
    long n, m; std::cin >> std::dec >> n >> m;
    std::bitset<M> prev; prev.reset();

    long count(0);
    for(long p = 0; p < n; p++){
        std::string s; std::cin >> s;
        std::bitset<M> cur; cur.reset();
        for(long p = 0; p < s.size(); p++){
            char c = s[p]; int u(0); //Suboptimal, oh well
            if('0' <= c && c <= '9'){u = c - '0';} else{u = 10 + (c - 'A');}
            if(u & 8){cur.set(4 * p);}  
            if(u & 4){cur.set(4 * p + 1);}
            if(u & 2){cur.set(4 * p + 2);}
            if(u & 1){cur.set(4 * p + 3);}
        }

        for(long p = 0; p <= m; p++){std::cout << cur[p];}; std::cout << std::endl;
        bool seg(0), same(0);
        for(long p = 0; p <= m; p++){
            if(cur[p]){seg = 1; if(prev[p]){same = true;}}
            else{
                if(seg && !same){++count;}
                seg = same = false;
            }
        }



        prev = cur;
    }

    std::cout << std::dec << count << std::endl;

    return 0;
}

//Counterexample: 8 4
//E
//8
//A
//E
//3
//F
//F
//C
