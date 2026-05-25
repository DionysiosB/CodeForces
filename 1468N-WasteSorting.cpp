#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long cd, ce, cf; scanf("%ld %ld %ld", &cd, &ce, &cf);
        long ad, ae, af, ag, ah; scanf("%ld %ld %ld %ld %ld", &ad, &ae, &af, &ag, &ah);

        bool possible(true);
        if(ad > cd || ae > ce || af > cf){possible = false;}
        cd -= ad; ce -= ae; cf -= af;
        long bd = (cd < ag) ? cd : ag; cd -= bd; ag -= bd;
        if(cf < ag){possible = false;}
        cf -= ag;

        long be = (ce < ah) ? ce : ah; ce -= be; ah -= be;
        if(cf < ah){possible = false;}
        cf -= ah;

        puts(possible ? "YES" : "NO");
    }


}
