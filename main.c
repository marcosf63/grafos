#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "cDIGRAPHmatriz.h"



int main(){
  Digraph G2, G1;

/*
  printf("Quantidade vertices: ");
  scanf("%d", &V);
  G = DIGRAPHinit(V);
  //DIGRAPHinsertA(G,1,4);
  printf("Quantoidade de arcos: ");
  scanf("%d", &A );

  for (i = 0; i < A; i++) {
    printf("Digite o arco v-w: ");
    scanf("%d-%d", &v, &w);
    DIGRAPHinsertA(G, v, w);

  }
*/
  G1 = DIGRAPHinit(3);
//  G2 = DIGRAPHinit(3);

  DIGRAPHinsertA(G1, 0, 1, 2.8);
  DIGRAPHinsertA(G1, 0, 2, 3.0);
  DIGRAPHinsertA(G1, 1, 2, 5.0);
 // DIGRAPHinsertA(G2, 0, 1);
 // DIGRAPHinsertA(G2, 0, 2);
 // DIGRAPHinsertA(G2, 1, 2);



  //DIGRAPHshow(G1);
  //DIGRAPHshow(G2);

//  printf("O grau de saida de 0 : %d\n", DIGRAPHoutdeg(G, 0));
//  printf("O grau de ntrada de 2 : %d\n", DIGRAPHindeg(G, 2));

  //igual = DIGRAPHequal(G1, G2);

  //if (igual)
    //printf("OK\n");
  //else
    //printf("nok\n");

 //DIGRAPHreverse(G1);

 // DIGRAPHshow(G2);
  G2 = DIGRAPHaleatorio(4,5);
  DIGRAPHshow(G2);
  //DIGRAPHremoveA(G1, 1, 2);
  //DIGRAPHshow(G1);



  return 0;
}
