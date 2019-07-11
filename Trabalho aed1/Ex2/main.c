#include <stdio.h>
#include <stdlib.h>
#include "Ex2.h"

int main(){
    int i=0,r,f,num;
    Lista *p;

    p = cria_lista();
    print_lista(p);

    printf("Insira os numeros da lista: ");
    for(i=0;i<5;i++){
        scanf("%d",&num);
        insere_elem(p,num);
    }
    print_lista(p);

    printf("Insira um numero para ser retirado totalmente da lista: ");
    scanf("%d",&num);
    remove_todos(p,num);
    print_lista(p);

    printf("Insira um valor para o inicio da lista: ");
    scanf("%d",&num);
    insere1(p,num);

    print_lista(p);


    printf("Digite um valor a ser removido da lista: ");
    scanf("%d",&num);
    remove_elem(p,num);

    print_lista(p);

    remove_imp(p);
    print_lista(p);

    if(menor(p) == 1000)printf("Nao foi possivel calcular o menor valor.\n");
    else
    printf("O menor valor da lista eh: %d\n",menor(p));

    Lista *c,*a,*b;
    c=cria_lista();
    b=cria_lista();
    a=cria_lista();

    insere1(a,4);
    insere1(a,3);
    insere1(a,2);
    insere1(a,1);
    insere1(b,8);
    insere1(b,7);
    insere1(b,6);
    insere1(b,5);
    printf("A : ");
    print_lista(a);
    printf("B :");
    print_lista(b);

    c = concat(a,b,c);
    printf("Lista concatenada de A e B :");
    print_lista(c);

    return 0;
}
