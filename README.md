# 💻 Computer Networks Laboratory

![Computer Networks](https://img.shields.io/badge/Domain-Computer%20Networks-blue)
![Experiments](https://img.shields.io/badge/Experiments-12-success)
![Language](https://img.shields.io/badge/Language-C-blue)
![Documentation](https://img.shields.io/badge/Documentation-Markdown-orange)
![Status](https://img.shields.io/badge/Status-Completed-brightgreen)

## 📌 About This Repository

This repository contains the practical work completed as part of the **Computer Networks Laboratory (Semester V)**.

It includes 12 experiments covering fundamental computer networking concepts, socket programming, transport and application layer protocols, packet analysis, traffic shaping, routing algorithms, network cable configuration, and laboratory networking equipment.

Each experiment is organized into a separate folder containing relevant source code, explanations, practical outputs, and documentation wherever applicable.

The repository serves as a record of practical learning and demonstrates the implementation and analysis of important computer networking concepts.

---

## 🎯 Objectives

- Understand the fundamentals of computer networks and networking hardware.
- Learn client-server communication using TCP and UDP socket programming.
- Study Transport Layer and Application Layer protocols.
- Analyze DNS and application layer packets using network analysis tools.
- Implement flow control and traffic shaping algorithms.
- Understand routing techniques and path selection.
- Perform UTP cable crimping and verify Ethernet connections.
- Study networking devices and understand how a LAN is established.

---

## 🛠️ Technologies and Tools Used

| Technology / Tool | Purpose |
|---|---|
| C Programming | Implementing networking algorithms and socket programs |
| Ubuntu Linux | Executing socket programming practicals |
| GCC Compiler | Compiling and executing C programs |
| Wireshark | Capturing and analyzing DNS packets |
| Cisco Packet Tracer | Simulating networks and analyzing application layer packets |
| DNS Commands | Performing domain name resolution |
| RJ45 Connector | Terminating UTP Ethernet cables |
| LAN Cable Tester | Verifying Ethernet cable connections |
| Git & GitHub | Version control and project documentation |

---

## 📚 Experiments Index

### Experiment 01 – Study of Basic Hardware Components and Basic Concepts of Computer Networks

**Topics Covered:**
- Introduction to computer networks.
- LAN (Local Area Network) and WAN (Wide Area Network).
- Network devices: Hub, Switch, and Router.
- Types of networking cables.
- Basic networking hardware and their functions.

**Learning Outcome:** Understand the basic components, types, and working principles of computer networks.

---

### Experiment 02 – Socket Programming for Transport Layer Packet (TCP Server)

**Topics Covered:**
- Introduction to socket programming.
- TCP (Transmission Control Protocol).
- TCP server implementation in C.
- Socket creation, binding, listening, and accepting connections.
- Sending and receiving data between client and server.

**Important Functions:** `socket()`, `bind()`, `listen()`, `accept()`, `read()`, `send()`.

**Learning Outcome:** Understand how a TCP server establishes a connection and communicates with a client.

---

### Experiment 03 – Socket Programming for TCP Client

**Topics Covered:**
- TCP client implementation in C.
- Establishing a connection with a TCP server.
- Sending messages to the server.
- Receiving responses from the server.
- Client-server communication.

**Important Functions:** `socket()`, `connect()`, `send()`, `read()`.

**Learning Outcome:** Understand the working of a TCP client and how reliable communication takes place between client and server.

---

### Experiment 04 – Socket Programming for UDP Server

**Topics Covered:**
- Introduction to UDP (User Datagram Protocol).
- UDP server implementation in C.
- Connectionless communication.
- Receiving and sending datagrams.
- Understanding UDP communication.

**Important Functions:** `socket()`, `bind()`, `recvfrom()`, `sendto()`.

**Learning Outcome:** Understand how a UDP server receives and responds to datagrams without establishing a connection.

---

### Experiment 05 – Socket Programming for UDP Client

**Topics Covered:**
- UDP client implementation in C.
- Sending datagrams to a server.
- Receiving responses from the server.
- Connectionless client-server communication.
- Understanding the difference between TCP and UDP.

**Important Functions:** `socket()`, `sendto()`, `recvfrom()`.

**Learning Outcome:** Understand how a UDP client communicates with a server using datagrams.

---

### Experiment 06 – Analysis of Application Layer Packet (DNS) Using DNS Commands and Wireshark

**Topics Covered:**
- Introduction to DNS (Domain Name System).
- Domain name resolution.
- DNS queries and responses.
- DNS commands such as `nslookup`.
- DNS cache management.
- Packet capturing and analysis using Wireshark.
- DNS display filter and packet information.

**Tools Used:** DNS Commands, Wireshark.

**Learning Outcome:** Understand how DNS converts domain names into IP addresses and how DNS packets can be captured and analyzed.

---

### Experiment 07 – Packet Analysis Using Cisco Packet Tracer with Detailed Analysis of Application Layer Packets

**Topics Covered:**
- Introduction to the Application Layer.
- HTTP (Hypertext Transfer Protocol).
- DNS (Domain Name System).
- FTP (File Transfer Protocol).
- SMTP (Simple Mail Transfer Protocol).
- DHCP (Dynamic Host Configuration Protocol).
- Network simulation and packet analysis.
- Realtime Mode and Simulation Mode.
- Event List and PDU Information.

**Tool Used:** Cisco Packet Tracer.

**Learning Outcome:** Understand application layer communication and analyze packet movement between network devices using simulation.

---

### Experiment 08 – Implementation of Sliding Window Protocol

**Topics Covered:**
- Introduction to the Sliding Window Protocol.
- Flow control in computer networks.
- Go-Back-N ARQ technique.
- Frame transmission.
- Window size and sequence numbers.
- Acknowledgement and retransmission.

**Programming Language:** C.

**Learning Outcome:** Understand how multiple frames are transmitted using a sliding window and how acknowledgements and retransmissions support reliable data transfer.

---

### Experiment 09 – Implementation of Traffic Shaping Algorithms

**Algorithms Implemented:**

**1. Leaky Bucket Algorithm**
- Controls the rate of outgoing data.
- Transmits data at a fixed output rate.
- Stores incoming packets in a bucket.
- Discards packets when the bucket capacity is exceeded.

**2. Token Bucket Algorithm**
- Generates tokens at a fixed rate.
- Stores tokens up to a maximum bucket capacity.
- Allows packet processing when sufficient tokens are available.
- Supports controlled burst transmission.

**Programming Language:** C.

**Learning Outcome:** Understand traffic shaping techniques and how network traffic and bandwidth usage can be controlled.

---

### Experiment 10 – Implementation of Distance Vector Algorithm

**Topics Covered:**
- Introduction to routing algorithms.
- Distance Vector Routing.
- Routing tables.
- Cost matrix.
- Next-hop selection.
- Shortest-path calculation.
- Iterative routing table updates.

**Programming Language:** C.

**Learning Outcome:** Understand how routers calculate minimum path costs and select the next hop for forwarding packets.

---

### Experiment 11 – UTP Cable Crimping Using an RJ45 Connector

**Topics Covered:**
- Introduction to UTP (Unshielded Twisted Pair) cables.
- RJ45-style 8P8C connector.
- Crimping tool and LAN cable tester.
- T568A wiring standard.
- T568B wiring standard.
- Straight-through and crossover cables.
- Cable termination and verification.

**Practical Components:** UTP Cable, RJ45 Connector, Crimping Tool, LAN Cable Tester.

**Learning Outcome:** Develop practical knowledge of Ethernet cable preparation, RJ45 crimping, wiring standards, and cable testing.

---

### Experiment 12 – Case Study on Computer Networks Laboratory Equipment and Networking Information

**Topics Covered:**
- Study of networking laboratory equipment.
- Modem and Router.
- Network Switch.
- Desktop Computers.
- Smart Board.
- UTP LAN Cable and RJ45 Connector.
- Network Interface Card (NIC).
- IP Address and MAC Address.
- DHCP, DNS, and Default Gateway.
- LAN connectivity and Star Topology.
- Communication between computers and networking devices.

**Learning Outcome:** Understand how computers, switches, routers, and other networking devices are connected to form a Local Area Network (LAN).

---

## 📂 Repository Structure

The repository is organized into 12 experiment folders:

```text
Computer-Networks/
│
├── Exp - 1/
│   └── Basic Network Concepts
│
├── Exp - 2/
│   └── TCP Server
│
├── Exp - 3/
│   └── TCP Client
│
├── Exp - 4/
│   └── UDP Server
│
├── Exp - 5/
│   └── UDP Client
│
├── Exp - 6/
│   └── DNS Analysis Using Wireshark
│
├── Exp - 7/
│   └── Application Layer Packet Analysis
│
├── Exp - 8/
│   ├── README.md
│   └── sliding_window.c
│
├── Exp - 9/
│   ├── README.md
│   ├── leaky_bucket.c
│   └── token_bucket.c
│
├── Exp - 10/
│   ├── README.md
│   └── distance_vector.c
│
├── Exp - 11/
│   └── README.md
│
├── Exp - 12/
│   └── README.md
│
└── README.md
```

*Note: This is a representative overview of the repository. Individual folders may also contain practical screenshots, output files, diagrams, and other supporting material.*

---

## 📖 Key Concepts Learned

Through these experiments, the following computer networking concepts were studied and implemented:

- **Network Fundamentals:** LAN, WAN, network devices, and network topologies.
- **Socket Programming:** TCP and UDP client-server communication.
- **Application Layer:** HTTP, DNS, FTP, SMTP, and DHCP.
- **Packet Analysis:** DNS packet capture using Wireshark and application layer simulation using Cisco Packet Tracer.
- **Flow Control:** Sliding Window and Go-Back-N Protocol.
- **Traffic Management:** Leaky Bucket and Token Bucket Algorithms.
- **Routing:** Distance Vector Routing Algorithm.
- **Physical Networking:** UTP cable crimping, RJ45 connectors, and LAN cable testing.
- **Network Infrastructure:** Routers, switches, desktop computers, NICs, and LAN connectivity.

---

## 🎓 Learning Outcomes

After completing these 12 experiments, I gained practical understanding of:

1. Basic computer networking concepts and hardware components.
2. TCP and UDP communication through socket programming.
3. Application layer protocols and DNS resolution.
4. Network packet capturing, simulation, and analysis.
5. Flow control and traffic shaping techniques.
6. Routing algorithms and shortest-path selection.
7. Physical network cable termination and testing.
8. LAN architecture and communication between connected devices.

---

## 👨‍💻 Repository Information

| Detail | Information |
|---|---|
| Repository | Computer-Networks |
| Subject | Computer Networks Laboratory |
| Semester | V |
| Section | B |
| Academic Batch | 2024–2028 |
| Total Experiments | 12 |
| Programming Language | C |
| Documentation | Markdown |

---

## 🚀 How to Use This Repository

1. Clone or download this repository.
2. Open the folder of the required experiment.
3. Read the corresponding README.md file for the explanation and procedure.
4. Open the source code files for programming experiments.
5. Compile C programs using GCC.
6. Use the required networking tools for practical experiments.
7. Refer to the uploaded screenshots and output files for execution results.

### Compile and Run C Programs

```bash
gcc filename.c -o output
./output
```

*For Windows, run the generated executable using `output.exe`.*

---

## 📝 Conclusion

This repository documents the practical implementation and study of 12 experiments conducted as part of the Computer Networks Laboratory.

The experiments cover fundamental networking concepts, TCP and UDP socket programming, DNS and application layer packet analysis, flow control, traffic shaping, routing algorithms, Ethernet cable crimping, and LAN infrastructure.

By completing these experiments, theoretical networking concepts were connected with practical implementation, simulation, troubleshooting, and analysis.

**This repository serves as a complete record of the Computer Networks Laboratory practical work.**

---

⭐ If you find this repository useful for learning computer networking concepts, feel free to explore the individual experiment folders.
