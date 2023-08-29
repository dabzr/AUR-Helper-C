#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char* name[]){
    char cmd[1000];
    char git [5]= ".git";
    char cmd2[100];
    strcpy(cmd, "git clone https://aur.archlinux.org/");
    strcat(cmd, name[1]);
    strcat(cmd, git);
    system(cmd);
    strcpy(cmd2, "./");
    strcat(cmd2, name[1]);
    chdir(cmd2);
    system("makepkg -si");
    }
