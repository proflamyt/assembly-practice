#include <iostream> //print to io
#include <stdlib.h> // exit call
#include <unistd.h> //
#include <sys/wait.h> // wait call

using namespace std;


int main() {

    int pid = fork(); //returns process ID

    if (pid == 0) {
        int childPid = getpid();

        cout << "child proc ID is " << childPid << endl;

        // run code in child process

        int rc = execlp("/bin/ls", "ls", "-l", (char *) 0 );

    }
    else {
        int status;
        int waitPid = wait(&status);

        cout << "child proc ID is " << waitPid << endl;

        cout << pid << endl;
    }

    


}
