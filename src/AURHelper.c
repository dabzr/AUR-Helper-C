#include "../include/aurhelper.h"

void aur_help(char* repository_name){
  git_clone(repository_name);
  make_install(repository_name);
}

void git_clone(char* repository_name){
  char clone_command[100] = "git clone https://aur.archlinux.org/";
  strcat(clone_command, repository_name);
  strcat(clone_command, ".git");
  system(clone_command);
}

void clean_build(char *repository_name){
  char rmdir[100] = "rm -rf ";
  strcpy(rmdir, "rm -rf "); //remove the directory
  strcat(rmdir, repository_name);
  system(rmdir);

}
void make_install (char* repository_name){

  chdir(repository_name);

  system("makepkg -si");

  chdir("..");
  clean_build(repository_name);
}
