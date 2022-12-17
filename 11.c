#include <stdio.h>

int main(){
    int n, start;
    printf("Enter n: ");
    scanf("%d",&n);
    for (int i=1; i<=n; i++){
        if (i%2){
            start =0;
        }else{
            start =1;
        }
        for (int j=1; j<=i;j++){
            if (j%2){
                printf("%d", !(start));
            }else{
                printf("%d",start);
            }
        }
        printf("\n");
    }
}
