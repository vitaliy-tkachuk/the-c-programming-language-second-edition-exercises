#include <stdio.h>

int main(void) {
  int c, blanks, tabs, newLines;
  newLines = 0;
  blanks = 0;
  tabs = 0;

  printf("Type your text, then use Ctrl+D to see results:\n");
  while ((c = getchar()) != EOF) {
    if (c == '\n')
      ++newLines;
    else if (c == ' ')
      ++blanks;
    else if (c == '\t')
      ++tabs;
  }
  printf("New lines: %d\nBlanks: %d\nTabs: %d\n", newLines, blanks, tabs);
  return 0;
}
