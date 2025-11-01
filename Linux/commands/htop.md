## htop, top, btop
```
0 = CPU
1
2
..
mem(RAM)
swp
```
**uptime** =  The amount of time the system has been running since it was last booted.

**load average** = The average system load (the number of processes waiting to run).

* Three numbers are shown, representing the average over:

    1 minute
    5 minutes
    15 minutes

* How to interpret:

    Value ≈ number of CPU cores → system is fine

    Value > number of CPU cores → CPU may be overloaded


**tasks** -- The number of processes and their states.


**thr** (threads): Number of threads (including user-space threads).

**kthr** (kernel threads): Number of kernel threads.

**running** -- The number of processes currently executing on the CPU.

**PID** = Process ID

**PRI** = Priority
-20(high) 〜 19
```bash
nice -n 10 myprogram
```


**NI (Nice value)**
* A user-space value that influences PRI.

**VIRT (Virtual memory size):**
* Total amount of virtual memory used by the process.

* Includes RAM, swap, and memory mapped files.

**RES (Resident memory size):**
* The portion of the process’s memory that is actually in physical RAM.

* Excludes swapped-out memory.

**SHR (Shared memory size):**
* Amount of memory shared with other processes (e.g., shared libraries).

### RAM

```bash
free -h
```
* `-h` = human readable
