#include <iostream>
#include <vector>

int main(){

    long n, m, pos; std::cin >> n >> m >> pos;

    std::string s; std::cin >> s;
    std::string t; std::cin >> t;

    std::vector<long> left(n + 2, 0), right(n + 2, n + 1), match(n + 2, 0), valid(n + 2, 1);
    for(long p = 1; p <= n; p++){left[p] = p - 1; right[p] = p + 1;}
    match[0] = match[n + 1] = -1; valid[0] = valid[n + 1] = 0;

    std::vector<long> v;
    for(long p = 1; p <= n; p++){
        if(s[p - 1] == '('){v.push_back(p);}
        else{long q = v.back(); match[p] = q; match[q] = p; v.pop_back();}
    }
    for(long p = 1; p <= n; p++){printf("%ld -> %ld\n", p, right[p]);}

    for(long p = 0; p < t.size(); p++){
        if(t[p] == 'R'){pos = right[pos];}
        else if(t[p] == 'L'){pos = left[pos];}
        else{
            long x = pos;
            long y = match[pos];
            if(x > y){long u = x; x = y; y = u;}
            left[y] = left[y + 1] = left[x];
            right[x] = right[x - 1] = right[y];
            valid[x] = valid[y] = 0;
            while(!valid[x] && x > 0){x = left[x];}
            while(!valid[y] && y <= n){y = right[y];}
            if(valid[y]){pos = y;} else{pos = x;}
        }
        printf("After:%c  Pos: %ld\n", t[p], pos);
        for(long p = 1; p <= n; p++){printf("%ld -> Valid:%d  Left:%ld   Right:%ld\n", p, (valid[p] ? 1 : 0), left[p], right[p]);}
        puts("");
    }

    pos = 1; 
    while(pos <= n){
        while(!valid[pos]){pos = right[pos];}
        printf("Pos:%ld Right: %ld  %c\n", pos, right[pos], s[pos - 1]);
        pos = right[pos];
    }
    puts("");

    pos = 1; 
    while(pos <= n){
        while(!valid[pos]){pos = right[pos];}
        printf("%c", s[pos - 1]);
        pos = right[pos];
    }
    puts("");

    return 0;
}
