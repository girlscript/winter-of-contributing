![golan-gwoc-banner](assets/golang-gwoc-banner.png)

# Roadmap to Golang Developers

[Beginner](https://aminos.gitbook.io/roadmap-to-golang-developer) | [Intermediate](https://www.edrawmind.com/online/map.html?sharecode=61501884522931a47526479) | [Advanced](assets/golang-developer-roadmap.png)

**Go** is a statically typed, compiled programming language designed at Google by Robert Griesemer, Rob Pike, and Ken Thompson. Go is syntactically similar to C, but with memory safety, garbage collection, structural typing, and CSP-style concurrency. The language is often referred to as Golang because of its domain name, golang.org, but the proper name is Go.

There are two major implementations:

- Google's self-hosting "gc" compiler toolchain targeting multiple operating systems, and WebAssembly.
- gofrontend, a frontend to other compilers, with the libgo library. With GCC the combination is gccgo; with LLVM the combination is gollvm.

A third-party source-to-source compiler, GopherJS, compiles Go to JavaScript for front-end web development.

## History

Go was designed at Google in 2007 to improve programming productivity in an era of multicore, networked machines and large codebases.[21] The designers wanted to address criticism of other languages in use at Google, but keep their useful characteristics:

- static typing and run-time efficiency (like C),
- readability and usability (like Python or JavaScript),
- high-performance networking and multiprocessing.

The designers were primarily motivated by their shared dislike of C++.

Go was publicly announced in November 2009, and version 1.0 was released in March 2012. Go is widely used in production at Google and in many other organizations and open-source projects.

In November 2016, the Go and Go Mono fonts were released by type designers Charles Bigelow and Kris Holmes specifically for use by the Go project. Go is a humanist sans-serif which resembles Lucida Grande and Go Mono is monospaced. Each of the fonts adhere to the WGL4 character set and were designed to be legible with a large x-height and distinct letterforms. Both Go and Go Mono adhere to the DIN 1450 standard by having a slashed zero, lowercase l with a tail, and an uppercase I with serifs.

In April 2018, the original logo was replaced with a stylized GO slanting right with trailing streamlines. However, the Gopher mascot remained the same.

In August 2018, the Go principal contributors published two "draft designs" for new and incompatible "Go 2" language features, generics and error handling, and asked Go users to submit feedback on them. Lack of support for generic programming and the verbosity of error handling in Go 1.x had drawn considerable criticism. 

## Design

Go is influenced by C (especially the Plan 9 dialect), but with an emphasis on greater simplicity and safety. The language consists of:

- A syntax and environment adopting patterns more common in dynamic languages:
    - Optional concise variable declaration and initialization through type inference (x := 0 instead of int x = 0; or var x = 0;).
    - Fast compilation.
    - Remote package management (go get) and online package documentation.
- Distinctive approaches to particular problems:
    - Built-in concurrency primitives: light-weight processes (goroutines), channels, and the select statement.
    - An interface system in place of virtual inheritance, and type embedding instead of non-virtual inheritance.
    - A toolchain that, by default, produces statically linked native binaries without external dependencies.
- A desire to keep the language specification simple enough to hold in a programmer's head, in part by omitting features that are common in similar languages.

## Syntax

Go's syntax includes changes from C aimed at keeping code concise and readable. A combined declaration/initialization operator was introduced that allows the programmer to write i := 3 or s := "Hello, world!", without specifying the types of variables used. This contrasts with C's int i = 3; and const char *s = "Hello, world!";. Semicolons still terminate statements, but are implicit when the end of a line occurs. Methods may return multiple values, and returning a result, err pair is the conventional way a method indicates an error to its caller in Go. Go adds literal syntaxes for initializing struct parameters by name and for initializing maps and slices. As an alternative to C's three-statement for loop, Go's range expressions allow concise iteration over arrays, slices, strings, maps, and channels. 

## Tools

The main Go distribution includes tools for building, testing, and analyzing code:

- `go build`, which builds Go binaries using only information in the source files themselves, no separate makefiles
- `go test`, for unit testing and microbenchmarks
- `go fmt`, for formatting code
- `go install`, for retrieving and installing remote packages
- `go vet`, a static analyzer looking for potential errors in code
- `go run`, a shortcut for building and executing code
- `godoc`, for displaying documentation or serving it via HTTP
- `gorename`, for renaming variables, functions, and so on in a type-safe way
- `go generate`, a standard way to invoke code generators

It also includes profiling and debugging support, runtime instrumentation (for example, to track garbage collection pauses), and a race condition tester.

An ecosystem of third-party tools adds to the standard distribution, such as gocode, which enables code autocompletion in many text editors, goimports, which automatically adds/removes package imports as needed, and errcheck, which detects code that might unintentionally ignore errors.

### Examples
## Hello world

```
package main

import "fmt"

func main() {
    fmt.Println("Hello, world!")
}
```
where "fmt" is the package for formatted I/O, similar to C's C file input/output.

## Applications

Some notable open-source applications written in Go include:

- Caddy, an open source HTTP/2 web server with automatic HTTPS capability
- CockroachDB, an open source, survivable, strongly consistent, scale-out SQL database
- Consul, a software for DNS-based service discovery and providing distributed Key-value storage, segmentation and configuration.
- Docker, a set of tools for deploying Linux containers
- EdgeX, a vendor-neutral open-source platform hosted by the Linux Foundation, providing a common framework for industrial IoT edge computing
- Hugo, a static site generator
- InfluxDB, an open source database specifically to handle time series data with high availability and high performance requirements
- InterPlanetary File System, a content-addressable, peer-to-peer hypermedia protocol.
- Juju, a service orchestration tool by Canonical, packagers of Ubuntu Linux
- Kubernetes container management system
- lnd, an implementation of the Bitcoin Lightning Network.
- Mattermost, a teamchat system
- NATS Messaging, an open-source messaging system featuring the core design principles of performance, scalability, and ease of use.
- OpenShift, a cloud computing platform as a service by Red Hat
- Rclone, a command line program to manage files on cloud storage and other high latency services
- Snappy, a package manager for Ubuntu Touch developed by Canonical
- Syncthing, an open-source file synchronization client/server application
- Terraform, an open-source, multiple cloud infrastructure provisioning tool from HashiCorp
- TiDB, an open-source, distributed HTAP database compatible with the MySQL protocol from PingCAP

Other notable companies and sites using Go (generally together with other languages, not exclusively) include:

- Cacoo, for their rendering of the user dashboard page and microservice using Go and gRPC.
- Chango, a programmatic advertising company uses Go in its real-time bidding systems.
- Cloud Foundry, a platform as a service.
- Cloudflare, for their delta-coding proxy Railgun, their distributed DNS service, as well as tools for cryptography, logging, stream processing, and accessing SPDY sites.
- Container Linux (formerly CoreOS), a Linux-based operating system that uses Docker containers and rkt containers
- Couchbase, Query and Indexing services within the Couchbase Server.
- Dropbox, who migrated some of their critical components from Python to Go.
- Ethereum, The go-ethereum implementation of the Ethereum Virtual Machine blockchain for the Ether cryptocurrency.
- Gitlab, a web-based DevOps lifecycle tool that provides a Git-repository, wiki, issue-tracking, continuous integration, deployment pipeline features.
- Google, for many projects, notably including download server dl.google.com
- Heroku, for Doozer, a lock service
- Hyperledger Fabric, an open source, enterprise-focused distributed ledger project
- MongoDB, tools for administering MongoDB instances.
- Netflix, for two portions of their server architecture.
- Nutanix, for a variety of micro-services in its Enterprise Cloud OS.
- Plug.dj, an interactive online social music streaming website
- SendGrid, a Boulder, Colorado-based transactional email delivery and management service.
- SoundCloud, for "dozens of systems".
- Splice, for the entire backend (API and parsers) of their online music collaboration platform.
- ThoughtWorks, some tools and applications for continuous delivery and instant messages (CoyIM).
- Twitch, for their IRC-based chat system (migrated from Python).
- Uber, for handling high volumes of geofence-based queries.
