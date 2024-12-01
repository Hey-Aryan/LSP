
#include <stdio.h>
#include <unistd.h>

int main() {
    long pageSize = sysconf(_SC_PAGESIZE);
    long maxOpenFiles = sysconf(_SC_OPEN_MAX);
    long maxChildProcesses = sysconf(_SC_CHILD_MAX);
    long clockTicksPerSecond = sysconf(_SC_CLK_TCK);
    long maxHostNameLength = sysconf(_SC_HOST_NAME_MAX);
    long maxPathLength = pathconf("/", _PC_PATH_MAX);

    if (pageSize == -1 || maxOpenFiles == -1 || maxChildProcesses == -1 ||
        clockTicksPerSecond == -1 || maxHostNameLength == -1 || maxPathLength == -1) {
        perror("sysconf");
        return 1;
    }

    printf("Page Size: %ld bytes\n", pageSize);
    printf("Maximum Number of Open Files: %ld\n", maxOpenFiles);
    printf("Maximum Number of Child Processes: %ld\n", maxChildProcesses);
    printf("Clock Ticks Per Second: %ld\n", clockTicksPerSecond);
    printf("Maximum Host Name Length: %ld\n", maxHostNameLength);
    printf("Maximum Path Length: %ld\n", maxPathLength);

    return 0;
}
