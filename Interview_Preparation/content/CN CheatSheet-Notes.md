## CN (Computer Networks) mostly asked Questions and Answers

### 1. What is a network?
- A network is a set of devices that are connected with a physical media link. In a network, two or more nodes are connected by a physical link or two or more networks are connected by one or more nodes.
- A network is a collection of devices connected to each other to allow the sharing of data.
- Example of a network is an internet. An internet connects the millions of people across the world.

### 2. What do you mean by network topology?
Network topology specifies the layout of a computer network. It shows how devices and cables are connected to each other.  
The types of topologies are:

    
- Bus
  - Bus topology is a network topology in which all the nodes are connected to a single cable known as a central cable or bus.
  - It acts as a shared communication medium, i.e., if any device wants to send the data to other devices, then it will send the data over the bus which in turn sends the data to all the attached devices.
  - Bus topology is useful for a small number of devices. As if the bus is damaged then the whole network fails.
    
- Star
  - Star topology is a network topology in which all the nodes are connected to a single device known as a central device.
  - Star topology requires more cable compared to other topologies. Therefore, it is more robust as a failure in one cable will only disconnect a specific computer connected to this cable.
  - If the central device is damaged, then the whole network fails.
  - Star topology is very easy to install, manage and troubleshoot.
  - Star topology is commonly used in office and home networks.
      
- Ring
  - Ring topology is a network topology in which nodes are exactly connected to two or more nodes and thus, forming a single continuous path for the transmission.
  - It does not need any central server to control the connectivity among the nodes.
  - If the single node is damaged, then the whole network fails.
  - Ring topology is very rarely used as it is expensive, difficult to install and manage.
  - Examples of Ring topology are SONET network, SDH network, etc.
      
- Mesh
  - Mesh topology is a network topology in which all the nodes are individually connected to other nodes.
  - It does not need any central switch or hub to control the connectivity among the nodes.
  - Mesh topology is categorized into two parts:
    - **Fully connected mesh topology**: In this topology, all the nodes are connected to each other.
    - **Partially connected mesh topology**: In this topology, all the nodes are not connected to each other.
  - It is a robust as a failure in one cable will only disconnect the specified computer connected to this cable.
  - Mesh topology is rarely used as installation and configuration are difficult when connectivity gets more.
  - Cabling cost is high as it requires bulk wiring.
  
### 3. What is the criteria to check the network reliability?
Network reliability means the ability of the network to carry out the desired operation through a network such as communication through a network.

Network reliability plays a significant role in the network functionality. The network monitoring systems and devices are the essential requirements for making the network reliable.The network monitoring system identifies the problems that are occurred in the network while the network devices ensure that data should reach the appropriate destination.

The reliability of a network can be measured by the following factors:

- Downtime: The downtime is defined as the required time to recover.
- Failure Frequency: It is the frequency when it fails to work the way it is intended.
- Catastrophe: It indicates that the network has been attacked by some unexpected event such as fire, earthquake.
### 4. Which are the different factors that affect the security of a network?
There are mainly two security affecting factors:

- Unauthorized Access
- Viruses

### 5. Which are the different factors that affect the performance of a network?
The following factors affect the performance of a network:

- Large number of users
- Transmission medium types
- Hardware
- Software

### 6. What is bandwidth?
Every signal has a limit of upper range frequency and lower range frequency. The range of limit of network between its upper and lower frequency is called bandwidth.

### 7. What is a gateway? Is there any difference between a gateway and router?
A node that is connected to two or more networks is commonly known as a gateway. It is also known as a router. It is used to forward messages from one network to another. **Both the gateway and router regulate the traffic in the network.**

**Differences between gateway and router:**

A router sends the data between two similar networks while gateway sends the data between two dissimilar networks.

### 8. What is DNS?
DNS is an acronym stands for Domain Name System.

- DNS was introduced by Paul Mockapetris and Jon Postel in 1983.
- It is a naming system for all the resources over the internet which includes physical nodes and applications. It is used to locate to resource easily over a network.
- DNS is an internet which maps the domain names to their associated IP addresses.
- Without DNS, users must know the IP address of the web page that you wanted to access.

**Working of DNS:**

If you want to visit the website of "Nikhil", then the user will type "https://www.nikhil.com" into the address bar of the web browser. Once the domain name is entered, then the domain name system will translate the domain name into the IP address which can be easily interpreted by the computer. Using the IP address, the computer can locate the web page requested by the user.

### 9. What is DNS forwarder?
- A forwarder is used with DNS server when it receives DNS queries that cannot be resolved quickly. So it forwards those requests to external DNS servers for resolution.
- A DNS server which is configured as a forwarder will behave differently than the DNS server which is not configured as a forwarder.
- **Following are the ways that the DNS server behaves when it is configured as a forwarder:**
  - When the DNS server receives the query, then it resolves the query by using a cache.
  - If the DNS server is not able to resolve the query, then it forwards the query to another DNS server.
  - If the forwarder is not available, then it will try to resolve the query by using root hint.

### 10. What is NIC?
- NIC stands for Network Interface Card. It is a peripheral card attached to the PC to connect to a network. Every NIC has its own MAC address that identifies the PC on the network.
- It provides a wireless connection to a local area network.
- NICs were mainly used in desktop computers.

### 11. What is NOS in computer networking?
- NOS stands for Network Operating System. It is specialized software which is used to provide network connectivity to a computer to make communication possible with other computers and connected devices.
- NOS is the software which allows the device to communicate, share files with other devices.
- The first network operating system was Novel NetWare released in 1983. Some other examples of NOS are Windows 2000, Windows XP, Linux, etc.

### 12. What are the different types of networks?
Networks can be divided on the basis of area of distribution. For example:

- **PAN (Personal Area Network)**: Its range limit is up to 10 meters. It is created for personal use. Generally, personal devices are connected to this network. For example computers, telephones, fax, printers, etc.
- **LAN (Local Area Network)**: It is used for a small geographical location like office, hospital, school, etc.
- **HAN (House Area Network)**: It is actually a LAN that is used within a house and used to connect homely devices like personal computers, phones, printers, etc.
- **CAN (Campus Area Network)**: It is a connection of devices within a campus area which links to other departments of the organization within the same campus.
- **MAN (Metropolitan Area Network)**: It is used to connect the devices which span to large cities like metropolitan cities over a wide geographical area.
- **WAN (Wide Area Network)**: It is used over a wide geographical location that may range to connect cities and countries.
- **GAN (Global Area Network)**: It uses satellites to connect devices over global are.

### 13. What is POP3?
POP3 stands for Post Office Protocol version3. POP is responsible for accessing the mail service on a client machine. POP3 works on two models such as Delete mode and Keep mode.

### 14. What do you understand by MAC address?
MAC stands for Media Access Control. It is the address of the device at the Media Access Control Layer of Network Architecture. It is a unique address means no two devices can have same MAC addresses.

### 15. What is IP address?
IP address is a unique 32 bit software address of a computer in a network system.

### 16. What is private IP address?
There are three ranges of IP addresses that have been reserved for IP addresses. They are not valid for use on the internet. If you want to access internet on these private IPs, you must have to use proxy server or NAT server.

### 17. What is APIPA?
APIPA is an acronym stands for Automatic Private IP Addressing. This feature is generally found in Microsoft operating system.

### 18. What is anonymous FTP?
Anonymous FTP is used to grant users access to files in public servers. Users which are allowed access to data in these servers do not need to identify themselves, but instead log in as an anonymous guest.

### 19. What is protocol?
A protocol is a set of rules which is used to govern all the aspects of information communication.

### 20. What are the main elements of a protocol?
The main elements of a protocol are:

- **Syntax**: It specifies the structure or format of the data. It also specifies the order in which they are presented.
- **Semantics**: It specifies the meaning of each section of bits.
- **Timing**: Timing specifies two characteristics: When data should be sent and how fast it can be sent.

### 21. What is the Domain Name System?
There are two types of client/server programs. First is directly used by the users and the second supports application programs.

The Domain Name System is the second type supporting program that is used by other programs such as to find the IP address of an e-mail recipient.

### 22. How many layers are in OSI reference model?
**OSI reference model**: OSI reference model is an ISO standard which defines a networking framework for implementing the protocols in seven layers. These seven layers can be grouped into three categories:

- **Network layer**: Layer 1, Layer 2 and layer 3 are the network layers.
- **Transport layer**: Layer 4 is a transport layer.
- **Application layer**. Layer 5, Layer 6 and Layer 7 are the application layers.
There are 7 layers in the OSI reference model.

1. **Physical Layer**

- It is the lowest layer of the OSI reference model.
- It is used for the transmission of an unstructured raw bit stream over a physical medium.
- Physical layer transmits the data either in the form of electrical/optical or mechanical form.
- The physical layer is mainly used for the physical connection between the devices, and such physical connection can be made by using twisted-pair cable, fibre-optic or wireless transmission media.
2. **DataLink Layer**

- It is used for transferring the data from one node to another node.
- It receives the data from the network layer and converts the data into data frames and then attach the physical address to these frames which are sent to the physical layer.
- It enables the error-free transfer of data from one node to another node.
- Frame synchronization: Data-link layer converts the data into frames, and it ensures that the destination must recognize the starting and ending of each frame.
- Flow control: Data-link layer controls the data flow within the network.
- Error control: It detects and corrects the error occurred during the transmission from source to destination.
- Addressing: Data-link layer attach the physical address with the data frames so that the individual machines can be easily identified.
- Link management: Data-link layer manages the initiation, maintenance and, termination of the link between the source and destination for the effective exchange of data.
3. **Network Layer**

- Network layer converts the logical address into the physical address.
- It provides the routing concept means it determines the best route for the packet to travel from source to the destination.
- Routing: The network layer determines the best route from source to destination. This function is known as routing.
- Logical addressing: The network layer defines the addressing scheme to identify each device uniquely.
- Packetizing: The network layer receives the data from the upper layer and converts the data into packets. This process is known as packetizing.
- Internetworking: The network layer provides the logical connection between the different types of networks for forming a bigger network.
- Fragmentation: It is a process of dividing the packets into the fragments.
4. **Transport Layer**

- It delivers the message through the network and provides error checking so that no error occurs during the transfer of data.
- It provides two kinds of services:
    - Connection-oriented transmission: In this transmission, the receiver sends the acknowledgement to the sender after the packet has been received.
    - Connectionless transmission: In this transmission, the receiver does not send the acknowledgement to the sender.
5. **Session Layer**

- The main responsibility of the session layer is beginning, maintaining and ending the communication between the devices.
- Session layer also reports the error coming from the upper layers.
- Session layer establishes and maintains the session between the two users.
6. **Presentation Layer**

- The presentation layer is also known as a Translation layer as it translates the data from one format to another format.
At the sender side, this layer translates the data format used by the application layer to the common format and at the receiver side, this layer translates the common format into a format used by the application layer.
- **Functions of presentation layer**:
    - Character code translation
    - Data conversion
    - Data compression
    - Data encryption
7. **Application Layer**

- Application layer enables the user to access the network.
- It is the topmost layer of the OSI reference model.
- Application layer protocols are file transfer protocol, simple mail transfer protocol, domain name system, etc.
- The most widely used application protocol is HTTP(Hypertext transfer protocol ). A user sends the request for the web page using HTTP.

### 23. What is the usage of OSI physical layer?
The OSI physical layer is used to convert data bits into electrical signals and vice versa. On this layer, network devices and cable types are considered and setup.

### 24. Explain the functionality of OSI session layer?
OSI session layer provides the protocols and means for two devices on the network to communicate with each other by holding a session. This layer is responsible for setting up the session, managing information exchange during the session, and tear-down process upon termination of the session.

### 25. What is the maximum length allowed for a UTP cable?
The maximum length of UTP cable is 90 to 100 meters.

### 26. What is RIP?
- RIP stands for Routing Information Protocol. It is accessed by the routers to send data from one network to another.
- RIP is a dynamic protocol which is used to find the best route from source to the destination over a network by using the hop count algorithm.
- Routers use this protocol to exchange the network topology information.
- This protocol can be used by small or medium-sized networks.

### 27. What do you understand by TCP/IP?
TCP/IP is short for Transmission Control Protocol /Internet protocol. It is a set of protocol layers that is designed for exchanging data on different types of networks.

### 28. What is netstat?
The "netstat" is a command line utility program. It gives useful information about the current TCP/IP setting of a connection.

### 29. What do you understand by ping command?
The "ping" is a utility program that allows you to check the connectivity between the network devices. You can ping devices using its IP address or name.

### 30. What is multiplexing in networking?
In Networking, multiplexing is the set of techniques that is used to allow the simultaneous transmission of multiple signals across a single data link.

### 31. What are the advantages of address sharing?
Address sharing provides security benefit instead of routing. That's because host PCs on the Internet can only see the public IP address of the external interface on the computer that provides address translation and not the private IP addresses on the internal network.

### 32. What is RSA Algorithm?
RSA is short for Rivest-Shamir-Adleman algorithm. It is mostly used for public key encryption.

### 33. How many layers are in TCP/IP?
There are basic 4 layers in TCP/IP:

- Application Layer
- Transport Layer
- Internet Layer
- Network Layer

### 34. What is the difference between TCP/IP model and the OSI model?

| TCP/IP model | OSI model |
| --- | ----------- |
|Full form of TCP is transmission control protocol.| Full form of OSI is Open System Interconnection.|
|TCP/IP has 4 layers.| 	OSI has 7 layers.|
|TCP/IP is more reliable than the OSI model.|OSI model is less reliable as compared to the TCP/IP model.|
|TCP/IP model uses horizontal approach.|OSI model uses vertical approach.|
|TCP/IP model uses both session and presentation layer in the application layer.|OSI Reference model uses separate session and presentation layers.|
|TCP/IP model developed the protocols first and then model.|OSI model developed the model first and then protocols.|
|In Network layer, TCP/IP model supports only connectionless communication.|In the Network layer, the OSI model supports both connection-oriented and connectionless communication.|
|TCP/IP model is a protocol dependent.|OSI model is a protocol independent.|

### 35. What is VPN (Virtual Private Network)
VPN or the Virtual Private Network is a private WAN (Wide Area Network) built on the internet. It allows the creation of a secured tunnel (protected network) between different networks using the internet (public network). By using the VPN, a client can connect to the organization’s network remotely. 

### 36. What are the advantages of using a VPN?
Below are few advantages of using VPN:

- VPN is used to connect offices in different geographical locations remotely and is cheaper when compared to WAN connections.
- VPN is used for secure transactions and confidential data transfer between multiple offices located in different geographical locations.
- VPN keeps an organization’s information secured against any potential threats or intrusions by using virtualization.
- VPN encrypts the internet traffic and disguises the online identity.

### 37. What are the different types of VPN?
Few types of VPN are:

- **Access VPN**: Access VPN is used to provide connectivity to remote mobile users and telecommuters. It serves as an alternative to dial-up connections or ISDN (Integrated Services Digital Network) connections. It is a low-cost solution and provides a wide range of connectivity.
- **Site-to-Site VPN**: A Site-to-Site or Router-to-Router VPN is commonly used in large companies having branches in different locations to connect the network of one office to another in different locations. There are 2 sub-categories as mentioned below:
- **Intranet VPN**: Intranet VPN is useful for connecting remote offices in different geographical locations using shared infrastructure (internet connectivity and servers) with the same accessibility policies as a private WAN (wide area network).
- **Extranet VPN**: Extranet VPN uses shared infrastructure over an intranet, suppliers, customers, partners, and other entities and connects them using dedicated connections.

### 38. What are nodes and links?
**Node**: Any communicating device in a network is called a Node. Node is the point of intersection in a network. It can send/receive data and information within a network. Examples of the node can be computers, laptops, printers, servers, modems, etc.

**Link**: A link or edge refers to the connectivity between two nodes in the network. It includes the type of connectivity (wired or wireless) between the nodes and protocols used for one node to be able to communicate with the other.

### 39. What is an IPv4 address? What are the different classes of IPv4?
An IP address is a 32-bit dynamic address of a node in the network. An IPv4 address has 4 octets of 8-bit each with each number with a value up to 255.

IPv4 classes are differentiated based on the number of hosts it supports on the network. There are five types of IPv4 classes and are based on the first octet of IP addresses which are classified as Class A, B, C, D, or E.

|IPv4 Class	| IPv4 Start Address|	IPv4 End Address|	Usage|
|---        |---                |    ----           | ---    |
|A	|0.0.0.0|	127.255.255.255	|Used for Large Network|
|B	|128.0.0.0	|191.255.255.255	|Used for Medium Size Network|
|C	|192.0.0.0	|223.255.255.255	|Used for Local Area Network|
|D	|224.0.0.0	|239.255.255.255	|Reserved for Multicasting|
|E	|240.0.0.0	|255.255.255.254	|Study and R&D|

### 40. What are the HTTP and the HTTPS protocol?
HTTP is the HyperText Transfer Protocol which defines the set of rules and standards on how the information can be transmitted on the World Wide Web (WWW).  It helps the web browsers and web servers for communication. It is a ‘stateless protocol’ where each command is independent with respect to the previous command. HTTP is an application layer protocol built upon the TCP. It uses port 80 by default.

HTTPS is the HyperText Transfer Protocol Secure or Secure HTTP. It is an advanced and secured version of HTTP. On top of HTTP, SSL/TLS protocol is used to provide security. It enables secure transactions by encrypting the communication and also helps identify network servers securely. It uses port 443 by default.

### 41. What is the SMTP protocol?
SMTP is the Simple Mail Transfer Protocol. SMTP sets the rule for communication between servers. This set of rules helps the software to transmit emails over the internet. It supports both End-to-End and Store-and-Forward methods. It is in always-listening mode on port 25.

### 42. What is the TCP protocol?
TCP or TCP/IP is the Transmission Control Protocol/Internet Protocol. It is a set of rules that decides how a computer connects to the Internet and how to transmit the data over the network. It creates a virtual network when more than one computer is connected to the network and uses the three ways handshake model to establish the connection which makes it more reliable

### 43. What is the UDP protocol?
UDP is the User Datagram Protocol and is based on Datagrams. Mainly, it is used for multicasting and broadcasting. Its functionality is almost the same as TCP/IP Protocol except for the three ways of handshaking and error checking. It uses a simple transmission without any hand-shaking which makes it less reliable.

### 44. Compare between TCP and UDP?

|TCP/IP |	UDP|
|---    |---    |
|Connection-Oriented Protocol	|Connectionless Protocol|
|More Reliable	|Less Reliable|
|Slower Transmission|	Faster Transmission|
|Packets order can be preserved or can be rearranged	|Packets order is not fixed and packets are independent of each other|
|Uses three ways handshake model for connection	|No handshake for establishing the connection|
|TCP packets are heavy-weight	|UDP packets are light-weight|
|Offers error checking mechanism	|No error checking mechanism|
|Protocols like HTTP, FTP, Telnet, SMTP, HTTPS, etc use TCP at the transport layer	|Protocols like DNS, RIP, SNMP, RTP, BOOTP, TFTP, NIP, etc use UDP at the transport layer|

### 45. What is the ICMP protocol?
ICMP is the Internet Control Message Protocol. It is a network layer protocol used for error handling. It is mainly used by network devices like routers for diagnosing the network connection issues and crucial for error reporting and testing if the data is reaching the preferred destination in time. It uses port 7 by default

### 46. What do you mean by the DHCP Protocol?
DHCP is the Dynamic Host Configuration Protocol.

It is an application layer protocol used to auto-configure devices on IP networks enabling them to use the TCP and UDP-based protocols. The DHCP servers auto-assign the IPs and other network configurations to the devices individually which enables them to communicate over the IP network. It helps to get the subnet mask, IP address and helps to resolve the DNS. It uses port 67 by default.

### 47. What is the ARP protocol?
ARP is Address Resolution Protocol. It is a network-level protocol used to convert the logical address i.e. IP address to the device's physical address i.e. MAC address. It can also be used to get the MAC address of devices when they are trying to communicate over the local network.

### 48. What is the FTP protocol?
FTP is a File Transfer Protocol. It is an application layer protocol used to transfer files and data reliably and efficiently between hosts. It can also be used to download files from remote servers to your computer. It uses port 27 by default.

### 49. What is the MAC address and how is it related to NIC?
MAC address is the Media Access Control address. It is a 48-bit or 64-bit unique identifier of devices in the network. It is also called the physical address embedded with Network Interface Card (NIC) used at the Data Link Layer. NIC is a hardware component in the networking device using which a device can connect to the network

### 50. What is a subnet?
A subnet is a network inside a network achieved by the process called subnetting which helps divide a network into subnets. It is used for getting a higher routing efficiency and enhances the security of the network. It reduces the time to extract the host address from the routing table.

### 51. Compare the hub vs switch?

|Hub	|Switch|
|Operates at Physical Layer|Operates at Data Link Layer|
|Half-Duplex transmission mode	|Full-Duplex transmission mode|
|Ethernet devices can be connectedsend	|LAN devices can be connected|
|Less complex, less intelligent, and cheaper|	Intelligent and effective|
|No software support for the administration	|Administration software support is present|
|Less speed up to 100 MBPS	|Supports high speed in GBPS|
|Less efficient as there is no way to avoid collisions when more than one nodes sends the packets at the same time	|More efficient as the collisions can be avoided or reduced as compared to Hub|

### 52. What is the difference between the ipconfig and the ifconfig?
|ipconfig	|ifconfig|
|Internet Protocol Configuration	|Interface Configuration|
|Command used in Microsoft operating systems to view and configure network interfaces	|Command used in MAC, Linux, UNIX operating systems to view and configure network interfaces|

### 53. What is the firewall?
The firewall is a network security system that is used to monitor the incoming and outgoing traffic and blocks the same based on the firewall security policies. It acts as a wall between the internet (public network) and the networking devices (a private network). It is either a hardware device, software program, or a combination of both. It adds a layer of security to the network.

### 54. What are Unicasting, Anycasting, Multicasting and Broadcasting?
- **Unicasting**: If the message is sent to a single node from the source then it is known as unicasting. This is commonly used in networks to establish a new connection.
- **Anycasting**: If the message is sent to any of the nodes from the source then it is known as anycasting. It is mainly used to get the content from any of the servers in the Content Delivery System.
- **Multicasting**: If the message is sent to a subset of nodes from the source then it is known as multicasting. Used to send the same data to multiple receivers. 
- **Broadcasting**: If the message is sent to all the nodes in a network from a source then it is known as broadcasting. DHCP and ARP in the local network use broadcasting

### 55. What happens when you enter google.com in the web browser?
Below are the steps that are being followed:

- Check the browser cache first if the content is fresh and present in cache display the same.
- If not, the browser checks if the IP of the URL is present in the cache (browser and OS) if not then request the OS to do a DNS lookup using UDP to get the corresponding IP address of the URL from the DNS server to establish a new TCP connection.
- A new TCP connection is set between the browser and the server using three-way handshaking.
- An HTTP request is sent to the server using the TCP connection.
- The web servers running on the Servers handle the incoming HTTP request and send the HTTP response.
- The browser process the HTTP response sent by the server and may close the TCP connection or reuse the same for future requests.
- If the response data is cacheable then browsers cache the same.
- Browser decodes the response and renders the content.
