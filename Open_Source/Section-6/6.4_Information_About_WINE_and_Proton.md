# <p align="center"> Information about **Wine** and **Proton** </p>
 <img height="100" align="right" src="https://linuxconfig.org/wp-content/uploads/2016/12/wine_logo.png">
 <br>
<H1> 1. Wine</h1>





Wine (originally an acronym for "Wine Is Not an Emulator") is a compatibility layer capable of running Windows applications on several POSIX-compliant operating systems, such as Linux, macOS, & BSD. Instead of simulating internal Windows logic like a virtual machine or emulator, Wine translates Windows API calls into POSIX calls on-the-fly, eliminating the performance and memory penalties of other methods and allowing you to cleanly integrate Windows applications into your desktop.
<br> 

## About Wine
Wine (originally an acronym for "Wine Is Not an Emulator") is a compatibility layer capable of running Windows applications on several POSIX-compliant operating systems, such as Linux, macOS, & BSD. Instead of simulating internal Windows logic like a virtual machine or emulator, Wine translates Windows API calls into POSIX calls on-the-fly, eliminating the performance and memory penalties of other methods and allowing you to cleanly integrate Windows applications into your desktop.

Wine began in 1993 under the initial coordination of Bob Amstadt as a way to support running Windows 3.1 programs on Linux. Very early on, leadership over Wine's development passed to Alexandre Julliard, who has managed the project ever since. Over the years, as the Windows API and applications have evolved to take advantage of new hardware and software, Wine has adapted to support new features, all while being ported to other OSes, becoming more stable, and providing a better user-experience.

An ambitious project by definition, work on Wine would steadily continue for 15 years before the program finally reached v1.0, the first stable release, in 2008. Several releases later, Wine is still under active development today, and although there is more work to be done, millions of people are estimated to use Wine to run their Windows software on the OS of their choice.

## Open Source and User Driven
Wine will always be free software. Approximately half of Wine's source code is written by volunteers, with the remaining effort sponsored by commercial interests, especially CodeWeavers, which sells a supported version of Wine.

Wine is heavily reliant on its user community too. Users volunteer their time to share tips and test results on how well their programs work in our Application Database, file bug reports to notify developers of problems in our Bug-Tracker, and answer questions in our forums.

## Wine benefits
Wine can provide benefits over Windows right now:

- Wine makes it possible to take advantage of all the Unix strong points (stability, flexibility, remote administration) while still using the Windows applications you depend on.
- Unix has always made it possible to write powerful scripts. Wine makes it possible to call Windows applications from scripts that can also leverage the Unix environment to its full extent.
- Wine makes it possible to access Windows applications remotely, even if they are a few thousand miles away.
- Wine makes it economical to use thin clients: simply install Wine on a Linux server, and voila, you can access these Windows applications from any X terminal.
- Wine can also be used to make existing Windows applications available on the Web by using VNC and its Java/HTML5 client.
- Wine is Open Source Software, so you can extend it to suit your needs or have one of many companies do it for you.

## Organization of the Wine Project
Wine is a member project of the Software Freedom Conservancy which provides a non-commercial home and infrastructure for Wine. Conservancy holds all of the financial assets of the Wine Project as well as our trademarks. Conservancy also provides advice and some measure of protection on legal matters. Formally, there is a Fiscal Sponsorship Agreement between Conservancy and an initial group of individuals known as the Wine Committee. Those individuals are Austin English, Alexandre Julliard, Marcus Meissner, Michael Stefanuic, and Jeremy White.


 <br>
<H1> 2. Proton</h1>
Proton is a tool for use with the Steam client which allows games which are exclusive to Windows to run on the Linux operating system. It uses Wine to facilitate this.

Most users will prefer to use Proton provided by the Steam client itself. The source code is provided to enable advanced users the ability to alter Proton. For example, some users may wish to use a different version of Wine with a particular title.

## Obtaining Proton from source
You can clone the latest Proton to your system with this command:

    git clone --recurse-submodules https://github.com/ValveSoftware/Proton.git proton
    cd proton

## What is ProtonDB?
The goal of ProtonDB is to gather reports from other gamers as they test games with Proton on Linux and provide aggregate scores of how well games perform. A growing pool of suggestions provides tweaks that you can try to get games working while Proton continues development. In addition to this, you may explore the Steam game catalog on this site to browse and discover a wide range of titles that were previously unavailable for use on Linux.

## The Impact
Steam Play now officially supports a limited but growing set of 'whitelisted' games that are deemed Proton-compatible and play on Linux. Based on ProtonDB reports, a significant number of non-whitelisted games, including many popular titles, play just as well as on Windows.

## Getting Started with Proton from Steam Play
As the new Steam Play is still in Beta, it is recommended that you opt into the Steam Client Beta for the latest features and fixes.
Proton works best with the latest graphics drivers. For some cutting edge games and graphical features, you may need drivers newer than what your distribution ships.
Install and play games! Please refer to this post for more information.
Visit the changelog for information about recent updates.

## Getting Started with Proton from Steam Play
As the new Steam Play is still in Beta, it is recommended that you opt into the Steam Client Beta for the latest features and fixes.
Proton works best with the latest graphics drivers. For some cutting edge games and graphical features, you may need drivers newer than what your distribution ships.
Install and play games! Please refer to this post for more information.
Visit the changelog for information about recent updates.





## Why is this a big deal?
The Linux desktop experience has improved by leaps and bounds in the last year or two. Most of what you may be used to on Windows or MacOS is possible on Linux without having to tinker too much, and the tinkering can even be fun. Meanwhile, more and more of our daily interactions with a computer happen online, and browsers behave much the same on Linux as they do on other operating systems. Proton and Steam Play address a significant obstacle to adoption: gaming, where until recently there was limited compatibility.
<br>
<br>
<br>
<br>

*References* -
- WineHQ https://www.winehq.org/
- Proton Github https://github.com/ValveSoftware/Proton
