#include <stdio.h>

int main(){
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    for (int i=1; i<=n;i++){
        int j;
        for (j=1; j<=i;j++){
            printf("%d", j);
        }
        for (int k=1; k<=(n-i)*2;k++){
            printf(" ");
        }
        j--;
        for (j ; j>0;j--){
            printf("%d", j);
        }
        printf("\n");
    }
}
