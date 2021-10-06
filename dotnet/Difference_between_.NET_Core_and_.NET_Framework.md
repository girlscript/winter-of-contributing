# Difference between .NET Core and .NET Framework

## Introduction

A summary of the differences between .NET Core and .NET Framework.

## .NET Framework

- The first version, 1.0, of .NET Framework was released in the year 2002 by Microsoft.
- It is used to develop form-based applications, web-based applications and web services.
- It can be implemented using a variety of languages such as C#, Visual Basic, C++ and F#.
- Common Language Runtime (CLR) is the .NET execution environment which supports different languages.
- .NET Framework is platform dependent and runs only on Windows operating system.
- Visual Studio is the main IDE used for .NET development.
- It uses IIS web server.
- Latest .NET Framework LTS version is 4.8.

## .NET Core

- .NET Core was first introduced by Microsoft in 2014 with the first release in 2016.
- It is a cross platform version of .NET Framework with most of the features implemented to work in multiple OS platforms.
- It has extended ASP.NET web framework to be cross platform with the introduction of ASP.NET Core.
- The performance of .NET Core applications have scaled significantly with the usage of Kestrel web server.
- With ASP.NET Core MVC and Web API have been merged together.
- Visual Studio is the IDE used to develop .NET Core applications.
- Latest stable release that supports .NET Core is .NET 5.0.

## Similarities

- Both .NET Core and .NET Framework support languages like C#, F#, Visual Basic, etc.
- .NET Core is a cross platform implementation of .NET Framework. Therefore, it contains a large subset of .NET Framework Base Class Library.
- .NET standard is contains shared API available across all .NET implementations
- Both .NET Core and .NET Framework support Windows servers.

## Differences

| .NET Framework                                               | .NET Core                                                    |
| ------------------------------------------------------------ | ------------------------------------------------------------ |
| .NET Framework is platform dependent.                        | .NET Core is cross platform.                                 |
| It is not open sourced and more of a community developed project. | It is open sourced.                                          |
| It is relatively slower.                                     | It is relatively faster and scalable.                        |
| It gives some amount of container support.                   | It has been tailored to work best as an application deployed as a container. |
| It is best when working on already pre-configured environment and systems. | It is best when creating a new application.                  |
| It has relatively lower learning curve.                      | It provides a much better learning curve.                    |
| For user-interface centric applications, .NET Framework is the choice. | .NET Core is still catching up.                              |
| It can be used to create microservices but with primitive technologies like AKKA Cluster. | It is created with latest concepts like microservices and kubernetes in mind. |
| It is a corporate choice for now as it has been tried and tested for over a decade. | It is a choice for newly emerging .NET applications and startups. |
| .NET Framework support has been stopped by Microsoft with the release of 4.8 version. | .NET Core is the future of .NET Framework.                   |
| It was developed solely by Microsoft.                        | It was developed by both Microsoft and .NET Foundation.      |
| It does not provide much support for running multiple versions side-by-side. | Multiple services with different versions can be run on same server with .NET Core. |
| .NET Framework has relatively lower support for CLI.         | .NET Core has better CLI support and provides lightweight editors for the same. |
| .NET Framework is a good choice when the application uses several third party libraries and NuGet packages. | Certain third-party libraries and NuGet packages are not supported for .NET Core. |
| All the libraries of .NET Framework are packaged and shipped together. | It is shipped as a collection of NuGet packages.             |
| It does not support any sort of mobile development.          | It is compatible with open source mobile application platforms like Xamarin. |
| .NET Framework can be used for desktop application development. | It does not support desktop application development.         |
| It does not provide direct support for creating SDK style project. | It provides support for creating SDK style projects.         |

## Sample Applications

- [.NET Core](./.NET_Core_Application)
- [.NET Framework](./.NET_Framework_Application)

