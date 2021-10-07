#include <stdio.h>

void pagamentoAVista(float precoTotal){

  printf("Pagamento a vista - Desconto de 10%");

  printf("TOTAL: R$%.2f", precoTotal - (precoTotal*0.1));

}

void pagamentoParcelado(float precoTotal){

  int parcelas;

  printf("Pagamento parcelado ");

  printf("Em quantas vezes deseja parcelar? ");

  scanf("%d", &parcelas);

  if (parcelas == 2 || precoTotal <= 100){

    printf("Total: %d vezes de R$%.2f",parcelas, precoTotal/parcelas);

  }

  else{

    if (parcelas >= 3 && parcelas <=10 && precoTotal > 100){

      float juros = precoTotal * 0.03 * parcelas;

      printf("Total: %d vezes de R$%.2f com juros de R$%.2f ao mes",parcelas, precoTotal, juros/parcelas );

    }

  }

}

int imprimirMenu(){

  int opcao;

  printf("Para pagamento: \n");

  printf("1 - A vista \n");

  printf("2 - Parcelado \n");

  printf("Digite a opção desejada: ");

  scanf("%d", &opcao);

  return opcao;

}

int main(){

  float precoTotal;

  printf("Digite o preço total: R$");

  scanf("%f", &precoTotal);

  int opcao = imprimirMenu();

  if (opcao == 1){

    pagamentoAVista(precoTotal);

  }

  else{

    if (opcao == 2){

      pagamentoParcelado(precoTotal);

    }

    else{

      printf("Opção invalida.");

    }

  }

  return 0;
}