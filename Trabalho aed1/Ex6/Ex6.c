#include<stdio.h>
#include<stdlib.h>
#include"Ex6.h"


Lista cria_lista() {
    // Aloca nó cabeçalho
    Lista cab;
    cab = (Lista) malloc(sizeof(struct no));
    // Coloca lista no estado de vazia
    if (cab != NULL){ // Só se alocação NÃO falhar
        cab->prox = NULL;
        cab->info = 0;
    } // Opcional: guardar qtde
return cab;
}

int lista_vazia(Lista p) {
    if (p->prox == NULL)
    return 1; // Lista vazia
    else
    return 0; // Lista NÃO vazia
}

int printa_lista(Lista p){
    Lista aux=p->prox;
    printf("Lista = {");
    while(aux != NULL){
        printf("%d",aux->info);
        if(aux->prox != NULL)printf(" ");
        aux=aux->prox;
    }
    printf("}\n");

}

int tamanho (Lista p){
        return (p->info);
}

int insere_ord (Lista *lst, int elem) {
    Lista N = (Lista) malloc(sizeof(struct no)); // Aloca novo nó
    if (N == NULL) { return 0; } // Falha: nó não alocado
    N->info = elem; // Insere o conteúdo (valor do elem)
    // Percorrimento da lista
    Lista aux = *lst; // Faz aux apontar para nó cabeçalho
    while (aux->prox != NULL && aux->prox->info < elem)
    aux = aux->prox; // Avança
    N->prox = aux->prox; // Insere o novo nó na lista
    aux->prox = N;
    (*lst)->info++; // Opcional: Incrementa qtde de nós na lista
return 1; }

int remove_ord (Lista *lst, int elem) {
    if (lista_vazia(*lst) == 1)return 0; // Falha

    Lista aux = *lst; // Ponteiro auxiliar
    while (aux->prox != NULL && aux->prox->info < elem) aux = aux->prox; //Percorrimento até final lista, achar elem ou nó maior
    if (aux->prox == NULL || aux->prox->info > elem) return 0; // Falha

    Lista aux2 = aux->prox; // Aponta nó a ser removido
    aux->prox = aux2->prox; // Retira nó da lista
    free(aux2); // Libera memória alocada
    (*lst)->info--; // Opcional: Decrementa qtde de nós na lista
return 1;
}


int remove_imp(Lista *p){
    if(lista_vazia(*p)==1)return 0;
    Lista aux=*p;
    while(aux!=NULL){
        while (aux->prox != NULL && aux->prox->info%2==0)aux = aux->prox;

        if (aux->prox == NULL)return 0; // Falha

        // Remove elemento ≠ 1o nó da lista
        Lista aux2 = aux->prox; // Aponta nó a ser removido
        aux->prox = aux2->prox; // Retira nó apontado p/ aux2 da lista
        free(aux2); // Libera memória alocada
        (*p)->info--;
    }
}

int maior(Lista *p){
    if(lista_vazia(*p)==1)return 0;
    int maior=(*p)->prox->info;
    Lista aux=(*p)->prox;
    while(aux!=NULL){
        if(aux->info>maior)maior=aux->info;
        aux=aux->prox;
    }

return maior;
}


int iguais(Lista *a,Lista *b){

    Lista aux=*a;
    Lista aux2=*b;
    while(aux!=NULL){
        if(aux->info!=aux2->info)return 1;
        aux=aux->prox;
        aux2=aux2->prox;
    }
return 0;
}

Lista concat(Lista *a,Lista *b){

    Lista c=cria_lista();
    Lista aux=(*a)->prox;
    Lista aux2=(*b)->prox;

    while(aux!=NULL){
        insere_ord(&c,aux->info);
        aux=aux->prox;

    }
    while(aux2!=NULL){
        insere_ord(&c,aux2->info);
        aux2=aux2->prox;

    }
return c;
}
