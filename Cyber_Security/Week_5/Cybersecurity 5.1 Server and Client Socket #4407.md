# Network sockets (Server & Client)
A **network socket** is a software structure within a computer network's network node that acts as an endpoint for transmitting and receiving data over the network. An API for the networking architecture defines the structure and properties of a socket. Sockets are only produced over the lifespan of a process in a node-based application.

Because the TCP/IP protocols were standardised during the creation of the Internet, the word _network socket_ is most often used in the context of the Internet protocol suite, and is hence referred to as **Internet socket**. In this context, a socket's **socket address**, which is the triangle of transport protocol, IP address, and port number, is used to identify it to other hosts.

The word _socket_ is also applied to the software endpoint of node-internal Inter-Process Communication (IPC), which frequently employs the same API as a network socket.

## Uses:

The role of an electrical female connector, a device in hardware enabling communication between nodes coupled by an electrical cable, is comparable to the use of the word _socket_ in software. Similarly, the word port refers to a node's or device's external physical endpoints.

The network protocol stack's application programming interface (API) provides a handle for each socket established by an application, known as a _socket descriptor_. This descriptor is a kind of file descriptor in Unix-like operating systems. The application process saves it for use with every communication channel read and write operation.


A network socket is tied to a combination of a kind of network protocol to be used for transmissions, the host's network address, and a port number when created with the API. Ports are numbered resources on the node that indicate a different sort of software structure. They're utilised as service types, and once established by a process, they act as an externally (from the network) accessible location component, allowing other hosts to connect to them.

Network sockets can be used to establish permanent connections between two nodes or to engage in connectionless and multicast communications.

Because of the widespread usage of the TCP/IP protocols on the Internet, the word _network socket_ is commonly used to refer to use with the Internet Protocol (IP). As a result, it's also known as a **Internet socket**.

## Server and Client Sockets:


A **distributed computing model** consists of two parts: the client and the server.

A user uses a **client computer** to submit requests to the server in this approach. After that, the server **processes the request and generates the necessary response**, which it then delivers back to the client. In this approach, the client, not the server, usually begins the contact. The server does nothing but wait for requests to be processed.

## In Summary:

- The client's **requests** are handled by a server.
- The **initiator** is generally the client.
- Multiple clients can be served by a single server.
- The server is in charge of **data processing/operations**, while the client is in charge of presentation.
