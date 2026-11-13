
#include <stdio.h>

#define MAX_FRAMES 50

void sender(int frames[], int size, int window_size);
void receiver(int frames[], int start, int count);

int main() {
    int n, window_size;
    int frames[MAX_FRAMES];

    printf("Sliding Window Protocol Simulation (Go-Back-N)\n");

    printf("Enter number of frames to send (max 50): ");
    scanf("%d", &n);

    if (n <= 0 || n > MAX_FRAMES) {
        printf("Invalid number of frames.\n");
        return 0;
    }

    printf("Enter window size: ");
    scanf("%d", &window_size);

    if (window_size <= 0 || window_size > n) {
        printf("Invalid window size.\n");
        return 0;
    }

    // Assign sequence numbers to frames
    for (int i = 0; i < n; i++) {
        frames[i] = i;
    }

    sender(frames, n, window_size);

    return 0;
}

void sender(int frames[], int size, int window_size) {
    int base = 0;
    char choice;

    while (base < size) {

        int count = (size - base < window_size)
                    ? size - base : window_size;

        printf("\nSender window: ");

        for (int i = base; i < base + count; i++) {
            printf("[%d] ", frames[i]);
        }

        printf("\nSending frames...\n");

        for (int i = base; i < base + count; i++) {
            printf("Sent frame: %d\n", frames[i]);
        }

        printf("\nSimulating receiver...\n");

        receiver(frames, base, count);

        printf("\nDid all frames receive correctly? (y/n): ");
        scanf(" %c", &choice);

        if (choice == 'y' || choice == 'Y') {
            base += count;
        } else {
            printf("Resending from frame %d...\n",
                   frames[base]);

            // Go-Back-N: retransmit from the
            // first unacknowledged frame.
        }
    }

    printf("\nAll frames sent successfully!\n");
}

void receiver(int frames[], int start, int count) {
    for (int i = start; i < start + count; i++) {
        printf("Received frame: %d, sending ACK: %d\n",
               frames[i], frames[i] + 1);
    }
}
