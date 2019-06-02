/********************************************************************************************/
//Instituto Federal de Educação Ciência e Tecnologia da Paraíba
//*******************************************************************************************/

/**Arquivos usados para projeto de Estrutura de dados em que foi proposto mostrar o uso do 
algorítmo de Ordenação Insertion Sort em diferentes Estruturas.**/

/**Grupo : Jonas Nascimento, Jorge Victor e Aristóteles Lima. **/
/**Professor: Cesar Vasconcelos**/
/**2º Período do Curso de Engenharia de Computação**/

/********************************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<time.h>

//****************************Implementação da área de dados do TAD ********************************//
typedef struct no{
    int dado;
    struct no* ant;
    struct no* prox;
}no;

typedef struct{
    no* inicio;
    no* fim;
}listaDupEnc;

//******************** A interface de uso do TAD Lista Duplamente Encadeada ***********************//

/**Inicia e aloca espaço para a lista.**/
listaDupEnc* criarLista(); 

/**Verifica se a lista está vazia(true) ou não(false).**/
bool listaVazia(listaDupEnc* l); 

/**Insere um elemento no final da lista.**/
bool inserirElemento(listaDupEnc* l, int v); 

/**Imprime a lista na tela.**/
void printarLista(listaDupEnc* l); 





