#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

#define tiempo_padre 20
#define tiempo_hijo 1

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

// El hijo se encuentra en estado zombie, porque ha terminado pero su 
// informacion no ha sido recogida por su padre.