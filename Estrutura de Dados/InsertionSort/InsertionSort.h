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



//Ordena um Array passando um ponteiro para o mesmo e a quantidade de elementos.
bool InsertionSortArray(int *array, int n)  
{  
    printf("\nOrganizando seu vetor.");
    
    if(array== NULL) return false;

	int aux, j;  
    for (int i = 1; i < n; i++) //começa a percorrer o array pelo 2º elemento.
    {  
        aux = array[i];  //Armazena o valor do elemento atual.
        j = i - 1;  //Armazena o index do elemento anterior(O index que vai ser comparado com o atual).
		
        while (j >= 0 && array[j] > aux) //Enquanto o elemento anterior for maior que o atual.
        {  
            array[j + 1] = array[j];  //O elemento atual recebe o valor do elemento anterior.
            j = j - 1;  //Decrementa j
        }  
        array[j + 1] = aux; //Armazena o valor do elemento atual.
    }  
    printf(" - Fim\n");
	return true;
}  

//Ordena uma Lista Duplamente Encadeada e passa um ponteiro para a mesma.
void InsertionSortEnc(listaDupEnc * l)  
{  
    printf("\nOrdenando a lista.");
    
    no* aux = l->inicio;
    if(!listaVazia(l)&&aux->prox!=NULL){ 
        aux= aux->prox;

        int q;
        while(aux!=NULL)
        {   
            while (aux->ant!=NULL && aux->ant->dado > aux->dado) //Enquanto o elemento anterior for menor que o atual...
            {  
                q = aux->ant->dado; //Armazena o dado do nó anterior
                aux->ant->dado = aux->dado; // O nó anterior recebe o dado do atual
                aux->dado=q; //O nó atual pega o valor do nó anterior que estava salvo.

                aux=aux->ant; //Decrementa e volta pro nó anterior.
            }  
            
            aux=aux->prox;
        }  
        printf(" - Fim\n");
    }

}   