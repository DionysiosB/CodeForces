#include <iostream>
#include <vector>

int main(){

    std::string t, w; std::cin >> t >> w;
    std::vector<long> a(10);
    for(long p = 0; p < t.size(); p++){
        if(t[p] == '6' || t[p] == '9'){++a[6];}
        else if(t[p] == '2' || t[p] == '5'){++a[2];}
        else{++a[t[p] - '0'];}
    }

    std::vector<long> b(10);
    for(long p = 0; p < w.size(); p++){
        if(w[p] == '6' || w[p] == '9'){++b[6];}
        else if(w[p] == '2' || w[p] == '5'){++b[2];}
        else{++b[w[p] - '0'];}
    }


    long num(100000);
    for(long p = 0; p < 10; p++){
        if(a[p] == 0){continue;}
        long cur = b[p] / a[p];
        num = (num < cur) ? num : cur;
    }

    printf("%ld\n", num);

    return 0;
}
