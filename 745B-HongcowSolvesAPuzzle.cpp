#include<iostream>
#include<vector>

int main(){

    long n, m; std::cin >> n >> m;
    std::string empty(m, '.');
    std::vector<std::string> a(n);

    for(long p = 0; p < n; p++){std::cin >> a[p];}
    long top(-1), bottom(n);
    for(long p = 0; p < n; p++){if(a[p] == empty){top = p;} else{break;}}; ++top;
    for(long p = n - 1; p >= 0; p--){if(a[p] == empty){bottom = p;} else{break;}}

    long rectangle(true);
    for(long p = top; p < bottom; p++){if(a[p] != a[top]){rectangle = false; break;}}
    puts(rectangle ? "YES" : "NO");

    return 0;
}
