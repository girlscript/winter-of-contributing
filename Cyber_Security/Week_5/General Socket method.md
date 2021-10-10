# Socket:-
A socket is one endpoint of a two-way communication link between two programs running on the network. A socket is bound to a port number so that the TCP layer can identify the application that data is destined to be sent to.
**It has three type of socket methods:-**

**1.Server Socket Methods**

**2.Client Socket Methods**

**3.General Socket Methods**

(In this Part we will be focused on General socket methods)

![General Socket Methods](https://user-images.githubusercontent.com/85006350/136701506-bdd42e36-9ec6-42b8-95a9-bdcd3be09b68.png)

# **General Socket Methods:-**  
 General Socket methods are those methods which can be executed or that need to be executed by the server as the client.This method is very useful in socket programming.  **The General socket methods are as follows:-**

## 1.socket.recv(bufsize):
 This method receives a TCP message from the socket. The bufsize argument defines the maximum data it can receive at any one time.It **returns** the recieved data as bytes object.


## 2.socket.recvfrom(bufsize): 
This method receives data from the socket. The method returns a pair**(data,address)** of values: the first value gives the received data, and the second value gives the address of the socket sending the data.


## 3.socket.recvfrom_into(buffer): 

This method obtains data from the socket and writes it into the buffer. The return value is a pair (nbytes, address), where nbytes is the number of bytes received, and the address is the address of the socket sending the data.

## 4.socket.send(bytes):
This method is used to send data to the socket which is connected to the remote machine.It returns the number of bytes sent.

## 5.socket.sendto(data, address): 

This method is used to send data to the socket. Generally,data and address is returned by this method. Data is specify the number of bytes sent and address specify the address of the remote machine.

## 6.socket.sendall(data): 

This method sends all data to the socket. Before sending the data, ensure that the socket is connected to a remote machine. This method ceaselessly transfers data until an error is seen.
## 7.socket.gethostname(): 

This method is used to returns the name of the host.

## 8.socket.close(): 

this method is used to close the socket.


## Exmaple of server-Client Program:-

**Server-Side program:**
```Python3

# Import the socket library
import socket			

# next create a socket object
s = socket.socket()		
print ("Socket successfully created")

# reserve a port on your computer in our
# case it is 12345 but it can be anything
port = 12345			

# Next bind to the port
s.bind(('', port))		
print ("socket binded to %s" %(port))

# put the socket into listening mode
s.listen(5)	
print ("socket is listening")		

# a forever loop until we interrupt it or
# an error occurs
while True:

# Establish connection with client.
c, addr = s.accept()	
print ('Got connection from', addr )

# send a thank you message to the client. encoding to send byte type.
c.send('Thank you for connecting'.encode())

# Close the connection with the client
c.close()

# Breaking once connection closed
break

```

**Client-Side program:**


```Python3
# Import socket module
import socket			

# Create a socket object
s = socket.socket()		

# Define the port on which you want to connect
port = 12345			

# connect to the server on local computer
s.connect(('127.0.0.1', port))

# receive data from the server and decoding to get the string.
print (s.recv(1024).decode())
# close the connection
s.close()	
	

```




