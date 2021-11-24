# Table of Contents

1.  [Android](#org8b9a1c6)
    1.  [History](#org1e4dcb9)
        1.  [Android Inc and Google](#org2174eb0)
        2.  [History of the Linux Kernel](#orgf7b3e92)
    2.  [Android Open Source Project](#orgc812d46)
    3.  [Technical Details](#orge2ca1ad)
        1.  [Hardware](#orgcd38d61)
        2.  [Libraries](#orgd524e1f)
        3.  [Booting](#org538ab30)
    4.  [License and Legalization](#org998e493)
    5.  [How to Contribute](#org5ed38bb)



<a id="org8b9a1c6"></a>

# Android

Android at the time of writing is the most used operating system in the smartphone world. Devleloped by Google and Open Handset Alliance in 2008.


<a id="org1e4dcb9"></a>

## History

Operating System being leader of portable devices , it makes sense that it must have a rich and deep history.
A history filled with early dissapointment but late success.Our story starts in *Android Inc* a private company.


<a id="org2174eb0"></a>

### Android Inc and Google

Founded in 2003 by Andy Rubin, Rich Miner , Nick Sears and Chris White. Their vision to make a OS that could be more aware of the user's preferences andl location.
They were to compete with *Symbian(Nokia)* and *Microsfot Windows*.

After some financial problems , the company was bought by Google for 50 million in 2005.They immediately joined Google and started developing a Operating System based on Linux.

After the *iOS* release by Apple , the developement picked up pace.The first android phone was the *HTC Dream*.

Currently the Android OS (11) uses the Linux kernel 4.14 ,4.19 or 5.4 depending on device.The Linux Kernel has multiple modifications for portable devices but all of them are merged upstream into the Mainline Kernel.

![img](https://external-content.duckduckgo.com/iu/?u=http%3A%2F%2Fphonesdata.com%2Ffiles%2Fmodels%2FHTC-Dream-704.png&f=1&nofb=1)


<a id="orgf7b3e92"></a>

### History of the Linux Kernel

Being based on Linux meant it bought the Open Source movement with it.The Linux kernel being at it's centre.

The Linux Kernel started by *Linus Torvalds* in 1991 in the Helsinki University as his summer project had grown into the largest marketshare for stable and reliable Operating System.
Usually distributed with the GNU toolset and the Linux Kernel thus called GNU/Linux. The Linux Kernel was first released in 1991 along with the source code.

Currently the Linux Kernel is used in almost all of the supercomputers , 3 billion android devices , all of the servers running the web , all the infrastructure handling
banking , transport and other systems.Google also later developed ChromeOS based a Gentoo (A Linux distribution).

![img](https://external-content.duckduckgo.com/iu/?u=http%3A%2F%2Fmakefacts.com%2Fwp-content%2Fuploads%2F2020%2F11%2FLinusTorvalds-1280x720-1-1024x576.jpg&f=1&nofb=1)    


<a id="orgc812d46"></a>

## Android Open Source Project

This is a Open Source initiave by Google to distribute and release the source code of the Android Operating System to the public.
Anyone can compile and install using this source code.This build is found in all of the *Nexus* and *Pixel Devices* , along with a select *Android One* Devices.
This is commonly known as *Stock Android*.

OEM(Origianl Equiment Manufacturer) can take this source code and add modifications to make their own version of Android , these include

-   ColorOS (Oppo)
-   Samsung One UI (Samsung)
-   EMUI (Huawei)
-   MIUI (Mi)
-   HTC Sense(HTC)
-   ZenUI (Asus)
-   OxygenOS (OnePlus)

Apart from the OEM versions , there are also multiple Custom ROM provided by the community using the AOSP.These include

-   CynogenMod
-   LineageOS
-   Kali Nethunter
-   OmniROM
-   Pixel Experience

![img](https://external-content.duckduckgo.com/iu/?u=https%3A%2F%2Fi0.wp.com%2Fopensourceforu.com%2Fwp-content%2Fuploads%2F2016%2F04%2FAndroid-Custom-Roms-and-Smartphone.jpg%3Ffit%3D624%252C500%26ssl%3D1&f=1&nofb=1)


<a id="orge2ca1ad"></a>

## Technical Details

The base android operating system is quite modified by Google for multiple reasons , the biggest being that smartphones do not have a powerful CPU , large storage and they are desgined for battery based chasis.
This means there are multiple changes between the Linux and Android . These changes are listed categorically below


<a id="orgcd38d61"></a>

### Hardware

All of the android phones run a ARM (Advanced RISC Machine) , which are lightweight and consume less power than the most CISC(Complex Instruction Set Computing).They also run at a lower-frequency compared to desktop CPUs.
Some of the most popular ARM architectures include

-   Qualcomm (8 series)
-   Samsung (Exynos Series)
-   Apple (A-Bionic Series)
-   Nvidia (Tegra Series)

Most of these chips are installed as a SoC(System on a Chip) , these are designed to include a entire system (RAM , CPU , Memory , GPU) on a single chip and are easier to manufacture but all parts are soldered thus cannot be repaoired or upgraded.

![img](https://external-content.duckduckgo.com/iu/?u=https%3A%2F%2Fwww.gadgetbytenepal.com%2Fwp-content%2Fuploads%2F2020%2F06%2FSnapdragon-Chipset.jpg&f=1&nofb=1 "Qualcommm Soc")

Although running android on a ARM Chip is not compulsory , the *Androidx86<sub>64</sub>* Project provides android images for desktop CPUs.More information [here](https://www.android-x86.org/) .


<a id="orgd524e1f"></a>

### Libraries

Designed for a lightweight system , the android OS had to go through some changes in the software stack . These include

1.  Runtime Environment: Android used the Dalvik runtime environment until 4.4 , this runtime was JIT(Just in Time Compilation) to run Dalvik Executable Code translated from Java.
    Since then they have switched to ART(Android Runtime) which uses a AOT(Ahead of Time) runtime and comiles to machine-code.

2.  Bionic instead of Glibc: Google developed their own C library Bionic, major reason being smaller runtime footprint and optimization for low-frequency CPU.
    It was developed by modifying the BSD C library.

3.  Bluetooth Stack: From the GPL Licensed Bluez , google switched to the Apache-licensed BlueDroid. Since then they have developed their own Bluetooth stack using *BlueDroid*.

4.  Java Library: Before 2015 Google used the Apache Harmony JDK , but since then it has switched to the OpenJDK stack.

5.  Kernel: The modifications on Linux Kernel include a new power system , memory management ( modified OOM handling)  and added new form of IPC called Binder.

![img](https://external-content.duckduckgo.com/iu/?u=https%3A%2F%2Fcdn57.androidauthority.net%2Fwp-content%2Fuploads%2F2020%2F03%2FAndroid-OS-Stack-675x451.jpg&f=1&nofb=1 "Android Software Stack")


<a id="org538ab30"></a>

### Booting

Android's boot process is quite different than standard Linux distributions.

1.  Bootloader: Standard Linux distributions provide either a bootloader or can be installed easily.
    But Google does not provide a default bootloader in Android. The OEM must provide one.
    The most popular Android bootloader is Little Kernel(LK) developed by Qualcomm.

2.  InitRAMfs: Default Linux distributions discard the initramfs after booting . But Android mounts the initramfs as root partitions and mounts the user data on this partition.
    This makes the booting process easier and faster.

![img](https://external-content.duckduckgo.com/iu/?u=https%3A%2F%2F149425180.v2.pressablecdn.com%2Fwp-content%2Fuploads%2F2020%2F02%2Fandroid-bootloader-mode.jpg&f=1&nofb=1 "Android Bootloader")


<a id="org998e493"></a>

## License and Legalization

Licensing is the most complicated part of software development.Google being a company must choose between Open Source development and profit increment.
Since the start of Android Google has been moving towards a more closed licensing as the market share of Android has changed.

-   Kernel: The Linux Kernel is licensed under the GPL v3 License , provided by GNU.
-   AOSP : The Android Open Sourcce Code is released under Apache License , which is still a Open Source License but a little restrictive.
-   Bionic : The Bionic C Library is licensed under the BSD License , a Open Source License provided by Berkely University.
-   BlueDroid: This bluetooth stack was licensed under Apache License , but google since developed their own Bluetooth stack which is proprietary
-   OpenJDK: The java implementation on Android is Open Source and uses OpenJDK (GPL v2 ) different from the Oracle JDK.
-   Bootloader: The Little Kernel bootloader is Open Source.This is the most used bootloader , although multiple propreitary implementations exist.

Since Android is Open Source Google has been filed with Anti-Competitive charges all over the world.Being Free means it can fall under *predatory pricing* and infringe on multiple fronts.

Although Android is open source , does not mean the software running on it's open source.
The *Google Play Services* is a proprietary implementation providing multiple services to multiple apps.Almost all of the app bundled with Android are proprietary.
99% of the apps in the Google Play Store is Closed Source.

The Open Source play sore *FDroid* provides Open Source clones of many popular apps.Being a alternative store , it is not available on Play Store.

![img](https://external-content.duckduckgo.com/iu/?u=https%3A%2F%2Fwww.androidpolice.com%2Fwp-content%2Fuploads%2F2017%2F05%2Fnexus2cee_F-Droid-0103-hero_thumb.png&f=1&nofb=1)


<a id="org5ed38bb"></a>

## How to Contribute

Contributing to Android requires a *Indivisual Contributor License Agreement* , which defines the term of contributions.
For a company wanting to contribute , it needs a *Corporate Contributor License Agreement*.

After acquiring the Agreement , one can contribute using the official Android Gerritt Server.Contributing requires following the code styles and API guidelines.

The easiest way to contribute to Android is to report bugs and developing apps for the platform.Developing android apps require no form of agreement and
can be done using Open Source tools such as the Android SDK and Flutter.

All of the information can be found [here](https://source.android.com/setup/contribute) .

