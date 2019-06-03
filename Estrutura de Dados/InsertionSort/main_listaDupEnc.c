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

int main(){
    listaDupEnc* l = criarLista(l);

    char Desordenado[] = "txt/DesordenadoEnc.txt"; //Caminho em que será gravado a lista desordenada
    char Ordenado[] = "txt/OrdenadoEnc.txt"; //Caminho em que será gravado a lista ordenada

    gerarArquivoNum(Desordenado, max); //gera n numeros aleatorios e os adiciona num arquivo de texto

    lerArquivoTXT_Enc(Desordenado,l,max); //le arquivo de texto com os valores e os adiciona na lista

    printf("\nConjunto de elementos Desordenado: ");

    printarLista(l); //imprime a lista na tela

    clock_t Ticks[2]; //array do tipo clock_t que armazena a hora exata do windows
    Ticks[0] = clock(); // armazena a hora do inicio da função.

	InsertionSortEnc(l); //organiza a lista

    Ticks[1] = clock(); //armazena a hora do fim da função.
    double TempoOrd = (Ticks[1] - Ticks[0]) * 1000.0 / CLOCKS_PER_SEC; //transforma o tempo armazenado em milissengundos.

    printf("\nConjunto de elementos Ordenado: ");

    printarLista(l); //Imprime na tela a lista Ordenada

    escreverArqTXT_Enc(Ordenado,l); //Escreve a lista em um arquivo de texto

    printf("Tempo de Ordenacao de %d valores: %lf ms.\n",max,TempoOrd);

    system("pause");
    return 0;
    
}

