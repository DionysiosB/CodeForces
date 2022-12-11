#include<iostream>
#include<string>
#include<algorithm>

bool isPrime(int a, int p){return (a <= p) || ((a % p != 0) && (isPrime(a, p + 1)));}

int main() {

    const int N = 256;
    int freq[N] = {0};

    std::string s; std::cin>>s;

    int len=s.size();
    for(int p = 0; p < len; p++){++freq[s[p]];}

    std::string t(len,0);
    int *m=std::max_element(freq, freq+N);

    for(int p = 1; p < len; p++){if((p < len / 2) || (!isPrime(p + 1, 2))){t[p]=m-freq; (*m)--;}}

    if(*m<0){std::cout<< "NO" << std::endl;}
    else{
        int q=0;
        for(int p = 0; p < len; p++){if(!t[p]) {while(!freq[q]){q++;}; freq[t[p] = q]--;}}
        std::cout<<"YES" << std::endl << t << std::endl;
    }

    return 0;
}
