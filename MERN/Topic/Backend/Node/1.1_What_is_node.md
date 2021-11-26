# What is Node.js?
Node.js is an open source, cross platform Javascript runtime environment built on top of Google Chrome's [V8 Engine](https://v8.dev/). It enables developers to use a common language across the front and back end. For a really long time, Javascript was a client side language, meaning it can be run only in a browser and other server side languages like Perl, PHP, Ruby etc, were used for the backend/server side tasks. This was no longer the case until Node.js came into existense. Simply put, Node.js helps us execute Javascript code outside a browser.  
# Why use Node.js?
Some of the most noteworthy features of Node.js include:
- Asynchronous and event driven
- Single threaded
- High scalability
- Fast code execution

Node.js as mentioned, is asynchronous and event driven, meaning it does not wait for an API to return its response and proceeds to execute the next lines of code. The response is then handled by an event loop (Check additional resources to know more about the event loop).

It is also single threaded unlike other server side frameworks that are based on multiple threads. This prevents a lot of issues associated with multi-threaded systems such as huge memory consumption under heavy load, increased frequency of context switching and scheduling and so on. 

Node.js is also incredibly scalable. The event mechanism of Node.js discussed above helps the server, respond in a non-blocking way (meaning the execution is not blocked until the response for a certain line of code is received) and this aids with the scalability of Node.js, unlike other server side frameworks that create only a limited number of threads to handle requests. A Node.js server can infact handle more requests than traditional servers like Apache HTTP Server

These features make Node.js a perfect choice for realtime applications, IOT solutions, data streaming applications (Netflix uses Node.js that's how powerful it is!) etc.

# When not to use Node.js?
While the popularity of Node.js may be appealing, not everything about this framework is perfect. To put it in better words, there are some cases when Node.js may not be the best choice. Let's look at some of them

### CPU Intensive Tasks:
One of the most important features of Node.js is its non-blocking mechanism of execution. However when a complicated CPU intensive task is executed, it may block the flow of execution and cause delays. This is because Node.js uses only one CPU core and a heavy computational task will immediately block all other requests. Essentially the non-blocking nature is nullified due to this issue. So Node.js is not the right choice for CPU intensive tasks.
### Basic CRUD Applications:
If the application's data is coming directly from the server without the use of an API, then using Node.js is excessive as most of its computational power isn't utilised. 

# Additional Resources:
Here are some additional resources that may help you understand this topic better:
- The official documentation of [Node.js](https://nodejs.org/en/docs/)
- A brief introduction to [Node.js](https://nodejs.dev/learn/introduction-to-nodejs)
- A highly energetic video about the [event loop](https://youtu.be/8zKuNo4ay8E)
- Another higly energetic video about the [V8 Engine](https://youtu.be/2WJL19wDH68) on top of which Node.js was built on.