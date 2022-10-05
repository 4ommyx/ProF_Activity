#include <stdio.h>
#include <string.h>

int main()
{
  char n[100];
  FILE *fp;
  fp = fopen("score.txt", "w");
  struct player
  {
    char name[100];
    int level;
    int score;
  };
  struct player p[5], *ptn;
  for (int i = 0; i < 5; i++)
  {
    scanf("%s %d %d", n, &p[i].level, &p[i].score);
    strcpy(p[i].name, n);
  }
  ptn = p;
  for (int i = 0; i < 5; i++)
  {
    fprintf(fp, "%s %d %d\n", ptn->name, ptn->level, ptn->score);
    ptn++;
  }
  fclose(fp);

  return 0;
}