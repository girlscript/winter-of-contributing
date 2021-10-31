## TCP

 - TCP stands for Transmission Control Protocol
 - TCP is a part of Internet Protocol Suite
 - TCP is a protocol that enables the successful transmission of data in the form of data packets from source to destination. It is a transport layer protocol.
 -  TCP is very reliable and guarantees the delivery of data. It also solves many of the problems arising from Packet-based messaging such as corrupted packets, lost packets, duplicate packets and out of order packets.  It uses Acknowledgements, sequences and checksums to solve above problems. 
 - TCP is connection oriented protocol. It means two devices first verify the connection then they start sending data from one device to other device. It happen with the help of 3-way handshake. 

 ![TCP 3 way Handshake](https://i.imgur.com/2Y1j5VU.png)


## TCP Header Structure

TCP divides the data into data fragments and attaches data header to data fragments to create data segments. These data segments are transmitted over the internet. The range of header size of TCP is 20-60 bytes with 10 mandatory fields and 40 bytes are for options

 - **Source Port Address** - It is 16 bit long field of application which contains the port address of the application sending the data segment

 -  **Destination Port Address**- It is 16 bit long field which contains the port address of the application that is receiving the data segment.  
    
 -   **Sequence Number**-  This is 32 bit long field which contains the sequence number, i.e, the byte number of the first data byte that is sent in that particular segment. It is used to rearrange the message at the receiving end when the segments are received out of order.  
    
 -   **Acknowledgement Number**-  This is 32 bit long field which contains the acknowledgement number, i.e., the byte number that the receiver expects to receive next. It is an acknowledgement for the previous bytes being received successfully.  
    
 -   **Header Length**-  This is a 4 bit field which indicates the length of the TCP header by number of 4-byte words in the header, i.e, if the header is of 20 bytes(min length of TCP header), then this field will hold 5 (because 5 x 4 = 20) and the maximum length: 60 bytes, then it’ll hold the value 15(because 15 x 4 = 60). Hence, the value of this field is always between 5 and 15.  
    
 -   **Control flags**- These are six 1-bit control bits which control connection establishment, connection termination, connection abortion, flow control, mode of transfer etc. Their function is:
        
	
	    URG: Urgent pointer is valid
	    ACK: Acknowledgement number is valid
	    PSH: Request for push
	    RST: Reset the connection
	    SYN: Synchronize sequence numbers
        FIN: Terminate the connection
    
 -   **Window size**- This field tells the window size of the sending TCP in bytes.  
    
 -   **Checksum**- This field holds the checksum for error control. It is mandatory in TCP as opposed to UDP.  
    
 -   **Urgent pointer**- This field (valid only if the URG control flag is set) is used to point to data that is urgently required that needs to reach the receiving process at the earliest. The value of this field is added to the sequence number to get the byte number of the last urgent byte.

 - **Reserve Bits**- The 6 bits are reserved and are not used.

 - **Options**- The size of options can be 0 bytes to 40 bytes. It is used for Time stamp, Window size extension, Parameter negotiation and Padding.
![TCP header](https://i.imgur.com/AW83eC5.png)


## Advantages of TCP

 - Data Re-transmission
 - Congestion Control
 - Unique Identification
 - In Order Delivery
 - Error Detection

## Disadvantages of TCP 

 - Slow Start
 - Image Blockings
 - Loss Result of Congestion
 - Slow Handshake
 - Network Optimization

## Applications of TCP

It is widely chosen option to transfer data over the internet. TCP is used where it is required the complete data transmission. e.g.,

 - World Wide Web
 - SSH
 - FTP
 - Telnet
 - SMTP
 - IMAP/POP, etc.