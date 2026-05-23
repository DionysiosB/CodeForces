#include <iostream>
#include <vector>

int main(){
    
    const int N = 26;

    std::string a; getline(std::cin, a);
    std::string b; getline(std::cin, b);
    std::string c; getline(std::cin, c);

    std::vector<size_t> acount(N, 0);
    for(size_t p = 0; p < a.size(); p++){++acount[a[p] - 'a'];}

    std::vector<size_t> bcount(N, 0);
    for(size_t p = 0; p < b.size(); p++){++bcount[b[p] - 'a'];}

    std::vector<size_t> ccount(N, 0);
    for(size_t p = 0; p < c.size(); p++){++ccount[c[p] - 'a'];}

    long maxB(a.size());
    for(size_t p = 0; p < N; p++){if(bcount[p] > 0 && (acount[p] / bcount[p]) < maxB){maxB = (acount[p] / bcount[p]);}}

    long maxSum(maxB), optB(maxB), optC(0);
    for(size_t b = 0; b <= maxB; b++){
        size_t candC(a.size());
        for(size_t p = 0; p < N; p++){if(ccount[p] > 0 && ((acount[p] - b * bcount[p])/ ccount[p]) < candC){candC = (acount[p] - b * bcount[p])/ccount[p];}}
        if(b + candC > maxSum){maxSum = b + candC; optB = b; optC = candC;}
    }

    for(int p = 0; p < optB; p++){std::cout << b;}
    for(int p = 0; p < optC; p++){std::cout << c;}
    for(int p = 0; p < N; p++){
        size_t rem = acount[p] - optB * bcount[p] - optC * ccount[p];
        while(rem--){std::cout << char('a' + p);}
    }
    std::cout << std::endl;

    return 0;
}
