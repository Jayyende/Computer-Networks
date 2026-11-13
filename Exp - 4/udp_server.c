#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <netinet/in.h>

#define PORT 12000
#define BUF_SIZE 1024

int main()
{
    int sockfd;
    char buffer[BUF_SIZE];

    struct sockaddr_in server_addr, client_addr;

    socklen_t len = sizeof(client_addr);

    sockfd = socket(AF_INET, SOCK_DGRAM, 0);

    server_addr.sin_family = AF_INET;
    server_addr.sin_addr.s_addr = INADDR_ANY;
    server_addr.sin_port = htons(PORT);

    bind(sockfd, (struct sockaddr *)&server_addr,
         sizeof(server_addr));

    printf("UDP Server listening on port %d...\n", PORT);

    while(1)
    {
        memset(buffer,0,BUF_SIZE);

        recvfrom(sockfd,
                 buffer,
                 BUF_SIZE,
                 0,
                 (struct sockaddr *)&client_addr,
                 &len);

        printf("Received: %s", buffer);

        sendto(sockfd,
               buffer,
               strlen(buffer),
               0,
               (struct sockaddr *)&client_addr,
               len);
    }

    close(sockfd);

    return 0;
}
