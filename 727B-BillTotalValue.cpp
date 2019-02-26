#include<cstdio>
#include<iostream>
typedef long long ll;

int main(){

    std::string s; std::cin >> s;
    ll total(0), x(0);
    long dot(-s.size());

    for(long p = 0; p < s.size(); p++){
        if('a' <= s[p]  && s[p] <= 'z'){
            if(p - dot > 3){x *= 100;}
            total += x; x = 0; dot = -s.size();
        }
        else if(s[p] == '.'){dot = p;}
        else if('0' <= s[p] && s[p] <= '9'){x = 10 * x + (s[p] - '0');}
    }

    if(s.size() - dot > 3){x *= 100;}
    total += x;

    ll dollars = total / 100;
    int cents = total % 100;


    if(dollars == 1000){printf("1.000");}
    else if(dollars == 1000000){printf("1.000.000");}
    else if(dollars == 1000000000){printf("1.000.000.000");}
    else if(dollars > 1000000){
        printf("%lld.", dollars / 1000000); 
        dollars %= 1000000;
        ll thousands = dollars / 1000;
        if(thousands < 100){putchar('0');}
        if(thousands < 10){putchar('0');}
        printf("%lld.", thousands); 
        dollars %= 1000;
        if(dollars < 100){putchar('0');}
        if(dollars < 10){putchar('0');}
        printf("%lld", dollars); 
    }
    else if(dollars > 1000){
        printf("%lld.", dollars / 1000); 
        dollars %= 1000;
        if(dollars < 100){putchar('0');}
        if(dollars < 10){putchar('0');}
        printf("%lld", dollars);
    }
    else{printf("%lld", dollars);}

    if(cents > 0){putchar('.'); if(cents < 10){putchar('0');} printf("%d\n", cents);}

    return 0;
} 
