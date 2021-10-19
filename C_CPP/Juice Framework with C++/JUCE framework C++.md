# Juce Framework with C++

![logo](https://upload.wikimedia.org/wikipedia/commons/thumb/6/6b/JUCE_Logo.png/220px-JUCE_Logo.png)


## What is JUCE
JUCE is open-source C++ application and type of development library. 

It is set of libraries and functions that is built on top of a language C++. It is used to build a lot of today's VST plugins and audio applications. 
These are used in commercial softwares. 

Since it is a cross platform the source code of software written using this framework
can be run on windows, Android, Linux and macOS platforms.

Developer: Julian storer to develop digital audio workstation. Initiallly it was released in 2004. 



## JUCE Features:
* The classes include functions like, audio, XML and JSON parsing, networking, cryptography, multi-threading etc.
* It also supports wide range of audio functionality. It supports CoreAudio, ASIO,ALSA, JACK, WASAPI, DirectSound and many more.
* JUCE include classes 'wrapper' to build audio and browser plugins.
* It can be easily collaborated with already present projects via feature called Projucer.

  Projucer: It is an IDE tool which is used for creating and managing JUCE projects. 
*  It contains live-coding engine which is used for rapid prototyping.
* We can develop various applications including VST, AU, RTAS and AAX audio plug-ins.
* Projects can be managed with tools like Projucer or wih CMake.
* It is dual-licensed: users can use JUCE underthe Open-Source GPL(General Public License) or py a licensing fee for a proprietarty license. 
* JUCE allows users to create and use their own custom modules. This increases its extensible feature.

## Below is the building example as given in JUCE repo:

To build the exapmle clone JUCE and run following commands.
```
cd/path/to/JUCEcmake . -B cmake-build -DJUCE_BUILD_EXAMPLES=ON -DJUCE_BUILD_EXTRAS=ON
cmake --build cmake-build --target Myfile
```

## GitHub repository outlook:
* It has main branch and develop branch.
* Stars: 3.7k
* Forks: 1.1k
* Contributos: 27
* Languages : C++, C, CMake, Objective-C++, Java, Makefile
* Latest version: 6.1.2


## Jucer Directory

### Classes Index:
* Accessibility: It is collection of accessibility actions and corresponding callbacks for a UI element.
* Analytics: It is used to manage analytics data.
* Audio: It is audio sample format class.
* Box2D: It is implementation of box2Draw class.
* Core: The essential set of basic JUCE classses, as required by all other JUCE modules. 
* Cryptography: This include encryption classes.
* DSP: This include classes for audio buffer manipulation.
* DataStructures: This include classes of various datastructures.
* Events: These are classes for running application's main event loop, timers etc.
* GUI: These are GUI classes for specialised tasks.
* Graphics: Classes for 2D vector graphics, image loading, font handling etc.
* OSC: Open Source Control implementation.
* OpenGL: Classes for rendering OpenGL in a JUCE window.
* ProductUnlocking: Classes for online product authentication.
* Vedio: Classes for playing vedio and capturing camera input.

## Some of JUCE Open Source Projects on OpenSource 
* Pedalboard

![img](https://user-images.githubusercontent.com/213293/131147303-4805181a-c7d5-4afe-afb2-f591a4b8e586.png)
* Giada

![img](https://raw.githubusercontent.com/monocasual/giada/master/extras/giada-logotype.png)
* Tracktion_Engine

![img](https://www.tracktion.com/wp/wp-content/uploads/2018/11/logo-tracktion-engine-powered_3x.png)

## Companies which uses Juce
### * Cycling 74:  Building Max with JUCE

![img](https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcRobFN5KjGe9MxkWi-QosFj6ngqNNIgV7g04zFOOc8QYXaiGr_xzxY4FdbCpKfXVPdhe-E&usqp=CAU)
### * UVI sounds and software: developer spotlight Oliver Tristan 

![img](https://images.ctfassets.net/6b0pysm1rxni/58NEqT2b2MSOIIAuAIis2K/ca12e564c75d7d280ef17ce2d939028b/beathawk-2fd9448c68ef0f7edfd484db214191b7457cd826714eb06f99da49377f281714__1_.jpg?w=1176&q=90&fl=progressive&fit=fill&h=662)
### * ROLI: Building equator with JUCE

![img](https://images.ctfassets.net/6b0pysm1rxni/58jOBGqEQ8CoM0ay0S6yYY/661933a4e7c2b63ead979b93c647baf3/equator-4ebdf297bcd62c8e8c8860f49c58d3040ea182cb2c2b9b405c768df31f9be34d.jpg?w=1176&q=90&fl=progressive&fit=fill&h=662)
### * Xfer

![img](https://cracksmad.com/wp-content/uploads/2020/02/Xfer-Serum-Crack-by-Cracksmad.com_.jpg)

JUCE is a still growing. If you are Open-Source enthusiastic you can fix issues and bugs in their GitHub repository.

[JUCE GitHub Repo](https://github.com/juce-framework/JUCE) 

## References

* [Book: getting started with Juce by named Martin Robinson](https://www.amazon.in/Getting-Started-JUCE-Martin-Robinson/dp/1783283319)
* [Official website](https://juce.com/)
* [Wikipedia](https://en.wikipedia.org/wiki/JUCE)