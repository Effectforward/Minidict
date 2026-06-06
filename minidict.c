// MINI DICTIONARY BY MALIQA
#include <stdio.h>

// int inpcho(int choice)
int inpcho(int *choice) {
  printf("enter your choice :  ");
  scanf("%d", choice); // corrected &choice
  return 0;
}

int vowelcount(char word[]);

int main() {
  int c = 0;  // moved out of global
  int choice; // moved out of global

  printf(" \nenter your word to find : ");
  char word[80];
  scanf("%79s", word); // heard that this prevent buffer overflow  (changed
                       // 81->79, it's buf size minus 1)
  while ((c = getchar()) != '\n' && c != EOF)
    ; // to clean buffer if i wanna use fegts in future for a complete line

  while (1) {
    printf("\n @LOADING YOUR MENU ...\n PLEASE WAIT \n");
    printf("-------------------------------------------------------------------"
           "----------------------\n");
    printf("---------MENU--------\n");
    printf("1.Find number of vowels in your word \n");
    printf("2.Dictionary\n");
    printf("3.Exit\n");
    inpcho(&choice);

    while ((c = getchar()) != '\n' && c != EOF)
      ;

    switch (choice) {
    case 1: {
      /* printf (" \nenter your word to find : \n");
         char word[80];
         scanf("%50s",word); // heard that this prevent buffer overflow*/
      int count = vowelcount(word);
      printf("Number of vowels in your word are : %d \n ", count);
      break;
    }
    case 2:
      printf("hi");
      break;
    case 3:
      printf("olaa");
      return 0; // actually exits now
    default:
      printf("INVALID");
    }
  }
  return 0;
}

int vowelcount(char word[]) // defination
{
  int count = 0;
  for (int i = 0; word[i] != '\0'; i++) {
    char c = word[i];
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' ||
        c == 'E' || c == 'I' || c == 'O' || c == 'U') {
      count++;
    }
  }
  return count;
}