#include <iostream>
#include <algorithm>

int main() {
    
    std::string a, b; std::cin >> a >> b;
    std::string s(a);
    long n = a.size();
    sort(a.begin(), a.end());
    sort(b.rbegin(), b.rend());

    long la(0), lb(0), ls(0);
    long ra = (n + 1) / 2 - 1;
    long rb = (n / 2) - 1;
    long rs = n - 1;

    for (long p = 0; p < n; p++){
        if(p & 1) {
            if(b[lb] > a[la]){s[ls++] = b[lb++];}
            else{s[rs--] = b[rb--];}
        } 
        else{
            if(b[lb] > a[la]){s[ls++] = a[la++];}
            else{s[rs--] = a[ra--];}
        }
    }

    std::cout << s << std::endl;

    return 0;
}
