#include "../include/aurhelper.h"

int main (int argc, char* argv[]){
  if (argc != 3 || strcmp(argv[1], "-S")){
    printf("Not valid parameters try:\n\t %s -S <your-app>\n", argv[0]);
    exit(1);
  }

  aur_help(argv[2]);
  return 0;
    
}
