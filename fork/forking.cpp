#include <iostream> //print to io
#include <stdlib.h> // exit call
#include <unistd.h> //
#include <sys/wait.h> // wait call

using namespace std;


int main() {


    int ppid = getpid();

    cout << "parent PID : " << ppid << endl;

    int pid = fork(); //returns process ID

    cout << pid << endl;


}

