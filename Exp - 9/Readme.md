# Experiment 9: Implementation of Traffic Shaping Algorithms

## Aim
To implement Traffic Shaping Algorithms:
1. Leaky Bucket Algorithm.
2. Token Bucket Algorithm.

## 1. Leaky Bucket Algorithm

### Theory
The Leaky Bucket Algorithm is a traffic shaping technique used to control the rate of data transmission over a network.

It works like a bucket with a small hole. Incoming packets are stored in the bucket, and data is transmitted at a fixed output rate. If the bucket becomes full, additional incoming packets are discarded.

### Working
1. Packets arrive at different time intervals.
2. Packets are inserted into the bucket if sufficient space is available.
3. Data is transmitted at a fixed output rate.
4. If the bucket is full, incoming packets are discarded.

## 2. Token Bucket Algorithm

### Theory
The Token Bucket Algorithm is a traffic shaping technique that controls network traffic using tokens.

Tokens are generated at a fixed rate and stored in a bucket. A packet can be transmitted only when sufficient tokens are available. If enough tokens are not available, the packet cannot be processed.

### Working
1. Tokens are generated at a fixed rate.
2. Generated tokens are stored in the bucket.
3. Incoming packets require tokens for processing.
4. Tokens are removed when a packet is successfully processed.
5. The bucket cannot store more than its maximum capacity.

## Difference Between the Algorithms

| Leaky Bucket | Token Bucket |
|---|---|
| Transmits data at a fixed rate. | Allows transmission depending on available tokens. |
| Excess packets may be discarded when the bucket is full. | Packets wait or are rejected if insufficient tokens are available, depending on implementation. |
| Produces a more uniform output rate. | Allows bursts when sufficient tokens are stored. |

## Applications
- Network traffic management.
- Congestion control.
- Bandwidth management.
- Controlling data transmission rates.
- Improving network performance.

## Conclusion
Both Leaky Bucket and Token Bucket Algorithms were implemented in C. The Leaky Bucket Algorithm controls traffic using a fixed output rate, while the Token Bucket Algorithm controls packet processing using generated tokens. The experiment helped us understand traffic shaping and bandwidth management in computer networks.

## Files
- `leaky_bucket.c` – Implementation of Leaky Bucket Algorithm.
- `token_bucket.c` – Implementation of Token Bucket Algorithm.
- `README.md` – Experiment description and theory.
