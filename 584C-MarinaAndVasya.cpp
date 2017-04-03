#include<stdio.h>
#include<iostream>


int main(void){

    long n,t; scanf("%ld %ld\n",&n,&t);

    std::string a, b, ans; 
    getline(std::cin, a); getline(std::cin, b); ans = a;

    long same(0), diff(0); 
    for(long p = 0; p < n; p++){if(a[p] == b[p]){++same;} else{++diff;}};
    if(2 * t < diff){puts("-1"); return 0;}

    long changeSame(0), changeDiff(0), changeFromA(0);
    if(t > diff){changeSame = t-diff; changeDiff = diff;}
    else {changeDiff = 2 * t - diff; changeFromA = t - changeDiff;}

    for(long p = 0; p < n; p++){
        if(a[p] == b[p]){
            if(changeSame){--changeSame;ans[p] = (a[p] == 'a') ? 'b' : 'a';}
            else ans[p] = a[p];
        }
        else if(changeDiff){
            --changeDiff;
            ans[p] = 'a'; while(ans[p] == a[p]||ans[p] == b[p]){++ans[p];}
        }
        else if(changeFromA){--changeFromA; ans[p] = b[p];}
        else{ans[p] = a[p];}
    }

    std::cout << ans << std::endl;

    return 0;
}
