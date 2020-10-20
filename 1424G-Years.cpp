#include <cstdio>
#include <map>

int main(){

    long n; scanf("%ld", &n);
    std::map<long, long> cal;
    for(long p = 0; p < n; p++){
        long b, d; scanf("%ld %ld", &b, &d);
        ++cal[b]; --cal[d];
    }

    long cnt(0), mx(0), when(0);
    for(std::map<long, long>::iterator it = cal.begin(); it != cal.end(); it++){
        long year = it->first;
        long diff = it->second;
        cnt += diff;
        if(cnt > mx){mx = cnt; when = year;}
    }

    printf("%ld %ld\n", when, mx);

    return 0;
}
