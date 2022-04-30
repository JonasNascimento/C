/********************************************************************************************/
//Instituto Federal de Educação Ciência e Tecnologia da Paraíba
//*******************************************************************************************/

/**Arquivos usados para projeto de Estrutura de dados em que foi proposto mostrar o uso do 
algorítmo de Ordenação Insertion Sort em diferentes Estruturas.**/

/**Grupo : Jonas Nascimento, Jorge Victor e Aristóteles Lima. **/
/**Professor: Cesar Vasconcelos**/
/**2º Período do Curso de Engenharia de Computação**/

/********************************************************************************************/


#include "listaDupEnc.c"
#include "IOFuncoes.c"
#include "InsertionSort.c"

#define max 3000000

void printArray(int *array,int n);

int main(){
    int* array=(int*)malloc(max * sizeof(int));

    char DesordenadoArray[] = "txt/DesordenadoArray.txt"; //Caminho em que será gravado o Array desordenado
    char OrdenadoArray[] = "txt/OrdenadoArray.txt"; //Caminho em que será gravado o array ordenado

    gerarArquivoNum(DesordenadoArray, max); //Gera n valores aleatorios

    lerArquivoTXT_Array(DesordenadoArray, array, max); //Lê arquivo de texto e armazena no vetor

    printf("\nConjunto de elementos Desordenado:");

    printArray(array,max); //Imprime o Array desordenado na tela.

    clock_t Ticks[2]; //array do tipo clock_t que armazena a hora exata do windows
    Ticks[0] = clock(); // armazena a hora do inicio da função.

	InsertionSortArray(array,max); //organiza a lista

    Ticks[1] = clock(); //armazena a hora do fim da função.

    double TempoOrd = (Ticks[1] - Ticks[0]) * 1000.0 / CLOCKS_PER_SEC; //transforma o tempo armazenado em milissengundos.

    printf("\nConjunto de elementos Ordenado:"); 

    printArray(array,max); //Imprime e Array Ordenado na tela

    escreverArqTXT_Array(OrdenadoArray, array, max); //Escreve o vetor em um arquivo de texto

    printf("\nTempo de Ordenacao de %d valores: %lf ms\n",max,TempoOrd); 

    system("pause");

    return 0;
}

void printArray(int *array,int n){ //Imprime o array na tela
    printf("\n[ ");
    for(int i=0;i<n;i++){
        if(i==n-1) 
            printf("%d ",array[i]);
        else 
            printf("%d, ",array[i]);
    }
    printf("]\n");
}