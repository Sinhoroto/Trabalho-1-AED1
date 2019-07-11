#include<stdio.h>
#include<stdlib.h>
#include"Ex6.h"

int main(){
    int i=0,r,f,num;
    Lista p;

    p=cria_lista();
    printa_lista(p);

    printf("Insira valores para a lista: ");
    for(i=0;i<10;i++){
        scanf("%d",&num);
        insere_ord(&p,num);
    }
    printf("Tamanho da lista: %d\n",tamanho(p));
    printa_lista(p);

    printf("Insira um valor a ser removido da lista: ");
    scanf("%d",&num);
    remove_ord(&p,num);

    printf("Tamanho da lista: %d\n",tamanho(p));
    printa_lista(p);
    printf("Maior elemento da lista = %d\n",maior(&p));

    printf("Removendo os elementos impares : \n");
    remove_imp(&p);
    printf("Tamanho da lista: %d\n",tamanho(p));
    printa_lista(p);

    printf("Maior elemento da lista = %d\n",maior(&p));
    printf("Conferindo se as listas sao iguais:\n");
    if(iguais(&p,&p)==0)printf("Lista iguais...\n");
    else printf("listas diferentes..\n");

    printf("Concatenando p e p:\n");

    Lista c=concat(&p,&p);
    printa_lista(c);


return 0;
}
