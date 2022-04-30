/********************************************************************************************/
//Instituto Federal de Educação Ciência e Tecnologia da Paraíba
//*******************************************************************************************/

/**Arquivos usados para projeto de Estrutura de dados em que foi proposto mostrar o uso do 
algorítmo de Ordenação Insertion Sort em diferentes Estruturas.**/

/**Grupo : Jonas Nascimento, Jorge Victor e Aristóteles Lima. **/
/**Professor: Cesar Vasconcelos**/
/**2º Período do Curso de Engenharia de Computação**/

/********************************************************************************************/

#include "listaDupEnc.h"

/**Inicia e aloca espaço para a lista.**/
listaDupEnc* criarLista(){
    listaDupEnc* l =(listaDupEnc*)malloc(sizeof(listaDupEnc)); //Aloca espaço na memória para a struct listaDupEnc.

    l->inicio = NULL; 
    l->fim = NULL;

    return l;
}

/**Verifica se a lista está vazia(true) ou não(false).**/
bool listaVazia(listaDupEnc* l){
    if(l->inicio==NULL) return true;
    return false;
}

/**Insere um elemento no final da lista.**/
bool inserirElemento(listaDupEnc* l, int v){
    no* novo = (no*)malloc(sizeof(no)); //cria um novo elemento (nó).
    novo->dado = v; //atribui o valor do elemento .
    if(listaVazia(l)){
        novo->ant=NULL; 
        novo->prox = NULL;

        l->inicio = novo;
        l->fim = novo;

        return true;
    }

    //Se a lista não estiver vazia ...
    novo->ant = l->fim;
    novo->prox = NULL;

    l->fim->prox = novo; //Adiciona o nó através do ponteiro para o ultimo nó da lista.
    l->fim = novo;

    return true;
}

/**Imprime a lista na tela.**/
void printarLista(listaDupEnc* l){
    if(listaVazia(l)) printf("Lista Vazia!");
    else{
        no* aux = l->inicio;

        printf("\n[ ");
        while(aux!=NULL){ //Percorre toda a lista e imprime cada valor de cada elemento.
            if(aux->prox == NULL)
                printf("%d ",aux->dado);
            else
                printf("%d, ",aux->dado);
            aux=aux->prox;
        }
        printf("]\n");
    }
}

