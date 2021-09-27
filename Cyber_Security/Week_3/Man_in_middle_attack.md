<h1 align="center">Man in the middle Attacks</h1>

Man in the middle attack(MITM) is a cyberattack where an attacker intercepts vital data by adding themselves into the communication path. The assailant can be a detached audience in your discussion, quietly taking your insider facts, or a dynamic member, modifying the substance of your messages, or imitating the person/system you think you’re talking to.
<div align="center">
<img src="images\mitm.png">
</div>
<br><br>
<h2 align="center">How it works?</h2>

In MITM, the attacker enters into communication between sender and recipient, gains access to the data, and mimics both endpoints that send details to each other.
<br>
Be that as it may, the attacker intercepts continuous communication without knowing both endpoints. It could be a sort of listening stealthily and exposes real-time discussions or information exchange. An attacker can send, caught, and get information without knowledge awareness of the sender and recipient.

<br><br>

<h3>Man in the Middle attacks takes place in two stages.</h3>
<ul>
    <li>Interception</li>
    <li>Decryption</li>
</ul>

<h3> Interception</h3>

Hacker diverts the client traffic through the hacker’s network; sometimes, it reaches the sender or receiver’s system recently. Thus, the attacker can have an open view of the data and its contents traded without any limitation.

One common way of interfering with user traffic is to trap the client in using free open Wi-Fi hotspots, which the client might use without password protection. In any case, this more often than not falls flat since most clients are intelligent enough to secure their networks with minimal password security.

That is why hackers use more way of intercepting like:

<ul>
    <li><b>IP Spoofing</b> 
    The attacker covers himself as an application and changes headers of IP addresses. So, clients endeavoring to get to URL of an application will be diverted to attacker’s site.</li>
    <br>
    <li><b>ARP Spoofing</b>
    ARP is a low-level protocol which changes MAC to IP addresses on the local network.<br>
    In ARP spoofing, the attacker sends fake ARP (Address Resolution Protocol) messages to the victim's system through the IP of another client within the local network behaving as a network gateway. When the victim connects, attackers start receiving all of the victim's network traffic, giving access to the information or data being traded.</li>
    <br>
    <li><b>DNS Spoofing</b>
    In DNS Spoofing, the attacker gets to the server and modifies the site address record to coordinate his site records, diverting the client through the attacker’s site.</li>
</ul>
<br><br>
<h3> Decryption</h3>

When intercepting of data is done, next step is to decrypt using a two way SSL (Secure Sockets Layer). There are many methods to achieve this:

<ul>
    <li><b>SSL Hijacking</b>
    SSL Hijacking is when the attacker passes wrong keys to the sender and collector amid a handshake. The attacker controls the session even though it looks like a secure association between the sender and the recipient.</li>
    <br>
    <li><b>SSL Stripping</b>
    In SSL stripping, the attacker downsizes the application or site of its SSL encryption through interferences and sends the decoded form to the client. The client on utilizing the decoded form takes off the complete information effectively accessible to the attacker.</li>
    <br>
    <li><b>HTTPS Spoofing</b>
    The attacker sends a fake SSL certificate containing the computerized thumbprint of the client obtained from a compromised application. The browser confirms and endorses hence allowing access to the attacker.</li>
</ul>
<br><br>
<div align="center">
<img src="images\mitm-prevention.png">
</div>

<ul>
    <li>Only connect to the secured Wi-Fi</li>
    <li>use end to protection for emails, messages, etc</li>
    <li>Keep your antivirus updated</li>
    <li>Use multi-factor authentication system</li>
    <li>Keep a password manager</li>
    <li>Make sure to connect only to HTTPS connections</li>
    <li>Try to encrypt the traffic using a VPN</li>
</ul>


</br>
<hr>
Image Credits : https://www.varonis.com/