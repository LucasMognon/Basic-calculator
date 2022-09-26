#include <stdio.h>
#include<math.h> //necessario para poder utilizar as funcoes raiz quadrada e potencia
#include <stdlib.h>
//usuario github: LucasMognon
//tomei como referencia o codigo que pode ser acessado no seguinte link: http://excript.com/linguagem-c/calculadora-c.html, após isso introduzi o menu com a funcao "case" e fui organizando as diferentes operacoes
 
int main()
{
    int menu, num1, num2, raiz, soma, subtracao, multi, potencia, div;
    printf("Nome: Lucas Mognon Garcia\nCurso: A.D.S\nUniversidade LaSalle\nMatricula: 202220850\n");
    printf("Digite o numero para selecionar a operacao:\n1=Soma\n2=Divisao\n3=Multiplicacao\n4=Raiz Quadrada\n5=Potenciacao\n6=Subtracao\n");
    scanf("%i", &menu); //variavel para o usuario escolher a operacao
    switch (menu) 
    {
    case 1:
        printf("Digite os Numeros: ");
        scanf("%i%i", &num1, &num2);
        soma            = num1 + num2;
        printf( "A soma e: %i\n", soma );
        break;
    case 2:
        printf("Digite os Numeros: ");
        scanf("%i%i", &num1, &num2);
        div             = num1 / num2;
        printf( "A divisão e: %i \n", div );
        break;
    case 3:
        printf("Digite os Numeros: ");
        scanf("%i%i", &num1, &num2);
        multi           = num1 * num2;
        printf( "O produto e: %i \n", multi );
        break;
    case 4:
        printf("Digite o Numero: ");
        scanf("%i", &num1);
        raiz = sqrt(num1);
        printf("A raiz e: %i \n", raiz);
        break;
    case 5:
        printf("Digite os Numeros: ");
        scanf("%i%i", &num1, &num2);
        potencia = pow(num1, num2);
        printf("A potencia e: %i \n", potencia);
        break;
    case 6:
        printf("Digite os Numeros: ");
        scanf("%i%i", &num1, &num2);
        subtracao       = num1 - num2;
        printf( "A subtracao e: %i\n", subtracao );
        break;

    default:
        printf("Voce digitou uma operacao invalida");
        break;
    }


    return 0;
}