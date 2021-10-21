# Introduction
DenoJS is a secure JavaScript and TypeScript runtime based on the V8 JavaScript Engine (created by Google's Chromium Project), the Rust Programming Language, and Tokio, an asynchronous Rust runtime. The V8 engine is also used by NodeJS, which is a JavaScript runtime. DenoJS 1.0.0 was published on May 13th, 2020, by Ryan Dahl, the same person who built NodeJS.

DenoJS aspires to be a productive and safe scripting environment that gives modern developers a simple experience. The NodeJS developers had voiced a number of issues with the way NodeJS worked. They were concerned about Node's security, how it handled packages, and other Node legacy APIs that will never change, among other things. Node was first published in 2009, and JavaScript has evolved significantly since then. They sought to improve NodeJS by adding current JavaScript tools and APIs. They also wanted something that worked in both browsers and servers, which led to the creation of DenoJS.

# Advantages and Features of DenoJS
- **Secure by Default**: DenoJS is Secure by Default, which is one of its main advantages. It operates in a `Sandbox` environment, and Deno isn't allowed to access files, the environment, or the network unless explicitly allowed, which isn't the case with NodeJS. When running a Deno application, we must explicitly include Security flags and Permissions to have access to the environment or network. If the appropriate flags are not included, the application will fail with a `PermissionsDenied` error. The following is a list of security flags.
  -  **–allow-write**: Allow Write Access
  -  **–allow-read**: Allow Read Access
  -  **–allow-net**: Allow Network Access
  -  **–allow-env**: Allow Environment Access
  -  **–allow-plugin**: Allow loading External Plugins
  -  **–allow-hrtime**: Allow High Resolution Time Measurement
  -  **–allow-run**: Allow Subprocesses to run
  -  **-A**: Allow all Permissio

- **TypeScript**: DenoJS comes with Typescript support out of the box. Because the TypeScript compiler is provided with Deno, we may use TypeScript or JavaScript to create Deno apps. As a result, we can simply create a new `.ts` file and Deno will compile and execute it properly.
  
- **Single Executable File**: DenoJS ships as a single executable with no dependencies. Deno attempts to provide a standalone tool for quickly scripting complex functionality. Like a web browser, it knows how to fetch and import external code. In Deno, a single file can define complex behaviour without any other tooling. Given a URL to a Deno program, it is runnable with nothing more than the 15 MB of memory. Deno explicitly takes on the role of both a runtime and package manager.
  
- **De-centralized Packages**: One of the major drawbacks of NodeJS is how the dependencies are handled with NPM packages. For example, If we want to use Express with NodeJS, we would simply install using npm and the dependency would go to node_modules folder. The problem is that when Express is installed, it simply isn’t the Express package. It also includes the dependencies of Express. Hence we end up with lots of folders within `node_modules`, making the process of handling external packages extremely difficult as well as increasing the size of the application. DenoJS offers De-centralized Packages i.e. Deno does not use `npm`. There are no NPM packages for Deno and there is no `package.json` file and no node_modules dependencies folder. It uses a standard browser-compatible protocol for loading modules via URLs. It imports modules which are referenced via URLs or file paths from within the application. If we want to import and use an external module, we can simply Import it from the URL:
`https://deno.land/x/[Package_Name]`

- **Browser Compatibility**: DenoJS was designed to be Browser Compatible. The set of Deno scripts which are written completely in JavaScript and do not use the global Deno namespace can also be executed using Deno in a modern web browser without any code change. Deno also follows the standardized browser JavaScript APIs. Since Deno is browser compatible, we have access and can use JavaScript APIs like fetch. We also have access to the global JavaScript window object.
  
- **ES Modules**: Unlike NodeJS, Deno incorporates modern JavaScript syntax. Deno uses ES Modules (the import Syntax) and does not support the common JavaScript `require` Syntax used in NodeJS. All External ES modules are imported via URLs just like in GoLang, for example:
```ts
import { serve } from "https://deno.land/x/http/server.ts"
```
This Import is used to create a simple HTTP Server in Deno. Another Key feature of Deno is that after this module is imported, it is cached to the Hardrive on load. Remote code which is fetched will be cached to the Hardrive when it is first executed, and it will never be updated until the code is run with the `–reload` flag. According to official DenoJS documentation, modules and files loaded from remote URLs are intended to be immutable and cacheable.

- **Standard Modules**: Deno has an extensive set of Standard Library Modules that are audited by the Deno team and are guaranteed to work with Deno. These standard modules are hosted here and are distributed via URLs like all other ES modules that are compatible with Deno. Some of these standard libraries are `fs`, `datetime`, `http`, etc much like the NodeJS modules. Deno can also import modules from any location on the web, like GitHub, a personal webserver, or a CDN (Content Delivery Network). There are more number of standard modules as well as external modules being added to Deno everyday.

- **Top Level Await**: Another Core and important feature of Deno is top-level/First Class Await Syntax. In Deno, we can use the `Await` Syntax in the global Scope without having to wrap it in the `Async` Function. Also all async actions in Deno return a Promise which can remove/avoid the Callback Hell that Node can lead to due to nested callbacks.

- **Utilities**: Deno provides built-In Testing and has built-in utilities like a dependency inspector (deno info) and a code formatter (deno fmt). Deno also allows direct execution of WebAssembly WASM Binaries. NodeJS is known for its HTTP and Data Streaming capabilities, however Deno is able to serve HTTP more efficiently than Node.
  
# Installation of DenoJS
For the different ways on Installing DenoJS, Refer to this link. We will be Installing Deno using `Chocolatey` for Windows. For Installing Deno using `Chocolatey`, run the following command: 
`choco install deno`

This will install Deno on the local System to the default `$HOME/.deno` directory. This is the default Deno’s Base directory and is referenced via the environmental variable `DENO_DIR`. 

If we simply execute the command: `deno`, it runs the command: `deno repl`
which opens up the REPL interface that stands for READ EVAL PRINT LOOP which means that we can type in basic JavaScript code from within the Command-line and it will compile, executes and prints the result.

We will execute a simple Deno Script in our local, located at the standard `deno.land/std/` URL. We can directly run this Script from the remote URL by using the Command: `deno run https://deno.land/std/examples/welcome.ts`

This is the link to the welcome.ts script in the official Deno docs Examples. We can view the Source code by simply navigating to that URL. The deno run command compiles the Script and executes the Script to display the result in your console. Deno Automatically knows whether we are running this script via the URL or just viewing it in the Browser.

To install the script on the local machine, we can run the command: 
`deno install https://deno.land/std/examples/welcome.ts`

This will install the welcome.ts script to the `$Home/.deno/bin` directory. The file will be downloaded as a `.cmd` file on Windows. In case the Installation already Exists, we need to explicitly overwrite it.

**Note**: Run CMD with Administrator Privileges to avoid unnecessary errors with Deno.
We will create a welcome.ts file on the local machine and execute it with Deno. 

# Comparison to Node.js

-   Deno does not use `npm`.

    -   It uses modules referenced as URLs or file paths.
-   Deno does not use `package.json` in its module resolution algorithm.

-   All async actions in Deno return a promise. Thus Deno provides different APIs than Node.

-   Deno requires explicit permissions for file, network, and environment access.

-   Deno always dies on uncaught errors.

-   Deno uses "ES Modules" and does not support `require()`. Third party modules are imported via URLs:

    ```ts
    import * as log from "https://deno.land/std@0.108.0/log/mod.ts";
    ```
-   Performance
    - Comparing the performance of Node.js and Deno is hard due to Deno’s relatively young age. Most of the available benchmarks are very simple, such as logging a message to  the console, so we can’t just assume that the performance will stay the same as the application grows.

    - One thing we know for sure is that both Node.js and Deno use the same JavaScript engine, Google’s V8, so there won’t be any difference in performance when it comes to running the JavaScript itself.

    - The only difference that could potentially impact performance is the fact that Deno is built on Rust and Node.js on C++. Deno’s team publishes a set of benchmarks for each release that presents Deno’s performance, in many cases in comparison to Node. As of March 2021, it seems that Node.js performs better when it comes to HTTP throughput and Deno when it comes to lower latency. Overall, the performance is very similar.

    - A common misconception about Deno’s first-class TypeScript support is that it somehow affects runtime performance due to type checking. I couldn’t find where that misconception originated, but, as anyone who knows the first thing about how TypeScript works will tell you, TypeScript only checks types during transpilation. Therefore, there’s no way it could negatively impact any kind of runtime performance. Once we use the bundle command, the output is a single JavaScript file.

    - All in all, both runtimes are extremely fast and make use of heavy optimizations to deliver the best possible performance. I don’t think either Deno or Node.js will be able to significantly outperform the other.


Contributor: [Sushovan Banerjee](https://github.com/sushovanb02)
