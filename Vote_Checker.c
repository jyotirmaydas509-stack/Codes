#include <stdio.h>
int main() {
    char name[100];
    printf("Input your name:\n");
    scanf("%99s", name);
    int age;
    printf("Input your age:\n");
    scanf("%d", &age);
    if (age >= 18) {
        printf("Hello %s, you are an adult.\n", name);
    } else {
        printf("Hello %s, you are a minor and will be eligible after %d years.\n", name, 18 - age);
    }
    return 0;
}


#include <stdio.h>
 int main(){
    int year;
    printf("Input a year:\n");
    scanf("%d", &year);
  if(year%4==0 && year%100!=0 || year%400==0){
    printf("%d is a leap year.\n", year);
  } else { 
    printf("%d is not a leap year.\n", year);
  }
    return 0;
 }


 #include <stdio.h>
 int main(){
  double rating;
  printf("Input your rating (1-5):\n");
  scanf("%lf", &rating);

  if (rating <= 2.0) {
    printf("You rated us %lf. (Flop)\n", rating);
  } else if (rating <= 3.4) {
    printf("You rated us %lf. (Semi-Hit)\n", rating);
  } else if (rating <= 4.5) {
    printf("You rated us %lf. (Hit)\n", rating);
  } else if (rating <= 5.0) {
    printf("You rated us %lf. (Super Hit)\n", rating);
  } else {
    printf("You rated us %lf. We appreciate your high rating!\n", rating);
  }
  return 0;
 }


 