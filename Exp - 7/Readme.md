# Experiment 7: Packet Analysis Using Cisco Packet Tracer

## Aim
To perform packet analysis using Cisco Packet Tracer and study the detailed working of Application Layer packets.

## 1. Introduction
The Application Layer is the seventh layer of the OSI (Open Systems Interconnection) model. It provides network services directly to user applications and allows communication between different devices over a network.

Application Layer protocols are used for services such as web browsing, file transfer, email communication, and domain name resolution.

Cisco Packet Tracer is a network simulation tool developed by Cisco. It allows users to create network topologies, configure network devices, simulate communication, and analyze the flow of packets through a network.

## 2. Theory

### What is the Application Layer?
The Application Layer is the topmost layer of the OSI model. It acts as an interface between user applications and network services.

It provides services that allow users and applications to communicate over a network.

### Functions of the Application Layer
1. Provides network services to user applications.
2. Supports communication between client and server devices.
3. Enables file transfer and web browsing.
4. Supports email communication.
5. Provides domain name resolution.
6. Helps applications access network resources.

### Application Layer Protocols

| Protocol | Full Form | Purpose | Default Port |
|---|---|---|---|
| HTTP | Hypertext Transfer Protocol | Transfers web pages | 80 |
| HTTPS | Hypertext Transfer Protocol Secure | Secure web communication | 443 |
| DNS | Domain Name System | Converts domain names into IP addresses | 53 |
| FTP | File Transfer Protocol | Transfers files between systems | 20 and 21 |
| SMTP | Simple Mail Transfer Protocol | Sends email messages | 25 |
| POP3 | Post Office Protocol Version 3 | Retrieves email messages | 110 |
| DHCP | Dynamic Host Configuration Protocol | Automatically assigns IP addresses | 67 and 68 |

*Note: These are commonly used default ports. Some protocols may use different ports depending on their configuration.*

## 3. What is Cisco Packet Tracer?
Cisco Packet Tracer is a network simulation and visualization tool used to design, configure, and troubleshoot computer networks.

It allows users to:
- Create network topologies.
- Connect computers, switches, routers, and servers.
- Configure IP addresses and network services.
- Simulate communication between devices.
- Observe packet movement through the network.
- Inspect packet information using the Simulation Mode.

## 4. Network Simulation

### Basic Network Components
The network simulation can include the following components:

1. **PC:** Acts as a client device that sends and receives network requests.
2. **Server:** Provides services such as HTTP, DNS, FTP, or email.
3. **Switch:** Connects multiple devices within a Local Area Network.
4. **Router:** Connects different networks and forwards packets between them.
5. **Connections:** Ethernet cables are used to connect the network devices.

### Working of the Network
1. The client computer generates a request for a network service.
2. The request is converted into packets for transmission.
3. The packets travel through the network devices.
4. The server receives and processes the request.
5. The server generates a response.
6. The response travels back to the client.
7. The communication can be observed and analyzed in Cisco Packet Tracer.

## 5. Packet Analysis Using Cisco Packet Tracer

### Simulation Mode
Cisco Packet Tracer provides two main working modes:

**1. Realtime Mode**
- Displays network communication in real time.
- Packets move automatically through the network.
- Used to test basic network connectivity and services.

**2. Simulation Mode**
- Allows users to observe packet movement step by step.
- Displays packets in the Event List.
- Provides detailed PDU information.
- Helps analyze the protocols involved in communication.

### Procedure
1. Open Cisco Packet Tracer.
2. Create a network topology using PCs, a switch, a router, and a server as required.
3. Connect the devices using suitable network cables.
4. Configure the required IP addresses and default gateways.
5. Configure the required application services on the server, such as HTTP or DNS.
6. Configure the client devices to access the required network services.
7. Switch from Realtime Mode to Simulation Mode.
8. Generate network traffic by accessing a web page, performing a DNS lookup, or using another configured application service.
9. Observe the packets appearing in the Event List.
10. Select a packet and open its PDU Information window.
11. Examine the packet details and the OSI Model information.
12. Use Capture/Forward to observe the packet movement step by step.
13. Analyze the request and response packets and record the observations.

## 6. Detailed Analysis of Application Layer Packets

Application Layer packet analysis helps us understand how different network applications communicate with servers.

### 1. HTTP Analysis
- HTTP stands for Hypertext Transfer Protocol.
- It is used to transfer web pages between web clients and servers.
- It commonly uses TCP port 80.
- The client sends an HTTP request to the web server.
- The server processes the request and returns an HTTP response.

### 2. DNS Analysis
- DNS stands for Domain Name System.
- It converts domain names into corresponding IP addresses.
- It commonly uses UDP port 53, although TCP is also used.
- The client sends a DNS query to the DNS server.
- The DNS server returns the requested DNS information.

### 3. FTP Analysis
- FTP stands for File Transfer Protocol.
- It is used to transfer files between a client and a server.
- It commonly uses TCP ports 20 and 21.
- It supports file uploading and downloading.

### 4. SMTP Analysis
- SMTP stands for Simple Mail Transfer Protocol.
- It is used to send email messages.
- Its traditional default port is TCP port 25.
- It allows email clients and servers to exchange outgoing email messages.

### 5. DHCP Analysis
- DHCP stands for Dynamic Host Configuration Protocol.
- It automatically assigns IP configuration to devices.
- It uses UDP ports 67 and 68.
- It reduces the need for manual IP address configuration.

## 7. Important Packet Details Observed

While analyzing packets in Cisco Packet Tracer, the following details can be examined:

| Field | Description |
|---|---|
| Source Address | Address of the device sending the packet |
| Destination Address | Address of the receiving device |
| Protocol | Protocol used for communication |
| Source Port | Port number of the sending application |
| Destination Port | Port number of the receiving application |
| PDU | Protocol Data Unit containing protocol information |
| OSI Model | Shows how the packet is processed through the OSI layers |
| Event List | Displays the sequence of packet events |

### PDU Information
PDU stands for Protocol Data Unit. It represents the data exchanged at a particular network layer.

Cisco Packet Tracer provides PDU details to help users understand how information is encapsulated and processed across network layers.

## 8. Output Analysis

The simulation results help us understand the communication between client and server devices.

The Event List displays the sequence of packet transmission and reception. The PDU Information window provides details about the packet, including protocol information, source and destination addresses, and OSI layer processing.

The HTTP, DNS, FTP, SMTP, and DHCP protocols demonstrate different types of Application Layer services.

By using Simulation Mode and Capture/Forward, packet movement and communication can be studied step by step.

## 9. Applications
1. Understanding client-server communication.
2. Analyzing web browsing and HTTP communication.
3. Studying DNS name resolution.
4. Understanding file transfer using FTP.
5. Learning email communication using SMTP.
6. Studying automatic IP configuration using DHCP.
7. Learning network troubleshooting and packet analysis.

## 10. Conclusion
In this experiment, packet analysis was performed using Cisco Packet Tracer. The Simulation Mode, Event List, and PDU Information features were studied to understand packet transmission and communication between network devices. Different Application Layer protocols, including HTTP, DNS, FTP, SMTP, and DHCP, were examined. This experiment helped us understand the role of the Application Layer and the working of network communication.
