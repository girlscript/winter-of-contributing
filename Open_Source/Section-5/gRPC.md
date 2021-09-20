# gRPC(Remote Procedure call)

<p align="center">
  <img src="https://user-images.githubusercontent.com/76914454/134053924-48032318-b5e5-434c-b41f-afa156b199a2.png?raw=true" />
</p>
<br>

## [gRPC](https://grpc.io/)
<br>

<p align="center">
  <img src="https://user-images.githubusercontent.com/76914454/134054079-cbd0e031-0f82-4867-be9a-04a87f90c53e.png?raw=true" />
</p>
<br>

#What is gRPC?
<br>
gRPC is a high performance, lightweight communication protocol , open-source universal RPC framework, developed by Google in 2015.The g in gRPC does not stand for Google.
It was based on an internal Google project called Stubby which was an internal framework for gRPC,but just for Google services.It can efficiently connect services in and 
across data centers with pluggable support for load balancing, tracing, health checking and authentication.It enables client and server applications
to communicate transparently, and makes it easier to build connected systems. gRPC is a framework for implementing RPC APIs via HTTP/2
gRPC uses per-message size limits to manage incoming and outgoing messages. By default, gRPC limits incoming messages to 4 MB. There is no limit on outgoing messages.
<br>

#When to use gRPC?<br>
-Real-time communication services where you deal with streaming calls.<br>
-When efficient communication is a goal.<br>
-In multi-language environments.<br>
-For internal APIs where you don't have to force technology choices on clients.<br>
-New builds as part of transforming the existing RPC API might not be worth it.<br>
<br>
#Should I use gRPC instead of rest?
<br>
gRPC makes better use of HTTP/2 then REST. gRPC for example makes it possible to turn-off message compression.
Compared to REST, gRPC provides greater performance at the expense of less flexibility. That is its main advantage over REST: gRPC, in most cases, is way faster and more robust,
as it defines a specific set of rules each request and response should adhere to.This might be useful if you want to send an image that is already compressed.Compressing it again 
just takes up more time.Compared to REST, gRPC provides greater performance at the expense of less flexibility. ... That is its main advantage over REST: gRPC, in most cases, is
way faster and more robust, as it defines a specific set of rules each request and response should adhere to.

#What companies uses gRPC?
<br>
<b>178 companies reportedly use gRPC in their tech stacks .These are some examples=></b>
-Netflix
-Cisco
-Slack.
-HENNGE K.K.
-medium.com.
-Alibaba Travels.
-Microsoft.
-9GAG.
-Petal.
-Groww.

#What languages support gRPC?<br>
Out of the box, gRPC supports multiple programming languages :
 C#, Java, Go, Node. js, Python, PHP, Ruby ,Android Java, C#, C++, Dart, Go, Java, Kotlin/JVM, Objective-C, PHP, Python, Ruby and many more.
<br>

#How do I know what version of gRPC I have?<br>
If you build grpc.so from the souce, you can check the version of grpc inside package. xml file. If protoc hasn't been installed, you can download the protoc binary from the protocol buffers Github repository. 
Then unzip this file and update the environment variable PATH to include the path to the protoc binary file.