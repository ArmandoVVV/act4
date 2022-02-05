#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

#define tiempo_padre 1
#define tiempo_hijo 20

int main(){
    int p;
    p = fork();

    if(p == 0){
        printf("soy el hijo PID[%d]\n", getpid());
        sleep(tiempo_hijo);
    }
    else{
        printf("soy el padre PID[%d]\n", getpid());
        sleep(tiempo_padre);
    }
}

// El padre ya completó su proceso por lo tanto ya no está corriendo el
// proceso padre.