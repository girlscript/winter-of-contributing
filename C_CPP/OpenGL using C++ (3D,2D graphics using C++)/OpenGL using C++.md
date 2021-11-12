# OpenGL using C++
![logo](https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcRHa4xtG7shmvGdIcUdpmacE3Wm-I3dbTnLHQ&usqp=CAU)

In this document we will be looking into following topics in OpenGL:

1. [INTRODUCTION](#intro)
1. [IMPLEMENTAION](#Implement)
1. [DRAWING TRIANGLE](#draw)
1. [SHADERS](#shade)
1. [LIGHTING](#light)
1. [BATCH RENDERING](#batch)

<a name="intro"></a>
## Introduction
OpenGL is graphics API(Application programming interface). It is short form of Open Graphics Library. It allows us to acccess the graphics card and tell it what to do at certain extent.
Some other such API's are, direct3d, Vulkan, metal and many.

Its kind of cross-platform and language independent. You can write OpenGL code and that same code will run on Windows, Mac,Linux, ios, android. OpenGL is a way for us to communicate with  GPU(graphics processing unit).
It is famous for rendering 2D and 3D vector grapics.

![img](https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcScm7PqxHrK6jb8g9CBRiutCNJiR2bTEYviUA&usqp=CAU)

Since OpenGL is not independent platform, we require a language to operate. The best suited language is C++. Thus, in this document we will be discussing OpenGL using C++.
The main advantage of OpenGL is, it is simple in terms of complexity compare to other API. The code is quit short. As the code tend to short it may gives less control over execution.

**History:**

The original author of OpenGL is Silicon graphics in 1992. Overtime the development was taken up by Khronos group and OpenGL architecture review board.

**Where we use this**

* Games
* CAD design
* Modelling
* Virtual reality
* Scientific visualization
* Flight simulation

**Misconceptions:**

It is not a framework, its a specification in C++. From this misconception many think that it is a library that could be installed from 3rd party sources.

<a name="Implement"></a>
## Implementaion
Every graphic card manufacturer, AMD, intel they have their own implementation. It is already written by GPU manufacturer.
We just need to follow the right execution order. There is an execution order for every API:

* Initializing API:
  To access the API working we need to create the core data structures.
* Loading assets: After creating data structures, load assets like shaders, explain the graphic pipeline, create command buffers for GPU to execute
* Presentation: Present swapchain by sending command buffers to command queue.
* Destroy:  Clear all data structures and handles after GPU executes its all work.

**OpenGL command syntax:**

* The command in OpenGL uses prefix 'gl' and first letter is uppercase.
  (example: glClearColor())
* Constants begin with GL\_. It uses all uppercase letters and they are separated by underscores.

![Commands](https://images.slideplayer.com/32/10049366/slides/slide\_4.jpg)

<a name="draw"></a>
## Drawing triangle.
* What we do when we need to draw a triangle on paper. First we define vertices, then draw a line joining those vertices. Likewise, we need to define some data for representaion of diagram and put it into GPU framework.
* In next step we call a draw command which says, read data from     framework and draw it on screen.
* once we issue draw call we need to program a GPU in a way that it should render a triangle using that data. Thus where 'shader' comes in. Its a bunch of code which runs on GPU in a very specific way.

example of simple triangle:
~~~
glBegin(GL_TRIANGLES);
glColor3f(0.1,0.2,0.3);
glVertex3f(0,0,0);
glVertex3f(1,0,0);
glVertex3f(0,1,0);
~~~

<a name="shade"></a>
## Shaders
These are user-defined programs transfer input to output, which run on GPU.
We use these codes in stages of the rendering pipeline.

These are written in OpenGL shading language. Some of shader stages defined by rendering pipeline:

* Vertex Shaders: GL\_VERTEX\_SHADER
* Evaluation shaders: GL\_TESS\_EVALUATION\_SHADER
* Geometry Shaders: GL\_GEOMETRY\_SHADER
* Fragment Shaders: GL\_FRAGMENT\_SHADER
* Compute Shaders: GL\_COMPUTE\_SHADER.

![Shader](https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcTngsDyB\_f81Rqiy6U\_psn0fpVxJw8XgrO4piktXM0wxtVjEX38JUgBVTn9GnxOSkvkcNA&usqp=CAU)

<a name="light"></a>
## Lighting
Imagine the world without colors. How pale does it look. Also, we see natural lighting is very complicated to understand and it depends on many factors.

For us, it is difficult to understand and hard to implement. In modeling, OpenGL uses approximations using some physic theories and math calculation to implement colors. It divides lighting
into 4 components independently and adds it together later.

* Types of lighting:
  * Ambient
  * Diffuse
  * Specular
* *Ambient illumination:* It is scattered light in environment. The direction of light is from various sources and different directions.
  For instance spotlight. Spotlight provides a sufficient amount of exposure.
* *Diffuse:* This component of light comes from a particular direction.
  when it hit a surface it bounces back and scatteres equally in all direction.
* *Specular:* this light comes from a single source. when it hit on surface it bounces back on preffered direction.
  The best example of this type is metal or plastic. These objects provide hight rate of specularity. Sometimes we see patch of shining lightin place of its natural color.
  This type of reflection is only possible in some objects. for example wood doesnt provide this type of characterstic.

Factors to be taken care:

* RGB values for lights and materials
* Position and attenuation
* Light source
* Color
* Selection of lighting model

![type](https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcQwTN0E4inGvQU-teCJaSK6HQwk\_tEoX1ze\_w&usqp=CAU)

<a name="batch"></a>
## Batch rendering
This is process of rendering multiple pieces of geometry in a single draw call.
For instance, if we want a differently shaped rectangle, we use uniform matrices in vertex shader to position.
But when we try to render huge amount of geometry with different characteristics it will become very difficult.
This rendering technique is very useful in 2-D gaming.

Batching means we batch together all of geometry into single vertex buffer and index buffer or simply draw it once.

For instance instead of drawing one polygon then another, then next one, we put everything in together as it is one pice of geometry and we render that once. By using this technique, we can improve the perfoemance.
To begin with above process, define the vertices of geometry in an array.

* For our IBO(index buffer objects) we are going to need to specify indices for all four quads in our integer array.
* Pass them to GPU using an IBO
* Use shaders to make it beautiful
* Add a draw call to our program and run it

In a single draw call, we batched together four separate geometries.
Each has their own unique vertex position attributes laid out in our vertices array and unique indices in our indices array.

-----
## Some Games and Visualizations developed using OpenGL
### Algodoo
It is multipurpose 2D sandbox freeware based on physics which is released on September 1, 2009 and developed by Algoryx Simulation AB.

Customers can use it as an open ended computer game, learning tool and as engineering tool.
It is written in C++ language and compatible over Windows, Linux, macOS.

![img](https://steamuserimages-a.akamaihd.net/ugc/947328846228255705/B1AE9AB0CCDC9A0EFA116EC5E12C122E8B4F8F69/?imw=637&imh=358&ima=fit&impolicy=Letterbox&imcolor=%23000000&letterbox=true)
### Google Earth
Google Earth is Earth mapping software which represents Earth in 3D by superimposing satellite images. It is initially released on June 11, 2001 by Google.

It is also written in C++ and compatible across different Operating systems.
Google earth  is amazing computer program to explore.

![img](https://www.dignited.com/wp-content/uploads/2018/06/google\_earth\_banner-768x498.jpg)
### Doom
This game initially released in 2016, developed by id Software and published by Bethesda softworks.
It is first-person shooter game with both single-player and multiplayer mode.
With stunning textures, color schemes and patterns, Doom gives best game experience to player.

![img](https://hips.hearstapps.com/digitalspyuk.cdnds.net/18/32/1534034917-doom-eternal.jpg?crop=1xw:0.8888888888888888xh;center,top&resize=1200:\*)
### City of heroes
This game was launched in 2004 by NCSOFT which is developed by Cryptic studios. It is type of MMORPG(massively maultiplayer online role playing game). This game gone through many updates(around 24) and expansions. No doubt, this game is a landmark that bought thrills of superpowers.

This game was closed on November 30th 2012. Many claim that, because of shifting resources and updates it became less popular among game lovers.

![img](https://cdn.mos.cms.futurecdn.net/pExaUmeRigJmafWAb8H4SR-970-80.jpg.webp)

-----
## Some Open-source cross-platform game Engines.
* [Panda3d](https://www.panda3d.org/)
* [Ncine](https://ncine.github.io/)
* [Openage](https://openage.sft.mx/)
-----
If you feel OpenGL is interesting and wish to explore more, checkout below links.
### References
[Official website](https://www.opengl.org/)

[Image credits](https://en.wikipedia.org/wiki/OpenGL)

[Tutorials](https://learnopengl.com/Getting-started/OpenGL)
