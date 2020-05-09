#include<cstdio>
#include<iostream>

int main(){

    const int arr[]={31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,29,31,30,31,30,31,31,30,31,30,31};
    int n; scanf("%d", &n);
    int a[37]; for(int p = 0; p < n; p++){scanf("%d", a + p);}
    bool possible(true);
    for(int p = 0; p < 36; p++){
        possible = true; 
        for(int q=0;q<n;q++){if(a[q]!=arr[(p+q)%36]){possible = false; break;}}
        if(possible){break;}
    }

    puts(possible ? "YES" : "NO");
    return 0;
}
