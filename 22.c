#include <stdio.h>

int main(){
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    for (int i=n; i>0;i--){
        int c= 2*i-1;
        int x=n;
        for (int j=1; j<=n-i;j++){
            printf("%d ", x);
            x--;
        }
        for (int j=1; j<=c; j++){
            printf("%d ", i);
        }
        for (int j=1; j<=n-i;j++){
            x++;
            printf("%d ", x);
        }
        printf("\n");
    }
    for (int i=2; i<=n;i++){
        int c= 2*i-1;
        int x=n;
        for (int j=1; j<=n-i;j++){
            printf("%d ", x);
            x--;
        }
        for (int j=1; j<=c; j++){
            printf("%d ", i);
        }
        for (int j=1; j<=n-i;j++){
            x++;
            printf("%d ", x);
        }
        printf("\n");
    }
}
