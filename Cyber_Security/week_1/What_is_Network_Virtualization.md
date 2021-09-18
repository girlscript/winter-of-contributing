#  What is network virtualization?


**Network virtualization** *(NV, hereafter)* is the transformation of a network that was once hardware-dependent into a network that is software-based. Like all forms of  IT virtualization, the basic goal of network virtualization is to introduce a layer of abstraction between physical hardware and the activities that utilize that hardware.

More specifically, network virtualization allows network functions, hardware resources, and software resources to be delivered independent of hardware—as a virtual network. It can be used to consolidate many physical networks, subdivide one such network, or connect  virtual machines (VMs) together.

This can optimize how digital service providers utilize their server resources (i.e. less idle servers), allow them to use standard servers for functions that once required expensive proprietary hardware, and generally improve the speed, flexibility, and reliability of their networks.


## # Why do we need NV?

Network virtualization is rewriting the rules for the way services are delivered, from the software-defined data center (SDDC), to the cloud, to the edge. This approach moves networks from static, inflexible, and inefficient to dynamic, agile, and optimized. Modern networks must keep up with the demands for cloud-hosted, distributed apps, and the increasing threats of cybercriminals while delivering the speed and agility you need for faster time to market for your applications. With network virtualization, you can forget about spending days or weeks provisioning the infrastructure to support a new application. Apps can be deployed or updated in minutes for rapid time to value.

## # How does it work?

Network virtualization decouples network services from the underlying hardware and allows virtual provisioning of an entire network. It makes it possible to programmatically create, provision, and manage networks all in software, while continuing to leverage the underlying physical network as the packet-forwarding backplane. Physical network resources, such as switching, routing, firewalling, load balancing, virtual private networks (VPNs), and more, are pooled, delivered in software, and require only Internet Protocol (IP) packet forwarding from the underlying physical network.  
  
Network and security services in software are distributed to a virtual layer (hypervisors, in the data center) and “attached” to individual workloads, such as your virtual machines (VMs) or containers, in accordance with networking and security policies defined for each connected application. When a workload is moved to another host, network services and security policies move with it. And when new workloads are created to scale an application, necessary policies are dynamically applied to these new workloads, providing greater policy consistency and network agility.

## # Benefits of NV

All your files and folders are presented as a tree in the file explorer. You can switch from one to another by clicking a file in the tree.
Most digital service providers are already committed to network functions virtualization (NFV). This approach:

-   Reduce network provisioning time from weeks to minutes
-   Achieve greater operational efficiency by automating manual processes
-   Place and move workloads independently of physical topology
-   Improve network security within the data center
-   Uses less (and less expensive) hardware.
-   Increases flexibility and workload portability.
-   Provides the ability to spin workloads up and down with minimal effort.
-   Allows resources to be scaled elastically to address changing network demands.



# Types of Network Virtualization

There are two kinds of network virtualization: **External virtualization and Internal virtualization**.

## # External Network Virtualization

*External Network Virtualization* involves and actual physical device that caters to your network. This type of virtualization has been around for some time now.

The advantage of having an External Network Virtualization solution is that it has a very small footprint due to its “dedicated” nature, its resources are not shared by other tasks and burdens of your virtualization infrastructure.

A typical example of this would be a CISCO networking switch that provides VLAN (virtual LAN) capabilities through its internal CISCO iOS software.
An advanced CISCO routing example includes providing automatic QOS and packet analyzer service which lets you prioritize network traffic as well as diagnose network related problems.

## # Internal Network Virtualization

*Internal Network Virtualization* provides network functionality purely based on software.  In these you use existing network in your environment and present it to the virtual machines using a simple bridged or NAT based networking. However Internal Network Virtualization can be much more complex and with the software itself you can provide Virtual Switching, Virtual Networking and even Virtual Firewall solutions.

One great big advantage of an Internal Network Virtualization solution is that it is not hardware dependent. Internal Virtual Virtualization has the same advantages to it as any virtualization solution such as storage virtualization does, it is essentially “Network in a Silo” scenario.

An example of is the network topology used by common virtualization produces such as VMWare server or Microsoft Virtual PC.


```
