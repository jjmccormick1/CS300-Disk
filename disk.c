#include <stdio.h>
#include <stdlib.h>
//Disk program to handle disk requests
//Loads the queue then process the queue over and over again
//Keep doing until the file empties

long q[10000];
int qi = 0;

typedef struct {
    loc : 30;
    proc : 30;
}rec;

typedef union {
    rec x;
    long y;
}rec_un;

void enqueue(long in) {
    q[qi++] = in;

long dequeue(int pos) {
    int r = q[pos];
    q[pos] = q[--qi];
    return r;
}

int load_q(int time) {//time tells us what time it is in disk time
        //Disk uses time to enqueue everything smaller than or equal to 
        //what time it is
    int loc;
    int t;
    int proc;
    rec_un x;
    
    scanf("%d%d%d\n", &t, &loc, &proc);
    x.x.loc = loc;
    x.x.proc = proc;
    enqueue(x.y);
}

int main (void) {
    while(!EOF) {S
        LOAD
        Process
    }
}

