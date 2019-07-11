#include<stdio.h>
#include<stdlib.h>
#include"Ex3.h"
#define MAX 10

int main(){
int i=0,r,f,num;
    Lista *p;

    p=cria_lista();

    imprime_lista(p);

    printf("Adicione valores a lista:");
    for(i=0;i<5;i++){
        scanf("%d",&num);
        insere_ord(p,num);
    }
    imprime_lista(p);


    Lista *a,*b,*c;
    a=cria_lista();
    b=cria_lista();
    c=cria_lista();

    imprime_lista(a);
    insere_ord(a,7);
    insere_ord(a,4);
    insere_ord(a,6);
    insere_ord(a,1);
    imprime_lista(a);
    imprime_lista(b);
    insere_ord(b,3);
    insere_ord(b,8);
    insere_ord(b,4);
    insere_ord(b,1);
    imprime_lista(b);

    imprime_lista(c);
    c=intercala(a,b);
    printf("\nTamanho da lista = %d\n",tamanho(c));
    printf("Lista intercalada: ");
    imprime_lista(c);
    printf("Maior elemento da lista = %d\n",maior(c));


    remove_par(c);
    printf("\nLista sem elementos pares : ");
    imprime_lista(c);
    printf("\nTamanho da lista = %d\n",tamanho(c));
    printf("Maior elemento da lista = %d\n",maior(c));
    printf("\n\n\n");

    imprime_lista(a);
    imprime_lista(b);
    int iguais=compara(a,b);
    if(iguais == 0)printf("As listas sao iguais...\n");
    else printf("As listas nao sao iguais...");
    printf("\n\n\n");


}
