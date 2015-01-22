#include <stdio.h>

int main() {
  unsigned int nb;
  int i,j,test;
  FILE *fp;
  fp=fopen("/dev/random","r");
  fread(&nb,sizeof(nb),1,fp);
  fclose(fp);
  nb=nb%1000;
  printf("La valeur random est: %d\r\n",nb);
  i=2;
  while(i!=nb){
    test=0;
    for(j=2;j<=i-1;j++){
       if(i%j==0){
         test=1;
         break;
       }
    }
    if(test==0){
      printf("%d \r\n",j);
    }
    i++;  	
  }
  return 0;
}
