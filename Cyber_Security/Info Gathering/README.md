# Information Gathering

## Defintion
- It is an act of gathering / collecting different kinds of information from the targeted system or the user.
- This is one of the most primitive and crutial stage for Ethical Hacking, in order to understand about the system.
- And are carried out by both **Black Hat** or **White Hat** Hackers or Testers (also known as *Penetration Testers*) who extract necessary and crucial data.
- The more the information is gathered about the target, more is the probability to obtain relevant & sensitive results.
- This art must be mastered by every pen-tester and hackers for gaining better experience in penetration testing.

---

## Categories within Information Gathering
- Information gathering can be classified into 3 major categories:
 1. ***Footprinting***
    - This is the process of gathering as much information as feasible, about the target system to find ways to penetrate into the system.
    - *Examples of Footprinting*: sam spade, nslookup, traceroute, nmap and neotrace.

 2. ***Scanning***
    - This type of information gathering are a set of procedures for identifying live hosts, ports, and services.
    - Discovering operating system & architecture of the targeted systems, identifying vulnerabilities and threats in the network.
    - In short, *Scanning* refers to collecting more information using complex & aggressive reconnaissance techniques. Also known as the Vulnerability scan tools.
    - *Vulnerability scan tools*: Are the computer programs designed to assess computer systems, applications, or networks for vulnerabilities.
    - These tools detect weaknesses in network-based assets such as application servers, web servers, firewalls, and routers.
    - Nexpose, Nessus, NMap, Qualys, Nikto, Zenmap are few of the example tools.

 3. ***Enumeration***
    - This is the process of extracting user names, machine names, network resources, and services from a system.
    - The gathered information is used to identify the vulnerabilities or weak points in system security same as scanning; to exploit systems in the ***System Gaining Phase***.
    - Nmap, SMTP Enumeration, DNS Enumeration, SNMP, VoIP(Voice over IP) are few of the numeration examples.

 4. ***Reconnaissance***
    - This is a practice for covertly discovering & collecting information about a system.
    - This method is often used in **Ethical Hacking** or, for **Penetration Testing**.
    - This is a practice usually seen in military language for obtaining information from their enemies territory.
    - It involves adversaries actively or passively gathering information that can be used to support targeting.
  
  ***OSINT*** is a method that uses all the information that is publicly available that includes Public Documents, Media Data (that could be social media or Data on the radio or television, Dark Web and many more.)
  Here is the [website](https://securityguill.com/osint.html) on OSINT.
  
---

## Methods for Information Gathering
  1. ***Social Engineering*** <br>
         <img src="https://user-images.githubusercontent.com/61507305/142914026-a41cd31c-f8fe-4058-8db1-26196923e16d.png" width="760" height="400" /> <br>

  2. ***Search Engines*** <br>
         <img src="https://user-images.githubusercontent.com/61507305/142915199-7fe85505-b69f-4786-b131-a62be8d89eb4.jpg" width="760" height="400" /> <br>

  3. ***Domain Names*** <br>
         <img src="https://user-images.githubusercontent.com/61507305/142914649-5637e4a4-5fab-4e88-8a3e-a1076cdccbcc.png" width="750" height="350" /> <br>

  4. ***Internet Services*** <br>
         <img src="https://user-images.githubusercontent.com/61507305/142914744-9b5d621d-c2b6-4393-a238-f8aabeb4ea56.jpg" width="760" height="400" /> <br>

  5. ***Social Networks*** <br>
         <img src="https://user-images.githubusercontent.com/61507305/142914801-c7e2a350-7859-4691-a35b-6d83b9332fb9.jpg" width="760" height="400" /> <br>

---

## Tools for Information Gathering
### Shodan
- This is a website to find all the IPs associated with a nmap scan, to find objects that are connected to the internet. <br>
<img src="https://user-images.githubusercontent.com/61507305/142915751-c4569d1b-cecf-4272-ab05-31039ae8ba9c.png" width="760" height="400" /> <br>
<img src="https://user-images.githubusercontent.com/61507305/142915958-b6e1c146-111a-440c-91fa-bbdf2ad7728d.png" width="760" height="400" /> <br>

### Whois Lookup
- It is a database record tool, that fetches domain and IP-related information.
- Usually used by network admins, and the data that are captured are usually involved around Domain names, telephones, addresses, country, DNS servers, etc. <br>
<img src="https://user-images.githubusercontent.com/61507305/142917878-5bd7866f-0d3a-43c1-834b-d05fe40222dd.png" width="760" height="400" /> <br>

### The Harvester
- This tool is used to understand an individual's footprint on the Internet.
- It is used to track estimate or predict about, what all areas can an attacker see with respect to their organization.
<img src="https://user-images.githubusercontent.com/61507305/142918576-56df45dd-d49f-4ceb-b3e2-905e4936f573.png" width="490" height="370" /> <br>
<img src="https://user-images.githubusercontent.com/61507305/142919997-691b2773-fd24-4ccd-b1b0-85eca895960f.png" width="430" height="170" /> <br>

### NMAP Tool
- This is an open-source network scanner that is used to scan networks.
- It discovers hosts, ports, and services along with their versions over a network.
- It is 1 of the most popular *reconnaissance tools*.

**Zenmap tool**
- It is a GUI (Graphical User Interface) version of the Nmap tool to enhance the interface when scanning.
- It is a free utility tool for network discovery and security auditing.
- Tasks such as network inventory, managing service upgrade schedules, and monitoring host or service uptime are considered really useful by systems and network administrators.
- Refer the [nmap](https://nmap.org) website for more info.

### Sublist3r
- This is a subdomain enumeration tool that can perform a brute force subdomain discovery attacks with the help of its subroute integration.
- Refer the [sublist3r](https://www.kali.org/tools/sublist3r/) website for more info.

### OWASP Amass
- This is an information gathering tool helps researchers and IT administrators create a full map of their digital assets by providing an easy way to perform DNS enumeration, asset location, and overall attack surface discovery.
- Here is the [github](https://github.com/OWASP/Amass) repository for more information.

### Axiom
- This is basically a dynamic infrastructure framework that helps system administrators and researchers build and deploy offensive and defensive security multi-cloud infrastructure in mere seconds; By using pre-installed tools based on OS images.

### Th3inspector
- This is an infosec utility that will enable you to fetch all kinds of website-related information, such as page data, phone number, IP addresses of HTTP and email server, perform a domain WHOIS lookup, bypass the Cloudflare proxy, check the age of your domain name, scan remote active services, subdomain mapping, and even works as a CMS detector.
- Here is the [github](https://github.com/Moham3dRiahi/Th3inspector) repository for more information.

### Bettercap
- It's used mostly for network recon and information gathering, especially for WiFi, Bluetooth low energy devices and Ethernet networks.
- Also known as a swiss army knife for networking.
- Here is the [github](https://github.com/bettercap/bettercap) repository for more information.

### Traceroute
- This is a Recon or Reconnaissance tool that is used to track the path of networks packets between one IP address to another.
- Refer the [traceroute](https://tools.keycdn.com/traceroute) website for more info.

### Unicornscan
- Combined with Nmap, it can give you the complete list of any remote network, host, and TCP scanning with all variations of TCP flags and many more.
- Installation Guide:
  - **Step 1**: Use the following command to install the tool on your kali linux machine.
```
sudo apt install unicorn
```
![Step 1](https://user-images.githubusercontent.com/61507305/142956647-0e1dd0a9-286a-4361-9618-10fad12836ab.png)

  - **Step 2**: The tool has been downloaded into your kali linux machine. Now, to open the flags and help menu of the tool use the following command.
```
unicorn -h
```
![Step 2](https://user-images.githubusercontent.com/61507305/142956711-ffc3459b-ac6a-41ff-b4fb-f6641d8b27a9.png)

### Dig
- Find current data about DNS records, whether you want to get A, NS, TXT or CNAME records.
- No additional downloads required, just check on your console.
- *Example*: By default, dig is quite verbose; and one way to cut down the output is to use the ```+short``` option.
- There are some stats about the query, which you can turn off using the ```+nostats``` option.

```
dig www.hungrypenguin.net +short
```

- For which, The IP Address of the website is returned as an output

```
67.15.117.250
```

- However, for diagnosing DNS problems, you generally need fuller output.
- You can find a happy medium by putting the following lines into a file called ```.digrc``` in your home directory

```
+nocmd
+nostats
+noquestion
```
