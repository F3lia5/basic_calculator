#include <math.h>
#include <stdio.h>

int main(void) {

  char operator;
  int number1, number2;
  float sonuc;

  printf("--- Welcome to calculate ---");
  printf("\n Please select an operator ");
  printf("\n [x], [/], [+], [-]");
  scanf("%c", &operator);
  printf("Please select the first number: ");
  scanf("%d", &number1);
  printf("Please select the second number: ");
  scanf("%d", &number2);
  switch (operator) {
  case 'x':
    sonuc = number1 * number2;
    printf("%d x %d = %.2f", number1, number2, sonuc);
    break;
  case '/':
    sonuc = (float)number1 / number2;
    printf("%d / %d = %.2f", number1, number2, sonuc);
    break;
  case '+':
    sonuc = number1 + number2;
    printf("%d + %d = %f", number1, number2, sonuc);
    break;
  case '-':
    sonuc = number1 - number2;
    printf("%d - %d = %f", number1, number2, sonuc);
    break;
  default:
    break;
  }

  return 0;
}
