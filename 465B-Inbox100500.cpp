#include <cstdio>

int main(){
    
    int n; scanf("%d\n", &n);

    bool state = 0;
    int output = 0;

    for(int p = 0; p < n; p++){
        int unread; scanf("%d\n", &unread);
        if(state == 0 && unread == 1){state = 1; ++output;}
        else if(state == 1 && unread == 1){++output;}
        else if(state == 1 && unread == 0){++output; state = 0;}
    }

    if(state == 0 && output > 0){--output;}

    printf("%d\n", output);

    return 0;
}
