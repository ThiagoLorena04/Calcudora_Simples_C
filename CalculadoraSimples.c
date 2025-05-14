int soma (float a, float b) {
    return a + b;
}

float subtracao (float a, float  b) {
    return a - b;
}

float multiplicar (float a, float b) {
    return a * b;
}

float divisao (float a, float b) {
    if(b == 0){
        printf("Não há divisão por 0");
        return 0;
    }   
    return a / b;
}

int mostrarMenu(){
    printf("=== CALCULADORA SIMPLES ===\n");
    printf("1 - Soma\n");
    printf("2 - Subtração\n");
    printf("3 - Multiplicação\n");
    printf("4 - Divisão\n");
    printf("Escolha uma opção: ");
    int opcao;
    scanf("%d", &opcao);
    return opcao;
}

void lerEntrada(float *a, float *b){
    printf("Digite seu primeiro número: ");
    scanf("%f", a);
    printf("Digite seu segundo número: ");
    scanf("%f", b);
}

float executarOperacao(int opcao,float a, float b){
    switch(opcao) {
        case 1:
            return soma(a, b);
        case 2:
            return subtracao(a, b);
        case 3:
            return multiplicar(a, b);
        case 4:
            return divisao(a, b);
        default:
            printf("Opção inválida!\n");
            return 0;
    }
} 

// Função para mostrar o resultado final
void mostrarResultado(float resultado) {
    printf("Resultado: %.2f\n", resultado);
}

int main(){
    int opcao = mostrarMenu();  
    float num1, num2;
    lerEntrada(&num1, &num2);

    float resultado = executarOperacao(opcao, num1, num2);
    mostrarResultado(resultado);
    return 0;
}