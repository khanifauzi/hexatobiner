#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int hexChar(char hex)
{
  char charHex[16] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
  int i, hasil = 0;

  for(i=0; i<16; i++)
  {
    if(charHex[i] == hex){
      hasil = i;
    }
  }
  return hasil;
}

void hexToBin(char hex[])
{
  int panjangHexa = strlen(hex);
  int i, dec = 0;

  for(i=0; i<panjangHexa; i++){
    // printf("(%d * %d^%d) + ",hexChar(hex[i]),16,(panjangHexa-i-1));
    dec += hexChar(hex[i]) * pow(16,(panjangHexa-i-1));
  }

  // printf("%d", dec);

  while(dec > 0){
    printf("%d", (dec%2));
    dec = dec/2;
  }
}

int main()
{
  char hex[2];
  printf("Masukkan Hex : ");
  fgets(hex, 3, stdin);
  hexToBin(hex);
  return 0;
}
