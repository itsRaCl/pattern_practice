#include <stdio.h>

int main(){
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    for (int i=0; i<n/2;i++){
        for(int j=0; j<n/2-i;j++){
            printf(" ");
        }
        for(int j=0; j<2*(i+1)-1; j++){
            printf("*");
        }
        printf("\n");
    }

    for (int i=0; i<n/2;i++){
        for (int j=0; j<=i; j++){
            printf(" ");
        }
        for (int j=0; j<2*(n/2-i)-1;j++){
            printf("*");
        }
        printf("\n");
    }
}
