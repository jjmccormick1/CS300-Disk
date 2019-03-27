#include <stdio.h>
#include <stdlib.h>
#include "disk.h"
//Disk program to handle disk requests
//Loads the queue then process the queue over and over again
//Keep doing until the file empties

request q[10000];
int qi = 0;
int time = 0;
FILE * file;

void enqueue(request in) {
    q[qi++] = in;
}
request dequeue(int pos) {
    request r = q[pos];
    q[pos] = q[--qi];
    return r;
}

int load_q(int time) {//time tells us what time it is in disk time
        //Disk uses time to enqueue everything smaller than or equal to 
        //what time it is
    int loc;
    int t;
    int proc;
    while(t <= time && feof(file)) {
        request x;
        fscanf(file, "%d%d%d\n", &t, &loc, &proc);
        x.loc = loc;
        x.proc = proc;
        enqueue(x);
    }
}

int main (int argc, char** argv) {
    file = fopen(argv[1],"r");

    while(!feof(file)) {
        load_q(time);
        Process
    }
    return 0;
}

