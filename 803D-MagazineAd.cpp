#include <cstdio>
#include <iostream>
#include <vector>

bool check(std::vector<long> a, long maxWidth, long maxLength){

    long w(0), length(0);
    for(long p = 0; p < a.size(); p++){
        if(a[p] > maxWidth){return false;}
        if(length > maxLength){return false;}
        if(w + a[p] > maxWidth){++length; w = 0;}
        w += a[p];
    }

    if(w > 0){++length;}
    return (length <= maxLength);
}


int main(){

    long k; std::string s;
    scanf("%ld\n", &k); getline(std::cin, s);
    std::vector<long> a;
    long last(-1);
    for(long p = 0; p < s.size(); p++){
        if(s[p] != ' ' && s[p] != '-'){continue;}
        a.push_back(p - last);
        last = p;
    }
    a.push_back(s.size() - last - 1);

    long left(0), right(s.size() + 1);
    while(left <= right){
        long mid = (left + right) / 2;
        if(check(a, mid, k)){right = mid - 1;}
        else{left = mid + 1;}
    }

    printf("%ld\n", left);

    return 0;
}
