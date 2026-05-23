#include<cstdio>

int main(){

    const int MAX = 1000;
    char s[MAX]; gets(s);
    int count(0), cur(0), prev(0);

    for(int p = 0; s[p]; p++){
        if(s[p] == ' '){continue;}
        if((s[p] >= '0' && s[p] <= '9')){cur = 1;}
        else if(s[p] == ','){cur = 2;}
        else{cur = 3; count = (count % 3) + 1;}
        if((prev && cur == 3 && count == 1) || (p && prev == 1 && cur == 1 && s[p-1] == ' ') || prev == 2){putchar(' ');}
        putchar(s[p]);      
        prev = cur;
    }

    return 0;
}
