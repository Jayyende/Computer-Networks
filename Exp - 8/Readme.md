# Experiment 8: Implementing Sliding Window Protocol

## Aim
To implement the Sliding Window Protocol using the Go-Back-N technique in C.

## Theory
The Sliding Window Protocol is a flow control mechanism used in computer networks to control the transmission of data frames between a sender and a receiver.

It allows the sender to transmit multiple frames before receiving acknowledgements, improving communication efficiency.

### Go-Back-N Protocol
Go-Back-N is a type of Sliding Window Protocol in which the sender can transmit multiple frames within a specified window size.

If a frame is lost or not acknowledged, the sender retransmits that frame and all subsequent frames in the current window.

### Working
1. The sender enters the total number of frames and window size.
2. Frames are assigned sequence numbers.
3. The sender transmits frames within the window.
4. The receiver receives frames and sends acknowledgements (ACK).
5. If all frames are received correctly, the sender moves to the next window.
6. If an error occurs, the sender retransmits from the first unacknowledged frame.
7. The process continues until all frames are transmitted successfully.

## Program
The C program simulates the Go-Back-N Sliding Window Protocol by displaying sender windows, transmitted frames, receiver acknowledgements, and retransmission decisions.

## Applications
- Reliable data transmission.
- Flow control in computer networks.
- Efficient transmission of multiple frames.
- Error recovery during data communication.

## Conclusion
The Sliding Window Protocol using the Go-Back-N technique was implemented in C. The experiment demonstrated frame transmission, window management, acknowledgements, and retransmission. It helped us understand how flow control and reliable data transfer work in computer networks.

## Files
- `sliding_window.c` – C implementation of Go-Back-N Sliding Window Protocol.
- `README.md` – Experiment description and theory.
