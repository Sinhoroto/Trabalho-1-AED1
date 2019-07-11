#include<stdio.h>
#include<stdlib.h>
#include"Ex4.h"

int main(){
    int num;
    Lista p;
    p=cria_lista();
    printa_lista(p);

    printf("Insira valores para a lista: ");
    for(int i=0;i<10;i++){
        scanf("%d",&num);
        insere_elem(&p,num);
    }

    printa_lista(p);

    printf("Digite um valor para ser removido da lista: ");
    scanf("%d",&num);
    remove_elem(&p,num);
    printa_lista(p);

    printf("Digite um valor para ser removido totalmente da lista: ");
    scanf("%d",&num);
    remove_todos(&p,num);




    printa_lista(p);

    int w = tamanho(&p);
    printf("Tamanho da lista = %d\n",w);



    insere_fim(&p,10);
    printa_lista(p);

    remove_pares(&p);
    printa_lista(p);

    printf("Menor elemento = %d\n",menor(&p));

    printf("Concatenando :\n");
    Lista c=concat(&p,&p);
    printa_lista(c);


return 0;
}
