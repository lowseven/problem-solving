#include<cstdio>
#include<cstdlib>

//http://coj.uci.cu/24h/problem.xhtml?pid=1049

int main() {
    int n; 
    scanf("%d", &n);
    if(n > 0) {
        printf("%d", n*(n/2)+n/2);
    } else {
        printf("%d", -n*(n/2)+(n/2)+1);
    }
    printf("\n");
}
