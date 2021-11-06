# Why .NET?

.NET is a popular desktop and web development framework developed by Microsoft. With the introduction of .NET Core open source cross platform framework in 2014, it's popularity has only increased. The types of .NET applications include:

- Desktop applications
- Web applications
- Mobile applications
- Console applications
- NuGet packages/libraries
- Windows Services

## Development Models

- ### .NET Framework

  .NET Framework is the first .NET platform desktop/web development framework introduced by Microsoft in 2002. It includes the following models:

  - **WinForms**: This model is used for desktop development. It is one of the oldest development models and uses GDI which puts a lot of load on the CPU.
  - **WPF**: This is the newer version of desktop development model. It is better for rendering as compared to WinForms and uses DirectX.
  - **ASP.NET**: This model is designed for developing dynamic web applications. It uses Common Runtime Language (CLR) which is a runtime optimized compiler.

- ### .NET Core

  .NET Core is a cross platform open source framework release in 2016 by Microsoft. It can be used to create web applications running in both Windows and Linux servers. It is preferred for Cloud application development as most cloud providers encourage Linux servers which are more cost and performance optimized as compared to windows. ASP.NET Core, which is a cross platform optimized rebuild of ASP.NET, is primarily used for web development.

- ### Xamarin

  Xamarin is primarily used for mobile application and Mac application development. It was an independent entity acquired by Microsoft in 2016, making it fully open source. It uses a version of .NET Framework adjusted to be compatible with APIs for Android, iOS and Mac.

- ### Universal Windows Platform (UWP)

  It is a platform introduced with Windows 10 by Microsoft and is used primarily for all systems that can run in Windows 10. It enables development of universal apps for PC, tablets, Xbox apps, HoloLens.

## Reasons to choose .NET

1. ### Managed Code

   The code that is executed by the compiler is called managed code whereas unmanaged code is executed by the operating system. Unlike C++, C# provides the ability to execute managed code in safe mode. Managed code is necessary to perform vital operations like buffer overflow checks, type checking (static and dynamic), automatic garbage collection, whether references to an object are correct or not and whether there are duplicate objects. In .NET, the CLR (Common Language Runtime), ensures that managed runtime environment is implemented.

2. ### Platform Independence of .NET Core

   In the earlier, it was discussed that .NET Core is a cross platform framework released by Microsoft in the year 2016. This gives the advantage of running .NET applications within Linux and other OS type servers instead of Windows. Most of the cloud providers provide discounts for Linux OS systems rather than windows. Several automation tools such as Jenkins has plugins that mostly provide Linux server support better than their windows counterpart. .NET Core applications are essential in the sense that multiple OS type runtimes can be used.

3. ### Multiple language support

   .NET framework is a huge software framework that supports 32 languages. The main languages supported are C#, F# and Visual Basic. User has the freedom to choose from among those languages and it also provides libraries for development. It is easy to deploy the applications.

4. ### Visual Studio IDE

   Visual Studio is an IDE provided by Microsoft for building, debugging and testing applications. It supports .NET applications in all languages and has inbuilt support for building and debugging. With features like Git first approach and peer programming support, Visual Studio came across as the second most preferred IDE amongst developers in 2021 stackoverflow survey. Visual Studio also allows for support on continuous integration and customized environment for user development.

5. ### Easy Maintenance

   The flexible deployment support ensured by .NET accounts for easy maintenance. The deployment can be as simple as copying folders. The modular design provides for all the dependencies that are needed by the applications. Multiple .NET Core versions can be available within the server running side-by-side which can support running multiple applications and their deployment within the same server itself.

6. ### Microsoft Support

   The .NET framework and .NET Core are being actively managed and supported by Microsoft which accounts not only for the underlying framework, but also the ecosystem, IDEs and cloud operations. With the transition to .NET Core and introducing cross platform support, Microsoft is only planning to further the development of .NET for the foreseeable future. In 2018, ML.NET framework, a machine learning framework, for C# and F# was also introduced. 

7. ### Reliability and Scalability

   .NET being a highly scalable and reliable platform, is tailored to be used for applications of such nature. Since it's developed and maintained by Microsoft, it also ensures that the framework is secure. It provides support that ensures several best practices such as DRY (Don't Repeat Yourself) are implemented. It is a stable platform with fast loading time as compared to it's counterparts.

8. ### Community

   .NET Core, being open source, attracts a large community of small to enterprise level developers across GitHub. Even when Microsoft failed to account for WCF within .NET Core, it was the developer community within .NET Foundation, that added support for such features like Core WCF. Cross platform of .NET Core also ensures that a large pool of developers from the open source community are available for active contribution. In fact, the technology survey conducted by stackoverflow in 2021 has reported ASP.NET Core as the third most popular web framework and .NET Core/.NET 5 came in second amongst other frameworks.



