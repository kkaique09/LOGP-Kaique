# LISTA 1 CASA EM C(05/04) 
### 1) Crie um programa que permita fazer a conversão cambial entre Reais e Dólares. Considere como taxa de câmbio US$1,00 = R$2,40. Leia um valor em Reais pelo teclado e mostre o correspondente em Dólares.   
#### Resposta:   
#include<stdio.h>   
int main ()   
{  
 float Reais, Dolares;   
printf(“Digite o valor em reais R$:\n”);   
scanf(“%f”, &Reais);   
Dolares = Reais * 2.40;   
printf(“O Valor em dolares USD é: %.2f”, Dolares)   
return 0;   
}   


### 2) Crie um programa que permita fazer a conversão cambial entre Dólares e Reais. Considere como taxa de câmbio US$1,00 = R$2,40. Leia um valor em Dólares pelo teclado e mostre o correspondente em Reais. 
#### Resposta: 
#include<stdio.h>   
int main ()   
{  
 float Reais, Dolares;   
printf(“Digite o valor em dolares USD:\n”);   
scanf(“%f”, &Dolares);   
Reais = Dolares / 2.40;   
printf(“O Valor em reais R$ é: %.2f”, Reais)   
return 0;   
}   


### 3) Calcule quantos azulejos são necessários para azulejar uma parede. É necessário conhecer a altura da parede (AP), a sua largura (LP), e a altura do azulejo (AA) e sua largura (LA). Leia os dados através do teclado. 
####Resposta:   
#include<stdio.h>   
int main ()   
{   
float alturaParede, larguraParede, alturaAzulejo, larguraAzulejo, Azulejos;   
printf("Digite a altura da parede (em metros): ");   
scanf("%f", &alturaParede);   
printf("Digite a largura da parede (em metros): ");   
scanf("%f", &larguraParede);   
printf("Digite a altura do azulejo (em metros): ");   
scanf("%f", &alturaAzulejo);   
printf("Digite a largura do azulejo (em metros): ");   
scanf("%f", &larguraAzulejo);  
Azulejos = (alturaParede * larguraParede) / (alturaAzulejo * larguraAzulejo);   
printf(“A quantidade de azulejos é:”, Azulejos);   
return 0;   
}   


### 4) Faça um programa que, a partir das medidas dos lados de um retângulo, lidos via teclado, calcule a área e o perímetro deste retângulo. 
#### Resposta: 
#include<stdio.h>   
int main ()   
{   
float Base, Altura, Area, Perimetro;   
printf(“Digite o valor da altura:\n”);   
scanf(“%f" &Altura);   
printf(“Digite o valor da base:\n”);   
scanf(“%f" &Base);   
Perimetro = 2 * Altura + 2 * Base;   
Area = Altura * Base;   
printf("Área do retângulo: %.2f metros quadrados\n", Area);   
printf("Perímetro do retângulo: %.2f metros\n", Perimetro);   
return 0;   
}   


### 5) A condição física de uma pessoa pode ser medida com base no cálculo do IMC, Índice de Massa Corporal, o qual é calculado dividindo-se a massa da pessoa ( em kg) pela altura da mesma (h em m) elevada ao quadrado (IMC= m/h²). Escreva um programa que leia a massa e a altura de uma pessoa, calcule e mostre o IMC. 
#### Resposta: 
#include<stdio.h>   
int main ()   
{   
   
float Imc, Massa, Altura;   
printf(“Digite o valor da altura:\n”);   
scanf(“%f" &Altura);   
printf(“Digite o valor da massa:\n”);   
scanf(“%f" &Massa);   
Imc = Massa / Altura ** 2   
printf("O IMC é: %.2f\n", Imc);   
return 0;   
}  


### 6) Dado o valor do raio (r) de uma circunferência, elaborar um programa para calcular e imprimir sua área (A) e o seu comprimento (C). A fórmula da área do círculo é A=_ r2 e do comprimento é C=2_ r. 
#### Resposta: 
#include <stdio.h>    
#include <math.h>   
int main()   
{    
float raio, area, comprimento;    
const float PI = 3.14159;   
printf("Digite o valor do raio da circunferência: ");   
scanf("%f", &raio);   
area = PI * raio ** 2;           
comprimento = 2 * PI * raio;   
printf("Área da circunferência: %.2f\n", area);   
printf("Comprimento da circunferência: %.2f\n", comprimento);   
return 0;   
}


7) Elaborar um programa para calcular e exibir o volume (V) de uma esfera e a área (A) de 
sua superfície, dado o valor de seu raio (R). A fórmula do volume da esfera é V=4/3 _ R3 e 
da área é A=4_ R2. 
Resposta: 
#include <stdio.h>  
#include <math.h> 
int main() 
{ 
float raio, volume, area;  
const float PI = 3.14159; 
printf("Digite o valor do raio da esfera: "); 
scanf("%f", &raio); 
area = 4 * PI * raio ** 2;      
volume = (4.0 / 3.0) * PI * raio ** 3; 
printf("Área da superfície da esfera: %.2f\n", area); 
printf("Volume da esfera: %.2f\n", volume); 
return 0; 
} 
8) Faça um programa para calcular a média final de um aluno, supondo-se que há quatro 
notas bimestrais durante o ano e que esta é calculada através de uma média aritmética 
simples (todos os bimestres têm o mesmo peso). 
Resposta: 
#include <stdio.h> 
Int main () 
{ 
float nota1, nota2, nota3, nota4, media; 
printf("Digite a primeira nota: "); 
scanf("%f", &nota1); 
printf("Digite a segunda nota: "); 
scanf("%f", &nota2); 
printf("Digite a terceira nota: "); 
scanf("%f", &nota3); 
printf("Digite a quarta nota: "); 
scanf("%f", &nota4); 
media = (nota1 + nota2 + nota3 + nota4) / 4; 
printf("A média final do aluno é: %.2f\n", media); 
return 0; 
} 
9) O critério de avaliação semestral de determinada escola segue a regra: P1 – primeira 
avaliação do semestre. P2 – segunda avaliação do semestre. Ativ – nota atribuída pelas 
atividades realizadas no semestre. Média = (P1 x 4 + P2 x 4 + Ativ x 2) / 10 Escreva um 
programa que leia as notas das provas (P1 e P2) e da atividade (Ativ), calcule e mostre a 
média, seguindo o cálculo acima. 
Resposta: 
#include <stdio.h> 
Int main () 
{ 
float p1, p2, ativ, media; 
printf("Digite a nota da P1: "); 
scanf("%f", &p1); 
printf("Digite a nota da P2: "); 
scanf("%f", &p2); 
printf("Digite a nota da Atividade: "); 
scanf("%f", &ativ); 
media = (p1 * 4 + p2 * 4 + ativ * 2) / 10; 
printf("A média final é: %.2f\n", media); 
return 0; 
} 
10) Elaborar um programa para receber valores, via teclado, nas variáveis "a" e "b". Após 
isto, o programa, utilizando-se de uma 3a. variável "c", deverá trocar o conteúdo das 
variáveis "a" e "b". 
Resposta: 
#include <stdio.h> 
Int main () 
{ 
int a, b, c; 
printf("Digite o valor de a: "); 
scanf("%d", &a); 
printf("Digite o valor de b: "); 
scanf("%d", &b); 
printf("Antes da troca: a = %d, b = %d\n", a, b); 
c = a; 
a = b; 
    b = c; 
     printf("Depois da troca: a = %d, b = %d\n", a, b); 
     return 0; 
} 
 
 
11) (DESAFIO) Idem o programa anterior, sem utilizar-se de uma 3a. Variável. 
Resposta: 
#include <stdio.h> 
Int main () 
{ 
 int a, b; 
     printf("Digite o valor de a: "); 
     scanf("%d", &a); 
    printf("Digite o valor de b: "); 
     scanf("%d", &b); 
     printf("Antes da troca: a = %d, b = %d\n", a, b); 
     a = a + b; 
     b = a - b; 
     a = a - b; 
     printf("Depois da troca: a = %d, b = %d\n", a, b); 
     return 0; 
} 
 
 
12) Elaborar um programa que receba, via teclado, os valores do espaço percorrido e do 
tempo gasto por um veículo em movimento, para calcular e apresentar em tela sua 
velocidade média. 
Resposta: 
#include <stdio.h> 
Int main () 
{ 
 float espaco, tempo, velocidade_media; 
     printf("Digite o espaço percorrido (em km): "); 
     scanf("%f", &espaco); 
printf("Digite o tempo gasto (em horas): "); 
scanf("%f", &tempo);   
velocidade_media = espaco / tempo; 
printf("A velocidade média do veículo é: %.2f km/h\n", velocidade_media); 
return 0; 
} 
13) Num laboratório de física, em uma experiência de Movimento Uniformemente Variado, 
foram encontrados os seguintes valores: s0=2m, v0=3m/s, a=10m/s2. Digitado o valor de t 
(segundos), apresentar em tela o valor de s (metros). Dada a fórmula: s = s0 + v0 . t + ½ . a 
. T2 
Resposta: 
#include <stdio.h> 
Int main () 
{ 
float s0 = 2.0; 
float v0 = 3.0; 
float a = 10.0; 
float t, s; 
printf("Digite o tempo (em segundos): "); 
scanf("%f", &t); 
s = s0 + v0 * t + 0.5 * a * t ** 2; 
printf("A posição final s é: %.2f metros\n", s); 
return 0; 
}
