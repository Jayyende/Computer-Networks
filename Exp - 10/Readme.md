# Experiment 10: Implementation of Distance Vector Algorithm

## Aim
To implement the Distance Vector Routing Algorithm using C programming.

## Theory
Distance Vector Routing is a dynamic routing algorithm used in computer networks to find the shortest path between routers.

Each router maintains a routing table containing the destination router, minimum path cost, and next hop. Routers use the cost information of neighboring routers to update their routing tables and find the best available path.

## Working
1. Enter the number of routers.
2. Enter the cost matrix representing the direct connection costs between routers.
3. Use 9999 to represent no direct connection.
4. Initialize the distance and next-hop tables.
5. Compare the available paths through intermediate routers.
6. Update the minimum path cost and next hop whenever a shorter path is found.
7. Repeat the process until no further updates occur.
8. Display the final routing tables for all routers.

## Important Terms
- **Router:** A networking device that forwards data packets between networks.
- **Cost:** The value assigned to a connection between two routers.
- **Distance Vector:** Information maintained by a router about the distance to different destinations.
- **Next Hop:** The next router through which a packet is forwarded.
- **Routing Table:** A table containing destination, cost, and next-hop information.

## Applications
1. Finding the shortest path between routers.
2. Dynamic routing in computer networks.
3. Updating routing information.
4. Efficient packet forwarding.

## Conclusion
The Distance Vector Routing Algorithm was implemented using C programming. The program calculates the minimum path cost between routers and displays the routing tables containing destination, cost, and next-hop information. This experiment helped us understand routing decisions and shortest-path selection in computer networks.

## Files
- `distance_vector.c` – C implementation of the Distance Vector Routing Algorithm.
- `README.md` – Experiment description and theory.
