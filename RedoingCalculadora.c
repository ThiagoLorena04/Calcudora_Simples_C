float soma (float a, float b){
  return a + b;
}

float subtracao (float a, float b){
  return a - b;
}

float multiplicacao (float a, float b){
  return a * b;
}

float divisao (float a, float b){
  if(b == 0){
    printf("Não há como dividir por 0\n");
    return 0;
  }
  return a / b;
}

int escolherOperacao(){
  printf("====================================\n");
  printf("CALCULADORA DE OPERACÕES MATEMÁTICAS\n");
  printf("====================================\n");
  printf("1- Escolha 1 se quiser Somar\n");
  printf("2- Escolha 2 se quiser Subtrair\n");
  printf("3- Escolha 3 se quiser Multiplicar\n");
  printf("4- Escolha 4 se quiser Dividir  ----> ");
  int opcao = 0;
  scanf("%d", &opcao);
  return opcao;
}

void lerEntrada(float *a, float *b){
  printf("Digite seu primeiro número: ");
  scanf("%f", a);
  printf("figite seu segundo número: ");
  scanf("%f", b);
}

float resolvendoOperacao(int opcao, float a, float b){
   switch(opcao) {
        case 1:
            return soma(a, b);
        case 2:
            return subtracao(a, b);
        case 3:
            return multiplicacao(a, b);
        case 4:
            return divisao(a, b);
        default:
            printf("Opção inválida!\n");
            return 0;
    }
}

void mostrarResultado(float resultado){
  printf("Resultado: %.2f\n", resultado);
}



int main (){
  float opcao = escolherOperacao();
  float num1, num2;

  lerEntrada(&num1, &num2);

  float resultado =  resolvendoOperacao(opcao, num1, num2);

  mostrarResultado(resultado);
}