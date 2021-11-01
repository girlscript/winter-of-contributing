How to containerize dotnet applications

There are multiple ways to containerize dotnet application. As part of this documentation, we will look at some of these options.
Prerequisites:
1)	You are running Visual Studio 2017 or 2019 version.
2)	You have ‘Docker for Windows’ installed.

For an existing dotnet application, you can add ‘Docker Support’ from Visual Studio by right clicking on the project. This adds the DockerFile in the project.

<img src="./images/DockerSupportOptionInVS.PNG" style="zoom:60%;" />

Alternatively, you can add a DockerFile to containerize the application.

For a new application, you can choose the option of ‘Enable Docker Support’ when creating the project. 
Alternatively, you can add a DockerFile later to containerize the application.

<img src="./images/EnableDockerSupportInVS.PNG" style="zoom:60%;" />

Following is a sample DockerFile for a ASP.NET Core 3.1 web application:

FROM mcr.microsoft.com/dotnet/core/sdk:3.1 AS build-env
WORKDIR /app

COPY *.csproj ./
RUN dotnet restore

COPY . ./
RUN dotnet publish -c Release -o out

FROM mcr.microsoft.com/dotnet/core/aspnet:3.1
WORKDIR /app
COPY --from=build-env /app/out .
ENTRYPOINT ["dotnet", "asp-net-getting-started.dll"]

Once the DockerFile is added to the project, you can run the following commands to run the container on your local machine where ‘Docker for Windows’ is installed. Below steps are for a dotnet MVC Web application.
1)	In a command prompt window, navigate to the project directory where you have the dockerfile. Run the docker build command to build the container from the Dockerfile.
docker build -t my-asp-app .

2)	To run the newly built container, run the docker run command.
 docker run -d -p 5000:80 --name myapp my-asp-app

Let’s understand the above command:
•	-d tells the container runs in the background.
•	-p 5000:80 tells Docker to map port 5000 on the host to port 80 in the container.
•	--name myapp gives this container a user-friendly.
•	my-asp-app is the name of the image we want Docker to run. This is the container image which was build from step 1 as part of docker build process.

3)	After the above steps are performed, you Open a web browser and navigate to http://localhost:5000 which should show your containerized application.
You could run ‘docker ps’ to see the running containers.
	

