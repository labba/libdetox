#include <stdio.h>
#include <string.h>

void vulnerable(char *data)
{
 char buf[100];
 memcpy(buf, data, strlen(data));
}

int main(int argc, char **argv)
{
 printf("sleeping...\n");
 sleep(2);

 if(argc > 1)
 {
  vulnerable(argv[1]);
  printf("vulnerable() returned\n");
 }
 return 0;
}