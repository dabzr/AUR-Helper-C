#include "../include/aurhelper.h"

int main (int argc, char* name[]){
  char install_parameter[3] = "-S";
  if ((name[1][0] == install_parameter[0])&&(name[1][1] == install_parameter[1]))
    aur_help(name);
  else 
    printf("Not valid parameters, try ./yay-clone -S yourapp or ./bin/yay-clone -S yourapp\n");
  return 0;
}
