#include <cstdio>
#include <map>

int main(){
    long n; scanf("%ld\n", &n);
    std::map<long, long> cnt;
    long two(0), four(0), six(0), eight(0);
    for(long p = 0; p < n; p++){
        long x; scanf("%ld ", &x); ++cnt[x];
        if(cnt[x] == 8){++eight; --six;}
        else if(cnt[x] == 6){++six; --four;}
        else if(cnt[x] == 4){++four; --two;}
        else if(cnt[x] == 2){++two;}
    }

    long q; scanf("\n%ld\n", &q);
    while(q--){
        char w; long x; scanf("%c %ld\n", &w, &x);
        if(w == '+'){
            ++cnt[x];
            if(cnt[x] == 8){++eight; --six;}
            else if(cnt[x] == 6){++six; --four;}
            else if(cnt[x] == 4){++four; --two;}
            else if(cnt[x] == 2){++two;}
        }
        else if(w == '-'){
            --cnt[x];
            if(cnt[x] == 7){--eight; ++six;}
            else if(cnt[x] == 5){--six; ++four;}
            else if(cnt[x] == 3){--four; ++two;}
            else if(cnt[x] == 1){--two;}
        }

        puts((eight > 0 || (six > 0 && (four > 0 || two > 0)) || (four > 0 && two > 1) || (four > 1) || (six > 1)) ? "YES" : "NO");
    }

    return 0;
}
