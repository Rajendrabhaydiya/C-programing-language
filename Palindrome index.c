#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STRING_LENGTH 100005 

#define TRUE 1
#define FALSE 0

int isPalindrome(char* s) {
  int isPal= TRUE;
  int len = strlen(s);
  int j;
  for (j = 0; j < (len / 2) + 1 && isPal; ++j) {
    if (s[j] != s[len - j - 1]) {
      isPal = FALSE;
    }
  }
  return isPal;
}

int main(void) {

  int i, j;
  int numTestCases;
  char s[MAX_STRING_LENGTH + 1];
  char s1[MAX_STRING_LENGTH + 1];
  int len;

  scanf("%d", &numTestCases);

  for (i = 0; i < numTestCases; ++i) {

    scanf("%s", s);

    if (isPalindrome(s)) {
      printf("-1\n");
      continue;
    }

    s1[0] = '\0';
    len = strlen(s);

    for (j = 0; j < (len / 2) + 1; ++j) {
      if (s[j] != s[len - j - 1]) {
        strncpy(s1, s, j);
        s1[j] = '\0';
        strcat(s1, &s[j + 1]);
        if (isPalindrome(s1)) {
          printf("%d\n", j);
        } else {
          printf("%d\n", len - j - 1);
        }
        break;
      }
    }
  }

  return 0;

}
