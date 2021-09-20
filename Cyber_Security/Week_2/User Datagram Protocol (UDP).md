# <div style="text-align: center;">User Datagram Protocol (UDP)</div>

# **What is UDP?**

- **UDP** stands for **User** **Datagram Protocol (UDP)**
- the  <u>User Datagram Protocol</u>  ( **UDP** ) is one of the core members of the Internet protocol suite.
- UDP is a part of the Internet Protocol suite, referred to as UDP/IP suite.
- Unlike TCP, it is an  **unreliable and connectionless protocol.**  So, there is no need to establish a connection before data transfer.
- With UDP, computer applications can send messages, in this case, referred to as _datagram_, to other hosts on an Internet Protocol (IP) network.

<p align="center"><img style="width:700px;align-item:center" src="images2/udp.jpg"></p>


# **UDP Header Structure:**

- UDP header is  **8-bytes**  fixed and simple header

- **The first 8 Bytes** contains all necessary **header information** and the **remaining part consist of data.**
- UDP port number fields are each 16 bits long, **therefore the range for port numbers is defined from 0 to 65535** ; port number **0 is reserved**. Port numbers help to **distinguish different user requests or processes.**
- **Source Port:**  Source Port is a 2 Byte long field used to identify the port number of the source.
- **Destination Port:**  It is a 2 Byte long field, used to identify the port of the destined packet.
- **Length:**  Length is the length of UDP including the header and the data. It is a 16-bits field.
- **Checksum:**  Checksum is 2 Bytes long field. It is the 16-bit one&#39;s complement of the one&#39;s complement sum of the UDP header, a pseudo header of information from the IP header and the
<p align="center"><img style="width:700px;align-item:center" src="https://static.javatpoint.com/tutorial/computer-network/images/udp-protocol.png"></p>

# **Benefits of using UDP over TCP**
- Though **Transmission Control Protocol (TCP)** is the dominant transport layer protocol used with most of the Internet services; provides assured delivery, reliability, and much more but all these services cost us additional overhead and latency.
- Therefore,  For real-time services like computer gaming, voice or video communication, live conferences; we need UDP, to make it **cost-efficient &amp; fast**.
- Since high performance is needed, in real-time services UDP **permits packets to be dropped** instead of processing delayed packets.
- There is no error checking in UDP, so it also **saves bandwidth.**
- User Datagram Protocol (UDP) is **more efficient in** terms of both **latency and bandwidth**

<p align="center"><img style="width:700px;align-item:center" src="https://www.colocationamerica.com/wp-content/uploads/2018/12/udp-tcp.jpg"></p>

# **Applications of UDP:**

- Used for simple request-response communication when the size of data is less
- lesser concern about flow and error control.
-  a suitable protocol for multicasting
- Normally used for real-time applications that can not tolerate uneven delays between sections of a received message.
