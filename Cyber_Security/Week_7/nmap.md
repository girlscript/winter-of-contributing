<hr>
<h1 align="center"> NMAP</h1>
<br>

Nmap is one of the most commonly used tools by ethical hackers. Its ease of use and clean installation along with powerful scanning options, adds to its popularity. Nmap allows us to scan our network and discover not only everything connected to it, but also a wide variety of information about what's connected, what services each host is operating, and so on.
<br><br>
# What is Nmap?
Nmap, short for Network Mapper, is a network discovery and security auditing tool. It is known for its simple and easy to remember flags that provide powerful scanning options. 
Nmap is widely used by network administrators to scan for:
* Open ports and services
* Discover services along with their versions
* Guess the operating system running on a target machine
* Get accurate packet routes till the target machine
* Monitoring hosts

<b> According to the official Nmap website :- </b>
<br><p>" Nmap  is a free and open source utility for network discovery and security auditing. Many systems and network administrators also find it useful for tasks such as network inventory, managing service upgrade schedules, and monitoring host or service uptime. Nmap uses raw IP packets in novel ways to determine what hosts are available on the network, what services (application name and version) those hosts are offering, what operating systems (and OS versions) they are running, what type of packet filters/firewalls are in use, and dozens of other characteristics.It was designed to rapidly scan large networks, but works fine against single hosts ". </p>
<br>

# Nmap Scan Types :-
A variety of scans can be performed using Nmap. Below are the types of scans :-

### TCP SCAN
A TCP scan is generally used to check and complete a three-way handshake between you and a chosen target system. A TCP scan is generally very noisy and can be detected with almost little to no effort. This is "noisy" because the services can log the sender IP address and might trigger Intrusion Detection Systems.

### UDP SCAN
UDP scans are used to check whether there is any UDP port up and listening for incoming requests on the target machine. Unlike TCP, UDP has no mechanism to respond with a positive acknowledgment, so there is always a chance for a false positive in the scan results. However, UDP scans are used to reveal Trojan horses that might be running on UDP ports or even reveal hidden RPC services. This type of scan tends to be quite slow because machines, in general, tend to slow down their responses to this kind of traffic as a precautionary measure.

### SYN SCAN
This is another form of TCP scan. The difference is unlike a normal TCP scan, nmap itself crafts a syn packet, which is the first packet that is sent to establish a TCP connection. What is important to note here is that the connection is never formed, rather the responses to these specially crafted packets are analyzed by Nmap to produce scan results.

### ACK SCAN
ACK scans are used to determine whether a particular port is filtered or not. This proves to be extremely helpful when trying to probe for firewalls and their existing set of rules. Simple packet filtering will allow established connections (packets with the ACK bit set), whereas a more sophisticated stateful firewall might not.

### NULL SCAN
Null scans are extremely stealthy scan and what they do is as the name suggests — they set all the header fields to null. Generally, this is not a valid packet and a few targets will not know how to deal with such a packet. Such targets are generally some version of windows and scanning them with NULL packets may end up producing unreliable results. On the other hand, when a system is not running windows this can be used as an effective way to get through.\
<br>
# Nmap Commands :-
Here are some of the commands we can use in Nmap along with their flag and usage description with an example on how to use it.<br>
<table align="center">
  <tr>
    <th>flag</th>
    <th>use</th>
    <th>example</th>
  </tr>
  <tr>
    <td>-sS</td>
    <td>TCP syn port scan</td>
    <td>nmap -sS 192.168.1.1</td>
  </tr>
  <tr>
    <td>-sT</td>
    <td>TCP connect port scan</td>
    <td>nmap -sT 192.168.1.1</td>
  </tr>
  <tr>
    <td>-sU</td>
    <td>UDP port scan</td>
    <td>nmap -sU 192.168.1.1</td>
  </tr>
  <tr>
    <td>-sA</td>
    <td>TCP ask port scan</td>
    <td>nmap -sA 192.168.1.1</td>
  </tr>
</table>
<br>
<br>
<table align="center">
  <tr>
    <th>flag</th>
    <th>use</th>
    <th>example</th>
  </tr>
  <tr>
    <td>-sC</td>
    <td>default script scan</td>
    <td>nmap -sC 192.168.1.1</td>
  </tr>
  <tr>
    <td>–script banner</td>
    <td>banner grabbing</td>
    <td>nmap –script banner 192.168.1.1</td>
  </tr>
</table>
<br>
<br>
<table align="center">
  <tr>
    <th>flag</th>
    <th>use</th>
    <th>example</th>
  </tr>
  <tr>
    <td>-f</td>
    <td>use fragmented IP packets</td>
    <td>nmap -f 192.168.1.1</td>
  </tr>
  <tr>
    <td>-D</td>
    <td>decoy scans</td>
    <td>nmap -D 192.168.1.1</td>
  </tr>
  <tr>
    <td>-g</td>
    <td>use a given source port number</td>
    <td>nmap -g 192.168.1.1</td>
  </tr>
</table>
<br>
<br>
<table align="center">
  <tr>
    <th>flag</th>
    <th>use</th>
    <th>example</th>
  </tr>
  <tr>
    <td>-p</td>
    <td>specify a port or port range	</td>
    <td>nmap -p 192.168.1.1</td>
  </tr>
  <tr>
    <td>-p-</td>
    <td>scan all ports</td>
    <td>nmap -p- 192.168.1.1</td>
  </tr>
  <tr>
    <td>-F</td>
    <td>fast port scan</td>
    <td>nmap -F 192.168.1.1</td>
  </tr>
</table>
<br>
<br>
<table align="center">
  <tr>
    <th>flag</th>
    <th>use</th>
    <th>example</th>
  </tr>
  <tr>
    <td>-Pn</td>
    <td>only port scan</td>
    <td>nmap -Pn 192.168.1.1</td>
  </tr>
  <tr>
    <td>-sn</td>
    <td>only host discover</td>
    <td>nmap -sn 192.168.1.1</td>
  </tr>
  <tr>
    <td>-PR</td>
    <td>arp discovery on a local network</td>
    <td>nmap -PR 192.168.1.1</td>
  </tr>
  <tr>
    <td>-n</td>
    <td>disable DNS resolution</td>
    <td>nmap -n 192.168.1.1</td>
  </tr>
</table>
<br>

# Nmap Uses :-
Nmap stand out as the tool IT and network managers need to know is its flexibility and power. While the basis of Nmap's functionality is port scanning, it allows for a variety of related capabilities including:
* OS detection: Nmap can detect the operating systems running on network devices (also called OS fingerprinting), providing the vendor name, the underlying operating system, the version of the software and even an estimate of devices' uptime. <br>
* Network mapping: Nmap can identify the devices on a network (also called host discovery), including servers, routers and switches, and how they're physically connected. <br>
* Service discovery: Nmap can not only identify hosts on the network, but whether they're acting as mail, web or name servers, and the particular applications and versions of the related software they're running. <br>
* Security auditing: Figuring out what versions of operating systems and applications are running on network hosts lets network managers determine their vulnerability to specific flaws. 
</hr>

