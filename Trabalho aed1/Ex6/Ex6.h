#ifndef EX6_H_INCLUDED
#define EX6_H_INCLUDED

struct no {
    int info;
    struct no * prox;
};
typedef struct no * Lista;

Lista cria_lista();
int lista_vazia(Lista p);
int insere_elem(Lista p , int elem);
int remove_elem (Lista p, int elem);
int insere_ord (Lista *lst, int elem);
int remove_ord (Lista *lst, int elem);
int remove_imp(Lista *p);
int iguais(Lista *a,Lista *b);
Lista concat(Lista *a,Lista *b);
int maior(Lista *p);
int tamanho (Lista p);



#endif // EX6_H_INCLUDED
