<h1 align="center">📝DNS and Working of DNS</h1>
<p>DNS stands for “Domain Name System”. It’s a system that lets you connect to websites by matching human-readable domain names (like wpbeginner.com) with the unique ID of the server where a website is stored.</p> 
<p>Think of the DNS system as the internet’s phonebook. It lists domain names with their corresponding identifiers called IP addresses, instead of listing people’s names with their phone numbers. When a user enters a domain name like wpbeginner.com on their device, it looks up the IP address and connects them to the physical location where that website is stored.</p>  
<div align="center">
    <img width="700" alt="DNS" src="https://kinsta.com/wp-content/uploads/2018/05/what-is-dns.png">
</div>  
*<b>Source:</b> https://kinsta.com/knowledgebase/what-is-dns/
<h3><b>Domain:</b></h3>
<p>A domain name is the identity of one or more IP addresses; for example, the domain name google.com points to the IP address "74.125. 127.147". Domain names are invented as it is easy to remember a name rather than a long string of numbers.</p>
<p>There are various kinds of DOMAIN:</p>
<ol type="1">
  <li><b>Top-Level Domains (TLDs):</b> These top-level domains (TLD) became known as domain name extensions and represent the highest level in the Domain Name System hierarchy.</li>
  <li><b>Generic Top-Level Domain (gTLD)</b>: .com(commercial) .edu(educational) .mil(military) .org(non profit organization) .net(similar to commercial) all these are generic domain.</li>
  <li><b>Country Code Top-Level Domain (ccTLD)</b>: .in (india) .us .uk</li>
  <li><b>Inverse domain</b>: The inverse domain is used for mapping an address to a name. When the server has received a request from the client, and the server contains the files of only authorized clients.</li>
</ol>
<div align="center">
    <img width="700" alt="DNS" src="https://upload.wikimedia.org/wikipedia/commons/7/72/Strucutre-of-dns.jpg">
</div>
*<b>Source:</b> https://en.wikipedia.org
<h2><b>How Does DNS Work?</b></h2>
<p>When a user enters a URL in their web browser, DNS gets to work to connect that URL to the IP address of the actual server. This is called DNS name resolution and involves a DNS recursor querying various nameservers to figure out the actual IP address of a server.</p>
<p>DNS is primarily concerned with four components:</p>
<ul>
  <li>Domain Registrar</li>
  <li>Nameservers</li>
  <li>DNS Records</li>
  <li>Web-based services (such as website hosting and email)</li>
</ul>
<h2>Domain Registrar</h2>
<p>A domain registrar is the service provider where domain names are purchased and where domain registration is maintained (such as GoDaddy or Namecheap)</p>
<p><b>The registrar is where the domain nameservers are specified.</b></p>
<p>Most registrars include basic DNS service with the cost of domain registration. As a result, unless you add custom nameservers to the domain, the domain will use the registrar’s standard nameservers. This means that in the vast majority of cases, by default, DNS records are managed by the registrar.</p>
<div align="center">
    <img alt="DomainRegistrar" src="https://gotechug.com/wp-content/uploads/2018/08/How-to-know-your-domain-registrar.png">
</div> 
*<b>Source:</b> https://gotechug.com/5-ways-to-know-your-domain-registrar-host/
<h2>Nameservers</h2>
<p>Nameservers are servers much like web servers. However, they are configured to store DNS records rather than to serve up websites or web applications.</p>
<p>This means that when you want to change any DNS record you must change those DNS records on the nameservers that have been specified by the registrar or third-party service such as Cloudflare.</p>
<p><b>For example</b> if you are only using GoDaddy, you will need to update your DNS records with GoDaddy as they control your nameservers. If you are using Cloudflare, you will need to update your DNS records with Cloudflare as they control your nameservers.</p>
<div align="center">
    <img alt="Nameserver" src="https://www.cloudflare.com/img/learning/dns/what-is-dns/dns-record-request-sequence-3.png">
</div> 
*<b>Source:</b> https://www.cloudflare.com
<h2>DNS Records</h2>
<p>DNS records associate a domain with a web-based service.</p>
<p>There are several different types of DNS records, but in most cases, only 4 or 5 types of DNS records are used:</p>
  <ul>
    <li><b>A records:</b> Used to point a domain or a subdomain at an IPv4 address. This is the rule used to point a domain like example.com to the web server where the example.com website lives. (Note: If a web server uses and IPv6 address rather than an IPv4 address, then an AAAA record is used rather than an A record).</li>
    <li><b>CNAME records:</b> Used to associate a subdomain to the primary or canonical domain. This type of rule is commonly used to associate a www subdomain with the primary domain, such as www.example.com with example.com.</li>   
    <li><b>MX records:</b> Used to associate a domain with an email service. This is the type of rule used if you want mail for example.com to be delivered to a specific email service such as Gmail.</li>
    <li><b>TXT records:</b> Used to associate any arbitrary text to a domain. Most commonly, TXT records are used to associate SPF records with a domain to improve email deliverability and protect against spammers misusing the domain name when sending out spam. Check out our in-depth blog post on email authentication and why it’s important.</li> 
  </ul>
<div align="center">
    <img alt="DNSrecords" src="https://www.mustbegeek.com/wp-content/uploads/2019/03/Understanding-Different-Types-of-Record-in-DNS-Server-2-1.png">
</div> 
*<b>Source:</b> https://www.mustbegeek.com/understanding-different-types-of-record-in-dns-server/
 <h2>Web Services</h2>
 <p>In our case, the web service is website hosting. An A record (or AAAA record) must be added to a domain’s nameservers to associate that domain with the web servers that host the website.</p>
 <p>There are many other types of web services that are associated with a domain through DNS records: email, SFTP, hosting control panels, webmail applications, and phpMyAdmin just to name a few.</p>
<div align="center">
    <img alt="WebServices" src="https://media.ttmind.com/Media/tech/article_82_12-10-201812-46-13PM.jpg">
</div>
*<b>Source:</b> https://www.ttmind.com/techpost/WEB-SERVICES-REST-VS-gRPC
