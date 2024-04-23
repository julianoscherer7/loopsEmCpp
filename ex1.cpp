#include <iostream>
using namespace std;
int main () {
int num, i = 1;
printf("Digite um numero: ");
scanf("%d", &num);
printf("Numeros pares entre 1 e %d: ", num);
while (i <= num) {
if (i % 2 == 0) {
    printf("%d", i);
}
i++;
}
printf("\n");
return 0;
}