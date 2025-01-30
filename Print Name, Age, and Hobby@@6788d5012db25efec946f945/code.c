#include <stdio.h>
int main() {
  char name[50], hobby[50];
  int age;
  scanf("%s", name);
  scanf("%d",&age);
  getchar();
  fgets(hobby, sizeof(hobby), stdin);
  if (hobby[strlen(hobby) - 1] == '\n')  {
      hobby[strlen(hobby) - 1] = '\0';
  }
   
  printf("Name: %s\n", name);
  printf("Age: %d\n", age);
  printf("Hobby: %s\n", hobby);
    return 0;
}