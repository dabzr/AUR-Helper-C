#include "../include/aurhelper.h"

void aur_help(char* name[]){
  git_clone(name);
  make_install(name);
}

void git_clone(char* name[]){
  char cmd[100];
  char git [5]= ".git";
  strcpy(cmd, "git clone https://aur.archlinux.org/");
  strcat(cmd, name[1]);
  strcat(cmd, git);
  system(cmd);
}

void make_install (char *name[]){
  char cmd[100];
  strcpy(cmd, "./");
  strcat(cmd, name[1]);
  chdir(cmd);
  char cmd2[30];
  system("makepkg -si");
  chdir("..");
  strcpy(cmd2, "rm -rf ");
  strcat(cmd2, name[1]);
  system(cmd2);
}
