# Experiment 6: DNS Analysis Using DNS Commands and Wireshark

## Aim
To analyze Application Layer packets (DNS) using DNS commands and perform packet analysis using Wireshark.

## 1. Introduction
DNS (Domain Name System) is an Application Layer protocol used to translate human-readable domain names into their corresponding IP addresses. It allows users to access websites using names such as `www.google.com` instead of remembering numerical IP addresses.

DNS plays an important role in communication between clients and servers over a network.

## 2. Theory

### What is DNS?
DNS stands for Domain Name System. It works like the phonebook of the internet by converting domain names into IP addresses.

For example:
- Domain Name: `www.google.com`
- DNS Server: Resolves the domain name.
- Result: The corresponding IP address is returned.

### Working of DNS
1. The user enters a domain name in a browser or command terminal.
2. The computer checks its local DNS cache.
3. If the required record is not available, the computer sends a DNS query to a DNS server.
4. The DNS server resolves the requested domain name.
5. The DNS server sends a DNS response containing the requested information.
6. The computer uses the returned IP address to communicate with the destination server.

### DNS Protocol Details
- OSI Layer: Application Layer (Layer 7)
- Protocol: DNS
- Default Port: 53
- Transport Protocol: Mainly UDP; TCP is also used in certain situations.
- Purpose: Domain name resolution.

## 3. DNS Commands

### 1. nslookup
Used to find the IP address associated with a domain name.

Command:
```bash
nslookup google.com
```

Explanation: Displays the DNS server information and the IP address returned for the requested domain.

### 2. nslookup with a Specific DNS Server
Used to query a domain using a particular DNS server.

Command:
```bash
nslookup google.com 8.8.8.8
```

Explanation: Sends the DNS query to Google's public DNS server.

### 3. Display DNS Cache (Windows)
Command:
```cmd
ipconfig /displaydns
```

Explanation: Displays DNS records stored in the local DNS resolver cache.

### 4. Flush DNS Cache (Windows)
Command:
```cmd
ipconfig /flushdns
```

Explanation: Clears the local DNS resolver cache so that future lookups can obtain updated records.

## 4. DNS Packet Analysis Using Wireshark

### What is Wireshark?
Wireshark is a network protocol analyzer used to capture and inspect network packets. It helps us understand how data is transmitted between devices over a network.

It can capture DNS queries and responses and display their packet details.

### Procedure
1. Open Wireshark on the computer.
2. Select the active network interface, such as Wi-Fi or Ethernet.
3. Start capturing network packets.
4. Open a terminal or command prompt.
5. Execute a DNS command, for example:
   ```bash
   nslookup google.com
   ```
6. Return to Wireshark and apply the display filter:
   ```text
   dns
   ```
7. Observe the DNS query and response packets.
8. Select a packet to inspect its detailed information.
9. Examine the source address, destination address, query name, record type, and response details.
10. Stop the packet capture after completing the analysis.

## 5. Important Fields Observed in Wireshark

| Field | Description |
|---|---|
| Source IP | IP address of the device sending the packet |
| Destination IP | IP address of the receiving device |
| Transaction ID | Identifier used to match a DNS query with its response |
| Query Name | Domain name requested by the client |
| Query Type | Type of DNS record requested |
| Response | Information returned by the DNS server |
| Port Number | DNS commonly uses port 53 |

## 6. Types of DNS Records

| Record | Purpose |
|---|---|
| A | Maps a domain name to an IPv4 address |
| AAAA | Maps a domain name to an IPv6 address |
| MX | Identifies mail servers for a domain |
| CNAME | Creates an alias for another domain name |
| NS | Identifies authoritative name servers |
| PTR | Used for reverse DNS lookup |

## 7. Output Analysis

### DNS Command Analysis
The DNS command output demonstrates how a domain name is resolved into its corresponding IP address. The `nslookup` command displays the DNS server used and the address information returned for the requested domain.

The DNS cache commands demonstrate how previously resolved records can be displayed and cleared on Windows systems.

### Wireshark Packet Analysis
Wireshark captures DNS communication between the client and the DNS server.

The DNS query packet contains the requested domain name and query type. The DNS response packet contains the corresponding DNS information when the query is successful.

The captured packets help identify the source and destination IP addresses, DNS transaction ID, query name, and response details.

## 8. Applications of DNS
1. Converts domain names into IP addresses.
2. Helps users access websites easily.
3. Supports email delivery through MX records.
4. Helps locate network services.
5. Supports communication between clients and servers.

## 9. Conclusion
In this experiment, DNS commands were executed to understand domain name resolution. DNS query and response packets were captured and analyzed using Wireshark. The experiment helped us understand the working of DNS at the Application Layer and how DNS communication takes place over a network.

## 10. Screenshots
The screenshots of DNS command execution and Wireshark packet analysis are included in this experiment folder for reference.
