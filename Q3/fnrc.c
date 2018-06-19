#include <stdio.h>
/**
 * Escreva uma função que encontra a primeira letra que não se repete em uma
 * sentença.
 * Função: char firstNonRepeatingChar(char[] sentence, int length)
 * Input:
 * - sentence: array não nulo de letras, formado apenas por ASCII em minúsculo.
 * - length: tamanho do array - número de caracteres
 * Output: A primeira letra que não se repete, ou -1, caso todas se repitam.
 */
char firstNonRepeatingChar (char sentence[], int length)
{
    printf("\nfirstNonRepeatingChar::START: %s, %d\n", s, length);
    
   int index1 = 0; //para usar no loop 1
   int index2 = 0; //para usar no loop 2
   int letraERepetida = 1;
   char letraNaoRepetida ;
   
   while(index1 < length){
       letraERepetida = 0; //resetando para próxima letra da sentença
       index2 = 0;
       
       //compara a letra de index1 com todas as outras letras da sentença, exceto quando
       // index1 é igual a index 2
       while(index2 < length){
           if(index1 != index2){
               if (sentence[index1]==sentence[index2]){
                   letraERepetida = 1; //essa letra é repetida
               }
           }
           index2++;
       } // while loop 2
       
       if (letraERepetida == 0){ //se essa letra não é repetida
           letraNaoRepetida = sentence[index1];
           printf("%c", letraNaoRepetida);
           return(letraNaoRepetida);
       }
       index1++;    
   }// while loop 1
   printf("-1");
   return -1;
}// end firstNonRepeatingChar
    
    printf("\nfirstNonRepeatingChar::END\n");
    return -1;
}

int main()
{
    printf("\n### CESAR School :: Sistemas Digitais :: Coding1 :: firstNonRepeatingChar ###\n");
    
    firstNonRepeatingChar("ovo", 3);
    firstNonRepeatingChar("cesar school", 12);
    firstNonRepeatingChar("sistemas digitais", 17);
    
    return 0;
}
