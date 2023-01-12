#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int fibonacci(int n){
    if (n==0){
        return 0;
    }else if (n==1){
        return 1;
    }else {
        return fibonacci(n-1)+ fibonacci(n-2);
    }
}

int main(){
setlocale(LC_ALL,"portuguese");
int n,i=0,j;
    printf("Digite quantos numeros da sequencia fibonacci voce quer saber:\n");
    scanf("%d",&n);

    printf("os numeros da sequencia de fibonacci são:\n");
    while(i<n){
        j=fibonacci(i);
        i++;
        printf("%d,",j);
    }


    return 0;
}
