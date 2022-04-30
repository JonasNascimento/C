/********************************************************************************************/
//Instituto Federal de Educação Ciência e Tecnologia da Paraíba
//*******************************************************************************************/

/**Arquivos usados para projeto de Estrutura de dados em que foi proposto mostrar o uso do 
algorítmo de Ordenação Insertion Sort em diferentes Estruturas.**/

/**Grupo : Jonas Nascimento, Jorge Victor e Aristóteles Lima. **/
/**Professor: Cesar Vasconcelos**/
/**2º Período do Curso de Engenharia de Computação**/

/********************************************************************************************/
/********************************Vantagens e Desvantagens************************************/
/** Vantagens:
    -É um algorítmo com pouco custo computacional
    -Excelente para ordenar pequenos números
    -Simples implementação

    Desvantagens:
    -Leva muito tempo pra ordenar muitos números
    -Forma de comparação com alto custo de movimentação dos elementos.

/**********************************************************************************************/
/***********************************Complexidade***********************************************/
/** A complexidade do Insertion Sort é de O(n) no melhor caso em que o array ja esta ordenado**/
/**          No pior caso a complexidade é de O(n²) em que o array nao está ordenado         **/
/**********************************************************************************************/


#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<time.h>


//************** A interface de uso do TAD Funções IO (Entrada e saída) *********************//

//Ordena um Array recebendo um ponteiro para o mesmo e a quantidade de elementos.
bool InsertionSortArray(int *array, int n); 

//Ordena uma Lista Duplamente Encadeada.
void InsertionSortEnc(listaDupEnc * l) ;