

### **Profile Application Performance**

An app is considered to have poor performance if it responds slowly, shows choppy animations, freezes, or consumes too much power. Fixing performance problems involves identifying areas in which your app makes inefficient use of resources such as the CPU, memory, graphics, network, and the device battery. To find and fix these problems, use the profiling and benchmarking tools and techniques described in this topic.

Android Studio offers several profiling tools to help find and visualize potential problems:



* **CPU profiler**: This tool helps track down runtime performance issues.
* **Memory profiler**: This tool helps track memory allocations.
* **Network profiler**: This tool monitors network traffic usage.
* **Energy profiler**: This tool tracks energy usage, which can contribute to battery drain.

See the Android Studio Profilers page for information about using those tools.

The Jetpack Benchmark libraries allow your application to measure various important operations:



* **Microbenchmark**: Measure important performance use cases, including application startup and redrawing that is triggered by actions such as UI animations or scrolling.
* **Benchmark**: Measure CPU cost of specific functions.

See the Benchmark your app page to learn more about these libraries.

There are many potential causes of performance problems, so it can be difficult to know where to start if you are new to performance analysis. See Measuring performance to learn techniques for measuring performance, along with examples of how to use these techniques to resolve specific problems.
