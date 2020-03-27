#include <stdio.h>

void ex1 (void);
void ex2 (void);
void ex3 (void);
void ex4 (void);
void ex5 (void);
void ex6 (void);
void ex7 (void);
void ex8 (void);
void ex9 (void);
void ex10 (void);
void ex11 (void);
void ex12 (void);
void ex13 (void);
void ex14 (void);

int main (void)
{
	ex1();
	ex2();
	ex3();
	ex4();
	ex5();
	ex6();
	ex7();
	ex8();
	ex9();
	ex10();
	ex11();
	ex12();
	ex13();
	ex14();
	return 0;
}


void ex1 (void){
	printf("\n\t******** Exercicio 1 ********\n");
	printf("O primeiro programa nunca se esquece!\n");
}

void ex2(void){
	printf("\n\t******** Exercicio 2 ********\n");
	printf("Lê um numero da consola e imprime o dobro do valor (de 'X')");
}


void ex3 (void){
	float celsius,fahrenheit;
	printf("\n\t******** Exercicio 3 ********\n");
	printf("Insira a tempoeratura(ºF):\n");
	scanf("%f",&fahrenheit);
	celsius = 5.0 * (fahrenheit - 32.0)/9.0;
	printf("A temperatura em Celsius é de %.f",celsius);
}

void ex4 (void){
	const float Pi = 3.14F;
	float raio,area;
	printf("\n\t******** Exercicio 4 ********\n");
	printf("Inira o raio de um círculo:\n");
	scanf("%f",&raio);
	area = Pi * (raio*raio);
	printf("O valor da área do circulo é de %f",area);
}

void ex5(void){
	int a,b,aux;
	printf("\n\t******** Exercicio 5 ********\n");
	printf("Insira um valor para a variável 'A':\n");
	scanf("%d",&a);
	printf("Insira um valor para a variável 'B':\n");
	scanf("%d",&b);
	printf("O valor inserido para a variável 'A' foi %d e para a variável 'B' foi %d.\n",a,b);
	aux = a;
	a = b;
	b = aux;
	printf("Depois da troca a variável 'A' fica com %d e a variável 'B' com %d.\n",a,b);
}

void ex6(void){
	int a,b,c,d;
	printf("\n\t******** Exercicio 6 ********\n");	
	printf("Insira quatro numeros separados por virgula(',')\n");
	scanf("%d,%d,%d,%d",&a,&b,&c,&d);
	printf("o resultado da operação (a + b + c) * d) é: %d",(a + b + c) * d);
}

void ex7(void){
	float nota1,nota2,nota3,nota4,media;
	printf("\n\t******** Exercicio 7 ********\n");	
	printf("Insira o valor da primeira nota:\n");
	scanf("%f",&nota1);
	printf("Insira o valor da segunda nota:\n");
	scanf("%f",&nota2);
	printf("Insira o valor da terceira nota:\n");
	scanf("%f",&nota3);
	printf("Insira o valor da quarta nota:\n");
	scanf("%f",&nota4);
	media=(nota1+nota2+nota3+nota4)/4;
	printf("O valor da média das notas é: %f",media);
}

void ex8 (void){
	unsigned char c = 3.14;
	unsigned short int i = 3.14;
	unsigned int j = 'B';
	float f = 'C';
	printf("\n\t******** Exercicio 8 ********\n");
	/* Usar o Debug e em "Debugging windows" abrir "Watches"*/
	c = c + 2;
	i = i + 2;
	j = j + 2;
	f = f + 2;
}

void ex9(void){
	int comp,larg;
	printf("\n\t******** Exercicio 9 ********\n");	
	printf("Insira o comprimento do retângulo:\n");
	scanf("%d",&comp);
	printf("Insira a largura do retângulo:\n");
	scanf("%d",&larg);
	printf("A área do retângulo é %d e o perimetro é %d.\n",comp*larg,2*(comp + larg));
}

void ex10(void){
	float euros,dolares;
	printf("\n\t******** Exercicio 10 ********\n");	
	printf("Insira o valor em euros:\n");
	scanf("%f",&euros);
	dolares = euros*1.23;
	printf("O valor em dolares é: %.2f",dolares);
}

void ex11(void){
	float peso,altura,imc;
	printf("\n\t******** Exercicio 11 ********\n");	
	printf("Insira o seu peso (Kg):\n");
	scanf("%f",&peso);
	printf("Insira a sua altura (m):\n");
	scanf("%f",&altura);

	imc = peso/(altura*altura);
	printf("O Índice de Massa Corporal (IMC) é de %.2f\n",imc);
}

void ex12(void){
	int inputSeconds;
	int inputSecondsCopy;
	int days;
	int hours;
	int minutes;
	int seconds;
	printf("\n\t******** Exercicio 12 ********\n");
	printf("Insira o numero de segundos\n");
	scanf("%d",&inputSeconds);
	
	inputSecondsCopy = inputSeconds;
	days = inputSeconds / (24 * 3600);
	
	inputSeconds = inputSeconds % (24 * 3600); 
	hours = inputSeconds / 3600; 
  
	inputSeconds %= 3600; 
	minutes = inputSeconds / 60 ; 
  
	inputSeconds %= 60; 
	seconds = inputSeconds; 
	
	printf(" %d segundos correspondem a %d Dias e %d Horas %d Minutos e %d Segundos.\n",inputSecondsCopy,days,hours,minutes,seconds);
	
}

void ex13 (void){
	const float premio = 780000.00;
	float primeiro_premio = premio * 0.46;
	float segundo_premio = premio * 0.32;
	float terceiro_premio = premio * 0.22;
	printf("\n\t******** Exercicio 13 ********\n");
	printf("O valor do primeiro prémio é de %.2f euros.\n",primeiro_premio);
	printf("O valor do segundo prémio é de %.2f euros.\n",segundo_premio);
	printf("O valor do terceiro prémio é de %.2f euros.\n",terceiro_premio);
}



