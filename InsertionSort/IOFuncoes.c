/********************************************************************************************/
//Instituto Federal de Educação Ciência e Tecnologia da Paraíba
//*******************************************************************************************/

/**Arquivos usados para projeto de Estrutura de dados em que foi proposto mostrar o uso do 
algorítmo de Ordenação Insertion Sort em diferentes Estruturas.**/

/**Grupo : Jonas Nascimento, Jorge Victor e Aristóteles Lima. **/
/**Professor: Cesar Vasconcelos**/
/**2º Período do Curso de Engenharia de Computação**/

/********************************************************************************************/
#include "IOFuncoes.h"

/**Gera uma quantidade q de números aleatórios que podem ser repetidos**/
bool gerarArquivoNum(char* path, int q){
	FILE* arq;
	arq=fopen(path,"w"); //abre ou gera um arquivo de texto.
	
	if(arq==NULL){
		printf("Arquivo nao pode ser aberto!\n");
		return false;  //Retorna false se ocorrer algum erro e encerra a função.
	}
	
	
	srand(time(NULL));  

  	printf("\nGerando %d valores aleatorios. ",q);
  
  	for (int i = 0; i < q; i++){
    	fprintf(arq,"%d\n" ,rand() % q); //Gera um valor aleatório a cada execução do loop.
  	}
  
  	fclose(arq); //Fecha o Arquivo de texto.

	printf("- Fim\n");
  	return true;
}

/**Lê um arquivo de texto e o armazena em um vetor**/
bool lerArquivoTXT_Array(char* path,int* array,int n){
	FILE*file;
	
	file=fopen(path,"r");
	
	if(file==NULL){
		printf("Arquivo nao pode ser aberto! \n");
		return false;
	}

	int cont=0;
	int i;

	printf("\nLendo Arquivo TXT");
	for(i=0;cont!=n;i++){
		fscanf(file, "%d",&array[i]);
		cont++;
	}
	fclose(file);
	printf(" - Fim\n");

	return true;
}

/**Escreve elementos de um vetor para um arquivo de texto.**/
bool escreverArqTXT_Array(char * path,int *vet, int n){
	FILE* arq;

	arq=fopen(path,"w");
	
	if(arq==NULL){
		printf("Arquivo nao pode ser aberto!\n",path);
		return false;
	}
	
	printf("\nEscrevendo os Valores no Arquivo TXT.");
	int i;
  	for (i = 0; i < n; i++){
    	fprintf(arq,"%d\n" ,vet[i]);
  	}
  
  	fclose(arq);
  	printf(" - Fim\n");

  	return true;
	
}

/**Lê um arquivo de texto e o armazena em uma Lista Duplamente Encadeada.**/
bool lerArquivoTXT_Enc(char* path,listaDupEnc* l,int n){
	FILE*file;
	
	file=fopen(path,"r"); //abrir arquivo de texto;
	
	if(file==NULL){ //Se ocorrer um erro retorna false e sai da função;
		printf("Erro na leitura do arquivo.\n");
		return false;
	}

	int cont=0 ,a;
	printf("\nLendo arquivo de texto.");
	for(int i=0;cont!=n;i++){
		fscanf(file, "%d",&a); 
		inserirElemento(l,a);
		cont++;
	}
	fclose(file);

	printf(" - Fim\n");
	
	return true;
}

/**Escreve elementos de uma Lista Duplamente Encadeada em um arquivo de texto.**/
bool escreverArqTXT_Enc(char * path,listaDupEnc*l){
	FILE* arq;

	arq=fopen(path,"w");
	
	if(arq==NULL){
		printf("Arquivo em  %s nao pode ser aberto!\n",path);
		return false;
	}
	
	
	printf("\nEscrevendo os valores no txt.");
	no* aux = l->inicio;
	while(aux!=NULL){
    	fprintf(arq,"%d\n" ,aux->dado);
		aux=aux->prox;
  	}
  
  	fclose(arq);
	printf(" - Fim\n");
  	return true;
}

