#include
int main() {
int choice;
float num1, num2, result;
printf("===== BASIC CALCULATOR =====\n");
printf("1. Addition\n");
printf("2. Subtraction\n");
printf("3. Multiplication\n");
printf("4. Division\n");
printf("5. Exit\n");
printf("------------------------------\n");
printf("Enter your choice: ");
scanf("%d", &choice;);
if(choice >= 1 && choice <= 4) {
printf("Enter first number: ");
scanf("%f", &num1;);
printf("Enter second number: ");
scanf("%f", &num2;);
}
switch(choice) {
case 1:
result = num1 + num2;
printf("Result = %.2f\n", result);
break;
case 2:
result = num1 - num2;
printf("Result = %.2f\n", result);
break;
case 3:
result = num1 * num2;
printf("Result = %.2f\n", result);
break;
case 4:
if(num2 != 0)
printf("Result = %.2f\n", n
if(num2 != 0)
printf("Result = %.2f\n", num1 / num2);
else
printf("Error! Division by zero.\n");
break;
case 5:
printf("Exiting... Thank you!\n");
break;
default:
printf("Invalid Choice!\n");
}
return 0;
}
8. Sample O