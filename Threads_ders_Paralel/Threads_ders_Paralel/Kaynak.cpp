#define HAVE_STRUCT_TIMESPEC
#include <Windows.h>
#include <process.h> //process
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <chrono> //time
#include <pthread.h> //paralel


#define NTHREADS 8

void *PrintHello(void *threadid) {
	long tid;
	tid = (long)threadid;
	printf("Hello World! #%ld!\n", tid);
	printf("It's me,thread #%ld!\n", tid);
	pthread_exit(NULL);
	return 0;
		

}

void fPrint() {
	pthread_t threads[NTHREADS];
	int rc;
	long t;
	for (t = 0; t < NTHREADS; t++) {
		printf("In main: creating thread %ld\n", t);
		rc = pthread_create(&threads[t], NULL, PrintHello, (void *)t);

		if (rc) {
			printf("ERROR; return code from pthread_create() is %d\n", rc);
			exit(-1);
		}


	}

	getchar();
	pthread_exit(NULL);
}

void main(int argc, char *argv[]) {
	fPrint();
	//fTest();
	getchar();
}