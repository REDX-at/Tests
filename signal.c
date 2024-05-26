#include <signal.h>

int main() {
    sigset_t my_signal_set;

    // Initialize an empty signal set
    if (sigemptyset(&my_signal_set) == -1) {
        // Handle initialization error
    }

    kill(getpid(), SIGINT);
    // Further code can selectively add specific signals to my_signal_set
    sigaddset(&my_signal_set, SIGINT);

    // Use my_signal_set in signal handling or sigprocmask...

    return 0;
}
