# Boot Sector Virus

# What is a Boot Sector Virus? - Definition

A boot sector virus is a **category of virus that infects the boot sector** of floppy disks or the **Master Boot Record (MBR)**, or sometimes it infectsthe boot sector of the hard disk instead of the MBR of that particular hard disk. The infected code **runs when the system gets booted from an infected disk**, but **once loaded; it will infect other floppy disks** when accessed in the infected computer.
<p align="center"><img style="width:650px;align-item:center;margin:20px" src="https://usa.kaspersky.com/content/en-us/images/repository/isc/2017-images/virus-img-01.jpg"></p>

# **Working of a Boot Sector Virus**

- It infects at a **BIOS** level
- It uses the **DOS commands** to spread to other floppy disks connected to the system.
<p align="center"><img style="width:500px;align-item:center;margin:20px" src="https://i.ytimg.com/vi/5cN4uYH7VU4/hqdefault.jpg"></p>


# Signs and symptoms that a  boot sector virus is present in your system.

- The **one and only criteria for a boot sector** in a system are that it must contain **0x55 and 0xAA as its last two bytes.**
- If this signature is **not present or is corrupted**, the computer may display an **error message and refuse to boot.**
- If the computer displays an error message and refuses to boot, it may be due to **physical drive corruption** or, most likely, the **presence of a boot sector virus.**
<p align="center"><img style="width:500px;align-item:center;margin:20px" src="https://www.lifewire.com/thmb/MKmglt2P_NLxlHWY9J565G-h65o=/1500x844/smart/filters:no_upscale()/free-bootable-antivirus-tools-2625785-cbcfbfb85cf64535a6c2fbe54efda94a.png"></p>

# How are Boot Sector Viruses Spread?

- Boot sector computer viruses are **spread chiefly through physical media.**
- When an infected floppy disk or USB drive is connected to a computer system, It will **transfer Its VBR(Volume Boot Record) and modify or replace the existing boot code** present in the system.
- The **next time** when a **user tries to boot their system**, the **virus will get loaded and run immediately by itself** as a part of the master boot record automatically.
- It's also possible that **email attachments** may contain boot virus code, so **don't open anonymous emails with anonymous attachments.**
- If opened, these **attachments will infect the host computer** and may contain instructions to **automatically send out further batches of email to a user's contact list.**
<p align="center"><img style="width:500px;align-item:center;margin:20px" src="https://cyberhoot.com/wp-content/uploads/2020/12/What-is-a-Boot-Sector-Virus_How-to-protect-yourself-against-it-1280x720-1-1024x576.png"></p>

# How to Get Rid of Boot Sector Viruses

- Over the years, **improvements** have been made in **BIOS architecture** which has reduced the spread of boot viruses by including an option that **prevents any modification to the first sector of a computer's hard drive.**
- Removing a boot sector virus can be **difficult because it may encrypt the boot sector.**
- In many cases, the **users may not be aware** that they had been infected with a boot sector virus unless and until they run an **antivirus protection program or do a malware scan.**
- As a result, users must rely on **periodic updates of virus protection programs** to have an extensive registry of boot viruses and the up-to-date data needed to remove them safely.
- Suppose the virus cannot be removed by simply running an antivirus program installed in the system due to **encryption of boot sector** by the virus or excessive damage to existing boot sector code. The hard drive may need to be **reformatted to eliminate the infection.**
<p align="center"><img style="width:400px;align-item:center;margin:20px" src="https://thumbs.dreamstime.com/b/computer-character-sword-antivirus-funny-cartoon-monitor-holding-black-yellow-shield-isolated-white-background-pc-41185008.jpg"></p>

### Written by - Prithwish Pramanik 
