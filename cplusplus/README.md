# C++ THREADING

Threads are unit of execution in a process. We can simply describe a process as a program running in memory. 

Assuming you click VLC executable (VLC.exe) , this creates the vlc program process by telling the operating system to create a virtual memory address space , making the vlc program thinks it is the only application running on the memory.
By doing this , the O.S seperates the program (VLC in our case) and keeps it from communicating and interacting with other processes on the operating system unless it follows a said protocol *IPC* inter process communication.

Now speaking of THREADS, most process has a single unit of execution called the main thread , this way the programmer directs the process to execute instructions sequencially, step by step, instruction by instruction. But come to think of it , imagine watching a movie on VLC and being unable to forward or listen to the audio at the same time. that's unforgiveable.
this is where multithreadings come in. several units of thesame process executing at once. one running without interfering with another.

This program shows a multithreaded application written in C++. 

Looking at the program we have the main thread which is running the main function and the another thread called bgWorker.

This create a seperate thread called a bgWorker which takes in *RefreshForecast* as the function to execute and  *forecastTable* as the argument to this function.

```
std::thread bgWorker(RefreshForecast, forecastTable);

```


