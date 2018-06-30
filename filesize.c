#include<stdio.h>

main()
{
  FILE *fp;
  char filename[80];
  long length;
  
  printf("Enter the file name");
  gets(filename);
  fp=fopen(filename,"rb");
  
  if(fp==NULL)
  {
    printf("File not found\n");
  }
  else
  {
    fseek(fp,0L,SEEK_END);
    length=ftell(fp);
    printf("Size of the file is %ldB in bytes\n",length);
    fclose(fp);
  }
}
  
