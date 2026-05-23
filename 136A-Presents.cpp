#include <cstdio>
//using namespace std;

int main(){
    int numFriends; scanf("%d\n", &numFriends);
    int *perm = new int[numFriends + 1];
    int temp = 0;
    for(int k = 1; k <= numFriends; ++k){scanf("%d", &temp); perm[temp] = k;}
    for(int k = 1; k <= numFriends; ++k){printf("%d ", perm[k]);}
    printf("\n");
    return 0;
}
