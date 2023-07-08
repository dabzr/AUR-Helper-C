#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char* name[]){
    char cmd[1000];
    char git [5]= ".git";
    char buffer[500];
        FILE *output;
        // read output of a command
        output = popen("/bin/pwd", "r");
        char *pwd = fgets(buffer, sizeof(buffer), output);
        // strip '\n' on ending of a line
        pwd = strtok(pwd, "\n");
    strcpy(cmd, "git clone https://aur.archlinux.org/");
    strcat(cmd, name[1]);
    strcat(cmd, git);
    system(cmd);
    strcat(pwd, "/");
    strcat(pwd, name[1]);
    chdir(pwd);
    system("makepkg -si");
    }