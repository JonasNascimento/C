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

//******************** A interface de uso do TAD Funções IO (Entrada e saída) ***********************//

/**Gera uma quantidade q de números aleatórios que podem ser repetidos**/
bool gerarArquivoNum(char* path, int q);

/**Lê um arquivo de texto e o armazena em um vetor**/
bool lerArquivoTXT_Array(char* path,int* array,int n);

/**Escreve elementos de um vetor para um arquivo de texto.**/
bool escreverArqTXT_Array(char * path,int *vet, int n);

/**Lê um arquivo de texto e o armazena em uma Lista Duplamente Encadeada.**/
bool lerArquivoTXT_Enc(char* path,listaDupEnc* l,int n);

/**Escreve elementos de uma Lista Duplamente Encadeada em um arquivo de texto.**/
bool escreverArqTXT_Enc(char * path,listaDupEnc*l);