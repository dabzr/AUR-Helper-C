#include "../include/aurhelper.h"

int main (int argc, char* argv[]){

  if (strcmp(argv[1], "-S")){
    fprintf(stderr, "Not valid parameters, try ./yay-clone -S yourapp or ./bin/yay-clone -S yourapp\n");
    return 1;
  }

  aur_help(argv[2]);    
}
