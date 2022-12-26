#include <iostream>
#include <vector>

int main(){

    long n, m; std::cin >> n >> m;
    std::vector<std::string> a(n + 1);
    for(long p = 0; p < n; p++){std::cin >> a[n - 1 - p];}

    long last(n - 1);
    for(long p = n - 1; p >= 0; p--){
        last = p;
        long on(0);
        for(long u = 0; u < a[p].size(); u++){on += (a[p][u] == '1');}
        if(on){break;}
    }

    std::vector<long> left(n, 0), right(n, 0);
    for(long p = 0; p <= last; p++){
        long leftLight(m + 1), rightLight(0);
        for(long u = 1; u < a[p].size(); u++){if(a[p][u] == '1'){leftLight = u; break;}}
        for(long u = m; u > 0; u--){if(a[p][u] == '1'){rightLight = u; break;}}

        if(p == 0){left[p] = (2 - (last == p))  * rightLight; right[p] = m + 1; continue;}
        else if(p == last){
            left[p] = left[p - 1] + 1 + rightLight;
            right[p] = right[p - 1] + 1 + (m + 1 - leftLight);
        }
        else{
            long leftToLeft = left[p - 1] + 1 + 2 * rightLight;
            long leftToRight = left[p - 1] + 1 + (m + 1);
            long rightToLeft = right[p - 1] + 1 + (m + 1);
            long rightToRight = right[p - 1] + 1 + 2 * (m + 1 - leftLight);

            left[p] = (leftToLeft < rightToLeft) ? leftToLeft : rightToLeft;
            right[p] = (leftToRight < rightToRight) ? leftToRight : rightToRight;
        }
    }

    long total = (left[last] < right[last]) ? left[last] : right[last];
    printf("%ld\n", total);

    return 0;
}
