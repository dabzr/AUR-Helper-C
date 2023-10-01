#include "../include/aurhelper.h"

int main (int argc, char* argv[]){
  if (!strcmp(argv[1], "-S"))
    aur_help(argv[2]);
  else 
    printf("Not valid parameters, try ./yay-clone -S yourapp or ./bin/yay-clone -S yourapp\n");
  return 0;
}
