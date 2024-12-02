#include <stdio.h>
#include <stdlib.h>
#include "ingrediente.h"

ingrediente cadastroIngrediente(int cont){

    ingrediente ing;
    ing.id = cont;
    printf("ID do ingrediente: %d\n",ing.id);
    printf("DIGITE O NOME DO INGREDIENTE: ");
    scanf("%s",&ing.nome);
    printf("DIGITE O PRECO DO INGREDIENTE: ");
    scanf("%f",&ing.preco);
}

ingrediente apagarIngrediente(){
    

}

ingrediente visualisarIngrediente(ingrediente ingr[],int numIngrediente){
    
    for(int i = 0; i <= numIngrediente; i++){
    printf("ID: %d.Nome: %s. Valor: %.2f\n",ingr[i].id,ingr[i].nome,ingr[i].preco);
    }
}

ingrediente editarIngrediente(ingrediente ingr[]){
    int aux;
    printf("DIGITE O ID DO INGREDIENTE: ");
    scanf("%d",&aux);
    printf("DIGITE O NOME DO INGREDIENTE: ");
    scanf("%s",&ingr[aux].nome);
    printf("DIGITE O PRECO DO INGREDIENTE: ");
    scanf("%f",&ingr[aux].preco);
}




