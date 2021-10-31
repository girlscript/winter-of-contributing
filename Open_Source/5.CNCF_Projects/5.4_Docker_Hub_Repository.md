# **<ins>Docker Hub Repository</ins>**
<img src='https://www.unixtutorial.org/images/software/docker-hub.png' style='width:30%'><br>

## **Docker Hub**
Docker Hub is a service provided by Docker for finding and sharing container images with your team. It is the world’s largest repository of container images with an array of content sources including container community developers, open source projects and independent software vendors (ISV) building and distributing their code in containers.
<br>
Users get access to free public repositories for storing and sharing images or can choose a subscription plan for private repositories.
<br>
Docker Hub provides the following major features:
- Repositories
- Teams & Organizations
- Docker Official Images
<br><br>

## **What is Docker?**
Docker is a software platform that simplifies the process of building, running, managing and distributing applications. It does this by virtualizing the operating system of the computer on which it is installed and running.
<br><br>

## **Why use Docker?**
Docker is so popular today that “Docker” and “containers” are used interchangeably. But the first container-related technologies were available for years, even decades before Docker was released to the public in 2013. 
<br>
Docker enhanced the native Linux containerization capabilities with technologies that enable:
- Improved and seamless portability
- Even lighter weight and more granular updates
- Automated container creation
- Container versioning
- Container reuse
- Shared container libraries
<br><br>

## **Docker tools**
- **DockerFile :** Every Docker container starts with a simple text file containing instructions for how to build the Docker container image. 
- **Docker images :** Docker images contain executable application source code as well as all the tools, libraries, and dependencies that the application code needs to run as a container.
- **Docker containers :** Docker containers are the live, running instances of Docker images. While Docker images are read-only files, containers are live, ephemeral, executable content. 
- **Docker Hub :** Docker Hub is the public repository of Docker images that is the “world’s largest library and community for container images.” It holds over 100,000 container images sourced from commercial software vendors, open-source projects, and individual developers.
- **Docker daemon :** Docker daemon is a service running on your operating system, such as Microsoft Windows or Apple MacOS or iOS. 
- **Docker registry :** A Docker registry is a scalable open-source storage and distribution system for docker images. 
<br><br>

## **Role of Docker in distributing and shipping opensource software**
1. **Docker is a container management tool**<br>
It is an open-source tool for the deployment and management of containers. Docker is one of the most used, although is not the only one. It is a system designed to build and execute applications or services as isolated containers.
2. **Docker is not a hardware virtualization system**<br>
When Docker was released, many people compared it to the hypervisor of virtual machines as VMware, KVM and Virtualbox. Even if Docker has some points in common with hypervisors, actually has a total different approach. Virtual machines emulate the hardware. 
3. **Docker uses a layered file system**<br>
Tools like Docker provide a deployment model based on images, which facilitate the sharing of an application or service among different environments. Each image file is layered, and anytime you edit the file a new level is created. 
4. **Docker saves your time**<br>
Docker allows you to save a lot of time on the setup process, which in some cases can be very long and expensive, both in terms of time and in terms of dedicated staff (consequently, also at the economical level).
5. **Docker saves your money**<br>
You know, time is money. Docker enables to reduce costs, not only about dedicated staff but also about the infrastructure expenditure. With containers, unused memory and disk can be shared between instances. 
6. **Docker has a large ecosystem of existing images**<br>
Two years ago there were already more than 14.000 public Docker images available online. The majority of them is shared trough Docker Hub, a reference platform for who works with public Docker images.
7. **Docker is multiplatform**<br>
Docker was born to manage Linux containers. However, now is possible to use it also with different operating systems using particular solutions.
<br><br>

## **Getting started with Docker Hub and using images from docker hub**
<br>

### **Step-1:** Sign up for a Docker account
**Creating [Docker ID](https://hub.docker.com/signup):** A Docker ID grants you access to Docker Hub repositories and allows you to explore images that are available from the community and verified publishers. You’ll also need a Docker ID to share images on Docker Hub.
<br><img src='https://i.ibb.co/9NhZDVD/image.png' style='width:40%'><br>

### **Step-2:** Create your first repository
**To create a repository:**
1. Sign in to Docker Hub.
2. Click Create a Repository on the Docker Hub welcome page:
3. Name it <your-username>/my-private-repo.
4. Set the visibility to Private.
<br><img src='https://i.ibb.co/Lpw9XrT/image.png' style='width:40%'>

5. Click Create.
<br><img src='https://i.ibb.co/zbTFn4K/image.png' style='width:40%'>

### **Step-3:** Download and install Docker Desktop
1. Download and install [Docker Desktop](https://docs.docker.com/desktop/#download-and-install). If on Linux, download [Docker Engine](https://docs.docker.com/engine/install/).
2. Sign into the Docker Desktop application using the Docker ID you created in Step 1.
<br>

### **Step-4:** Build and push a container image to Docker Hub from your computer
1. Start by creating a Dockerfile to specify your application as shown below:
```
# syntax=docker/dockerfile:1
FROM busybox
CMD echo "Hello world! This is my first Docker image."
```
2. Run ```docker build -t <your_username>/my-private-repo .``` to build your Docker image.
3. Run ```docker run <your_username>/my-private-repo``` to test your Docker image locally.
4. Run ```docker push <your_username>/my-private-repo``` to push your Docker image to Docker Hub. You should see output similar to:
<br><img src='https://docs.docker.com/docker-hub/images/index-terminal.png' style='width:40%'>

5. Your repository in Docker Hub should now display a new ```latest``` tag under Tags
<br><br>

## **Benefits of Docker**
1. **Return on Investment and Cost Savings**<br>
Dockers first advantage is ROI. Especially for large, established companies, which need to generate steady revenue over the long term, the solution is only better if it can drive down costs while raising profits.
2. **Rapid Deployment**<br>
It can decrease deployment to seconds. It is because of the fact that it can create a container for every process and even does not boot an OS. So, even without worrying about the cost to bring it up again, it would be higher than what is affordable, Data can be created as well as destroyed.
3. **Security**<br>
Docker makes sure that applications that are running on containers are completely segregated and isolated from each other, from a security point of view, by granting us complete control over traffic flow and management.
4. **Simplicity and Faster Configurations**<br>
The way Docker simplifies the matters is one of the key benefits of it. It gives flexibility to users to take their own configuration, put that into the code, and further deploy it without any problems.
<br><br>

## **Limitations of Docker**
1. **Missing features**<br>
There are a ton of feature requests are under progress, like container self-registration, and self-inspects, copying files from the host to the container, and many more.
2. **Data in the container**<br>
There are times when a container goes down, so after that, it needs a backup and recovery strategy, although we have several solutions for that they are not automated or not very scalable yet.
3. **Run applications as fast as a bare-metal serve**<br>
In comparison with the virtual machines, Docker containers have less overhead but not zero overhead. If we run, an application directly on a bare-metal server we get true bare-metal speed even without using containers or virtual machines. However, Containers don’t run at bare-metal speeds.
4. **Provide cross-platform compatibility**<br>
The one major issue is if an application designed to run in a Docker container on Windows, then it can’t run on Linux or vice versa. However, Virtual machines are not subject to this limitation.
<br><br>

## **Top 10 Alternatives to Docker hub**
1. Amazon Elastic Container Registry (ECR)
2. JFrog Artifactory.
3. Azure Container Registry.
4. Red Hat Quay.
5. Harbor.


