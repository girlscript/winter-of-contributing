# Important keywords

1. JAR - JAR (**Java Archive**) is a package file format that typically aggregates many java classes, metadata associated with them, and resources into a single file that can distribute software or application over the JAVA platform.

2. POM - Project object model is an XML file that contains information about the project and configuration details used by Maven to build a project,i.e, project dependencies, source code, etc.

3. Localization of plugins - Most of the plugins involved with site generation is internationalized. This means that adapting them to other languages is very easy and this process is called localization.

## Introduction

Before Maven was developed each project had its own **Ant** build files, that were all slightly different. JARs were checked into CVS. So to have a standard way of building a project, a clear definition of what the project consists of, and allow easy sharing of JAR files across several other projects **Maven** was developed.

## Maven's Objectives

Its main objective is to allow a developer to comprehend or understand the complete state of a development effort in the shortest period of time. The main area of Maven's concerns are:

### 1. Making the build process easy

Maven although doesn't eliminate the need to know the underlying mechanisms to develop an application, it shields developers from many details just like abstraction.

### 2. Providing a uniform build system

Maven uses its POM model and set of plugins to develop the project. If a developer learns how to build a single Maven project, he knows how to build all other Maven projects. This saves time when navigating between many projects.

### 3. Providing quality project information

Maven provides useful information related to your project that is in part taken from POM and is in part generated from your project's resources. It can provide:

1. Change log created directly from source control
2. Dependencies used by project
3. Unit test reports including coverage

### 4. Encouraging better development practices

Maven aims to gather current principles for best practices development and make it easy to guide a project in that direction.

For example, specification, execution, and reporting of unit tests are part of the normal build cycle using Maven. Current unit-testing best practices were used as guidelines:

1. Keeping test source code in a separate, but parallel source tree
2. Using test case naming conventions to locate and execute tests
3. Having test cases setup their environment instead of customizing the build for test preparation

Maven also assists in project workflows such as release and issue management.

Maven also suggests some guidelines on how to layout your project’s directory structure. Once you learn the layout, you can easily navigate other projects that use Maven.

## Maven Plugins

Maven is - at its core - a **plugin execution framework**; all work is done by the plugins themselves. The two types of plugins are:

### 1. Build Plugin

Plugins that are executed during the build and are listed under the ```<build />``` element of the POM are called **build plugins**.

### 2. Reporting plugin

These plugins are executed during the site generation and are listed under the ```<reporting />``` element of the POM. As a result of this reporting plugins are a part of the generated site. These plugins should be both internationalized and localized.

To read more about the Maven plugins head over
[Maven Plugins](https://maven.apache.org/plugins/index.html)

## Maven Dependencies

Managing dependencies for a single project is an easy task but in cases of multi-module projects and applications with hundreds of modules managing dependencies for such a case becomes a tedious task. Here Maven comes into play. Maven helps a great deal in defining, creating, and maintaining reproducible builds with well-defined class paths and library versions.

### Transitive dependencies

Maven avoids the need to specify and discover the libraries that your dependencies require by including **transitive dependencies automatically**. This feature is achieved by - Maven reads the project files of your dependencies from the remote repositories specified. In general, all dependencies of those projects would be used by your project or any project which inherits from those parent projects.

The problem arises when there is a cyclic graph in the dependency tree structure and to limit the number of dependencies that are included there are additional features for this.

1. Dependency Mediation: When multiple versions of a dependency are found, Maven chooses the _nearest definition_ of that dependency, i.e, it picks the version of the closest dependency to your project.

2. Dependency management - this allows project authors to specify specific types of artifacts that will be used when they meet a changing or dependent dependency where the version is not indicated. In the example in the previous section, the reliance was added directly to A even though it was not used directly by A. Instead, A can include D as dependent on its dependence phase, sometimes referred to.

3. Dependency range - this allows you to enter only dependencies that are appropriate for the current construction phase. This is explained in detail below.

4. Exemptions - If project X depends on project Y, and project Y is dependent on project Z, project owner X may explicitly exclude project Z as a dependency, using the term "exclusion".

5. Optional dependence - If project Y depends on project Z, project owner Y can mark project Z as an optional dependency, using the "optional" item. Where project X depends on project Y, X will only rely on Y and not on Y's choice. Project X owner can obviously add a reliance on Z, at his or her discretion. (It may be helpful to think of optional dependence as "automatically issued.")

To read more about the Maven plugins head over to
[Maven Dependecies](https://maven.apache.org/guides/introduction/introduction-to-dependency-mechanism.html)

Sample **pom.xml** file with dependencies and plugins: 

```xml
<project>
    <modelVersion>4.0.1</modelVersion>
    <name>Example Maven Project</name>

    <plugins>
      <plugin>
        <artifactId>maven-clean-plugin</artifactId>
        <version>2.5</version>
        <executions>
          <execution>
            <id>default-clean</id>
            <phase>clean</phase>
            <goals>
              <goal>clean</goal>
            </goals>
          </execution>
        </executions>
      </plugin>
    </plugins>

    <dependencies>
        <dependency>
            <groupId>junit</groupId>
            <artifactId>junit<artifactId>
            <version>3.6.1</version>
            <scope>test</scope>
        </dependency>
    </dependencies>
</project>
```

### Resources

1. [Maven](https://maven.apache.org/index.html)
