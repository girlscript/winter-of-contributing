**User Datagram Protocol(UDP)**

UDP is a Transport Layer protocol. UDP is a part of the Internet Protocol suite, referred to as UDP/IP suite. Unlike TCP, it is an unreliable** and connectionless protocol.** So, there is no need to establish connection prior to data transfer.

                           
the UDP header is an 8 bytes fixed header. In these header we have UDP source port, destination port, length and checksum.

On the other hand we have UDP data, the data totally in decrypted form. You can easily see it through wireshark.

**How does it work?**

UDP uses IP to get a datagram from one computer to another. UDP works by gathering data in a UDP packet and adding its own header information to the packet. This data consists of the source and destination ports to communicate on, the packet length and a checksum. After UDP packets are encapsulated in an IP packet, they're sent off to their destinations. At last _To receive data through UDP we need a port number only _and to send data through UDP you should have a port number and ip address.

**How to create a UDP receiver in a code base?**

If you’re working with Java or Android, you can use the [DatagramSocket](https://developer.android.com/reference/java/net/DatagramSocket) class to implement it. To capture data from LG we’re only supposed to have receiver in the code base. We didn't need a sender.



1. **Creation of DatagramSocket:-** First, a datagramSocket object is created to to receive packets from destination whenever the server sends any data.

    ```
    DatagramSocket ds = new DatagramSocket();
    ```


2. **Creation of DatagramPacket: **In this step, the packet for sending/receiving data via a datagramSocket is created.

    ```
    DatagramPacket dpReceive = null;     
    DpReceive = new DatagramPacket(receive, receive.length);
    ```


3. Invoke a **receive()** call on the socket object.

    ```
    ds.receive(DpReceive);
    ```


4. **Store data** in String data type.

    `String text = new String(message, 0, DpReceive.getLength());` 

5. Extract the desired data from the string. 

    ```
    String[] values = text.split(",")
    latitude.setText(text.get[1]);
    longitude.setText(text.get[2]);
    altitude.setText(text.get[3]);
    ....