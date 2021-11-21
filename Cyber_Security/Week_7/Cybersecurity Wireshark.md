![image](https://user-images.githubusercontent.com/64470404/138563177-3f622fee-df04-4efa-8da1-e85243ae93f7.png)

# WIRESHARK 

Wireshark is an open-source packet analyzer or in simple words, packer sniffer or sniffer
as it is used to track the packets.<br>
And as it is open source packet sniffer and so it is free application, which is also available for windows, mac or in linux distribution.<br>
It is also known as sniffer, network protocol analyzer, and network analyzer.<br>

## ADVANTAGES:

- It sniffs packet to the micro level and captures live packets and analyzes it offline.<br>
- Inspects number of packets in the deep level and hence have the most powerful display filters in the industry.<br>
- Has the power to inspect and analyse VoIP.<br>
- It can also capture raw USB traffic.

Since it is a multiplatform software, and so here's the example from RHEL 8.0 (Red Hat Enterprise Linux 8.0) starting from it's installation.<br>

### Installation of Wireshark in RHEL

- First of all, we'll access the root linux system, or in simple words, gain the admin previledges by logging in as Root user.
- To install package in RHEL, we either use 'yum' or 'dnf' command.
- For GUI application, we'll be using :
 ``dnf install wireshark``
 
- And for CLI application, we'll be using command:
``dnf install wireshark-cli``

<img src="https://user-images.githubusercontent.com/64470404/138584940-63746af2-ad78-4033-ae53-b8a924986cc0.png" height="50%" width="70%">

<br>

### Launching Wireshark

We'll launch wireshark:<br>
We can check either from GUI that our application is installed or not or else we can just verify it with the help of cmd: <br> ``tshark --version``

We'll get the output of the cmd as follows:<br><br>
<img src="https://user-images.githubusercontent.com/64470404/138585113-84024ca5-2122-4ca4-bd76-6a60c72c0926.png" height="50%" width="70%">

And for GUI, we get as like this:<br><br>
<img src="https://user-images.githubusercontent.com/64470404/138585174-cee4019e-77fb-4ab8-9d58-6ccac1d25f64.png" height="40%" width="45%">

Here, in the GUI app, we can see, the different types of network interface card which contains different types of IP available there.<br>
We can also see, some kind of activities are going on beside the name of network interface, like zigzag motion, which updates regularly.<br>
And since, it is being running inside the virtual machine and so it shows the all the network which are available there.

<img src="https://user-images.githubusercontent.com/64470404/138585401-35346332-5659-42d8-bd03-25b8decffe5a.png" height="100%" width="100%">

<br>
When we open any of the ntw interface, we see that, live network packets are being captured by this application.<br>

![image](https://user-images.githubusercontent.com/64470404/138586406-3673bf4f-0099-4af8-9660-1faf330b76d5.png)


There are four layers in TCP/IP protocol suite:
1. Data Link layer
2. Network layer
3. Transport layer
4. Application layer

### DATA LINK LAYER

![image](https://user-images.githubusercontent.com/64470404/142757928-5496a4b0-7fde-4981-a047-cffb473a1c63.png)


### DATA IN THE NETWORK LAYER
![image](https://user-images.githubusercontent.com/64470404/142757934-8f1f176f-fe52-4737-919f-00bf06516298.png)

### DATA IN TRANSPORT LAYER
![image](https://user-images.githubusercontent.com/64470404/142757949-7ba60b49-9be0-4c5b-945e-bb46a9f14225.png)

### DATA IN APPLICATION LAYER
![image](https://user-images.githubusercontent.com/64470404/142757960-e9b6f1f4-ded4-48b1-99f8-ed9615cc2d43.png)

<br>
<br>

## Encapsulation process at Sender’s side
### Step 1: <br>
The Application, Presentation, and Session layer in the OSI model, or the
Application layer in the TCP/IP model takes the user data in the form of data streams,
encapsulates it, and forwards the data to the Transport layer. It does not necessarily
add any header or footer to the data. But it is application-specific and can add the
header if needed.<br>
<br>

### Step 2: The Transport layer (in the OSI or TCP/IP model) takes the data stream from
the upper layers, and divides it into multiple pieces. The Transport layer encapsulates
the data by adding the appropriate header to each piece. These data pieces are now
called data segments. The header contains the sequencing information so that the data
segments can be reassembled at the receiver’s end.
<br>
<br>

### Step 3: The Network layer (in the OSI model) or the Internet layer (in the TCP/IP model)
takes the data segments from the Transport layer and encapsulates it by adding an
additional header to the data segment. This data header contains all the routing
information for the proper delivery of the data. Here, the encapsulated data is termed as
a data packet or datagram.

<br>
<br>

### Step 4: The Data-Link layer (in the OSI or TCP/IP model) takes the data packet or
datagram from the Network layer and encapsulates it by adding an additional header
and footer to the data packet or datagram. The header contains all the switching
information for the proper delivery of the data to the appropriate hardware components,
and the trailer contains all the information related to error detection and control. Here,
the encapsulated data is termed as a data frame.
<br>
<br>

### Step 5: The Physical layer (in the OSI or TCP/IP model) takes the data frames from the
Data-Link layer and encapsulates them by converting it to appropriate data signals or
bits (corresponding to the physical medium).
<br>
<br>
## The de-encapsulation process at receiver’s side

### Step 1:
The Physical layer (in the OSI or TCP/IP model) takes the encapsulated data
signals or bits from the sender, and de-encapsulates them in the form of a data frame to
be forwarded to the upper layer, i.e., the Data-Link layer.<br>
<br>
### Step 2: The Data-Link layer (in the OSI or TCP/IP model) takes the data frames from
the Physical layer. It de-encapsulates the data frames and checks the frame header
whether the data frame is switched to the correct hardware or not. If the frame is
switched to the incorrect destination, it is discarded, else it checks the trailer
information. If there is an error in the data, data retransmission is requested, else it is
de-encapsulated and the data packet is forwarded to the upper layer.<br>
<br>
<br>

### Step 3: The Network layer (in the OSI model) or the Internet layer (in the TCP/IP model)
takes the data packet or datagram from the Data-Link layer. It de-encapsulates the data
packets and checks the packet header whether the packet is routed to the correct
destination or not. If the packet is routed to the incorrect destination, the packet is
discarded, else it is de-encapsulated and the data segment is forwarded to the upper
layer.
<br>
<br>

### Step 4: The Transport layer (in the OSI or TCP/IP model) takes the data segments from
the network layer and de-encapsulates them. It first checks the segment header and
then reassembles the data segments to form data streams, and these data streams are
then forwarded to the upper layers.<br>
<br>
<br>
### Step 5: The Application, Presentation, and Session layer in the OSI model, or the
Application layer in the TCP/IP model takes encapsulated data from the Transport layer,
de-encapsulates it, and the application-specific data is forwarded to the applications.

### Capturing and filtering by DNS protocol for http://jandarshan.cg.nic.in

<img src= "https://user-images.githubusercontent.com/64470404/142758072-db5bc53e-080f-4a5f-afc9-26b1d17f98cf.png" height="50%", width="70%">

<img src= "https://user-images.githubusercontent.com/64470404/142758085-b912e848-fe5e-4965-aeef-09234361100b.png" height="50%" width="70%">

From the above screenshot, we can see that the ip address of jandarshan.cg.nic.in is
164.100.150.76
<br>
<br>
<br>

## nslookup using default DNS server
1. For A-Record
<img src="https://user-images.githubusercontent.com/64470404/142758108-7e9ce49e-3260-4f99-910f-5a9cd0d9a167.png" height="50%" width="70%">

2. For NS-Recor
<img src="https://user-images.githubusercontent.com/64470404/142758115-ae4e56e4-c184-46a4-9eea-a58a3b2a3251.png" height="50%" width="70%">

3. For MX-Record:
<img src="https://user-images.githubusercontent.com/64470404/142758122-90280cd4-4acb-48e6-9c49-3ba7ab5cd526.png" height="50%" width="70%">

4. For SOA-Record:
<img src="https://user-images.githubusercontent.com/64470404/142758129-eee35d21-9a08-4e32-9c0e-ee58412ef58a.png" height="50%" width="70%">


5. For all records:
<img src="https://user-images.githubusercontent.com/64470404/142758142-56cd60ba-bac7-4479-a69e-246f5b9fbe89.png" height="50%" width="70%">


Well, that was all in it.

