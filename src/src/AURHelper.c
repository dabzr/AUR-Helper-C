#include "../include/aurhelper.h"

void aur_help(char* name[]){
  git_clone(name); // clone the repo
  make_install(name); // make install the program and clean the build
}

void git_clone(char* name[]){
  //just git clones the arch user repository app
  char cmd[100];
  char git [5]= ".git";
  strcpy(cmd, "git clone https://aur.archlinux.org/");
  strcat(cmd, name[2]);
  strcat(cmd, git);
  system(cmd);
}

void make_install (char *name[]){
  char cmd[100];
  
  strcpy(cmd, "./");
  strcat(cmd, name[2]);
  chdir(cmd); // go to the app directory

  system("makepkg -si"); //installs the app

  chdir("..");
  strcpy(cmd, "rm -rf "); //remove the directory
  strcat(cmd, name[2]);
  system(cmd);
}
