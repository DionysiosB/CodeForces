#include <cstdio>
#include <map>

int main(){

	long num[] = {10010, 11020, 20011, 21012, 11011, 21021, 22022, 12021, 11011, 12012, 10120, 11130, 20121, 21122, 11121, 21131, 22132, 12131, 11121, 12122, 10221, 11231, 12113, 20222, 21223, 11222};
    std::map<long, char> m;
    for(long p = 0; p < 26; p++){
        if(m[num[p]]){continue;}
        m[num[p]] = 'a' + p;
    }

    long t; scanf("%ld", &t);
    while(t--){
        long cur(0);
        for(long p = 0; p < 5; p++){long s; scanf("%ld", &s), cur = cur * 10 + s;}
        printf("%c", m[cur]);
    }

    return 0;
}
