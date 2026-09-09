#include <stdio.h>
int main () {

    // Pergutando os valores dos números
    int numero;  // Criando variavel
    printf("Digite o número: ");  //Perguntando número
    scanf("%d", &numero); //Lendo número
    

    //Divisão por 3
    int divisaoTres;  //Criando a variavel
    divisaoTres= numero%3; //Dividindo

    //Divisão por 7
    int divisaoSete;  //Criando a variavel
    divisaoSete= numero%7; //Dividindo

    //Variaveis auxiliares
    char resultadoTres= 'f';
    char resultadoSete= 'f';

    // Estrutura Condicional -- divisivel por 3
    if (divisaoTres== 0){
         resultadoTres = 'v';   //Atribuindo verdadeiro
    }

       // Estrutura Condicional -- divisivel por 7
    if (divisaoSete== 0){
       resultadoSete= 'v';   //Atribuindo verdadeiro
    }

    // Estrutura Condicional -- Resultado final
    if (resultadoTres=='v' && resultadoSete== 'v'){
        printf ("%d É divisível por 3 e por 7", numero); //Printando em caso afirmativo
    }
    else{
        printf("%d Não é divisível por 3 e por 7 ao mesmo tempo", numero); // Printando em caso negativo
    }
    
    return 0;
}