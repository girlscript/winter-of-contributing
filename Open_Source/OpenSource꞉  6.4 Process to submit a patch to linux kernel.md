## Submitting a patch in Linux Kernel

### Linux Kernel

The Linux Kernel is the main part of a Linux Operating System connecting the hardware and software parts of a computer system. 

The main functions of the kernel are as follows:

<ol>
    <li><b><i>Memory Management</i></b>: It manages memory being used by different processes.</li>
    <li><b><i>Process Management</i></b>:Determines the time to be alloted for each process by the Central Processing Unit(CPU)</li>
    <li><b><i>Device Drivers</i></b>:Connects between hardware and processes</li>
    <li><b><i>System Security and Calls</i></b>:Receive requests for services from processes</li>
</ol>

<img src="https://media.geeksforgeeks.org/wp-content/uploads/Linux_Subsystem.png">

### What is a patch?

A patch is a small text document containing a delta of changes between two different versions of a source tree. Patches are created with the 'diff' program.

## Submitting First Patch

### Setting up gmail

Gmail --> Settings --> Forwarding POP/IMAP --> Enable IMAP --> Save Changes

Goto Bottom of page --> Configuration instructions --> Copy the outgoing mail server information to paste it into the .esmtprc file in the next section

### esmtp file configuration 

<b>Announcement</b>: If you already have another mail transfer agent (MTA) installed, installing esmtp is not required. Instead, change the .muttrc file "sendmail" line to be the path to your MTA. Mutt uses ssmtp by default, so if your MTA is ssmtp, you can leave that line out entirely.

First create a .esmtprc file with the required permissions:

Code<br><br>

```
touch ~/.esmtprc<br>
chmod g-rwx ~/.esmtprc<br>
chmod o-rwx ~/.esmtprc```

Editing the .esmtprc file in the home directory:

Code<br><br>
```
identity "my.email@gmail.com"<br>
hostname smtp.gmail.com:587<br>
username "my.email@gmail.com"<br>
password "Password"<br>
starttls required```

Create a .muttrc file in your home directory

Setting up the mail client(mutt):

Code<br><br>
```
set sendmail="/usr/bin/esmtp"<br>
set envelope_from=yes<br>
set from="Your Name <my.email@gmail.com>"<br>
set use_from=yes<br>
    set edit_headers=yes```

### Testing email setup

Sending test email

```mutt```

Create inbox -- No. Type 'm' to create a new message. Specify your own email address (or a secondary email) to send the test message to. Set the Subject however you want to. Type a message in the body, and then save and quit. Hit 'y' to send the message, hit 'e' to edit the message again, or hit 'q' to abort sending the message.

If mutt is not working, try


```mutt -d 2```

### Setting up git

Create a .gitconfig file and enter the follwing commands:

```
[user]<br>
   name = Your Name<br>
   email = your.email@example.com ```
   
Make sure that the email you specify here is the same email you used to set up sending mail. The Linux kernel developers will not accept a patch where the "From" email differs from the "Signed-off-by" line, which is what will happen if these two emails do not match.

### Exploring the Kernel tree

Open a terminal

Changing directories to your git checkout:<br><br>

```
    cd git/kernels/staging/```
    
This is the Linux Kernel tree which can be expolored using ls and cd commands.


Viewing Commit History

```git log```

### Update Linux Kernel

```
    git fetch origin<br>
    git log<br>
    git log origin/staging-testing<br>
    git rebase origin/staging-testing
```
    

### Configuring the Kernel

The next step is to create a configuration file, compile the new kernel, and install it.

The first thing to know is that the Linux kernel is completely configurable. Each driver can be separately configured to be installed or not. There are three choices for driver installation:

1. disable the driver completely,
2. build the driver into the main kernel file (vmlinuz),
3. or build it as a module.

The Linux kernel make system uses a special file called .config that stores what drivers are compiled in, or compiled as modules. Most Linux distributions store the .config file they used to compile your distro kernel in the /boot/ directory

### Compile the Kernel

Next, you'll need to run "make" to compile your new kernel. Optionally, "make" can take a flag that indicates how many threads to spawn to start separate compilations. Usually you want to pick a number that is equal to the number of CPUs you have in your machine. For example, if you had a dual core system, you would run:


```make -j2```

## Driver Change

### For Linux on Virtual Machine in your PC

The e1000 driver is found in the networking portion of the kernel:<br><br>


intern@ubuntu:~/git/kernels/staging$ ls drivers/net/ethernet/intel/e1000/<br>
e1000_ethtool.c  e1000.h  e1000_hw.c  e1000_hw.h  e1000_main.c  e1000_osdep.h  e1000_param.c  Makefile 

<br><br>
Let's make a small change to the probe function of the e1000 driver. A probe function is called when the driver is loaded. Let's edit e1000_main.c:<br>

```
vim drivers/net/ethernet/intel/e1000/e1000_main.c```
<br>
Next, find the probe function. You can search for text by typing '/' in standard mode. Once you've found the probe function, add a printk line to it:<br>

```
static int e1000_probe(struct pci_dev *pdev, const struct pci_device_id *ent) {<br>
         struct net_device *netdev;<br>
         struct e1000_adapter *adapter;<br>
         struct e1000_hw *hw;<br>```
```
       printk(KERN_DEBUG "I can modify the Linux kernel!\n");
         static int cards_found = 0;
         ```
Then type :wq<enter> to save the file and quit.

A printk function causes a message to be written to the kernel log buffer, which can then be viewed using the dmesg command.

### On Native Linux

Use lsmod to see what drivers are loaded, and pick a name from that list to modify. If you have a variant of the e1000 driver, like e1000e, you may want to use that. Or you can find your wireless driver and modify that. Then apply the method described previously to modify, change or update the driver.

### Compile, install, test

Recompile your kernel, by running make (with an optional -jN flag):


```make -j2```

You may need to fix some compilation errors. 

After you've compiled the driver, you need to install your changes by running:


```sudo make modules_install install```


Since you've compiled a completely new kernel, you need to reboot into that new kernel in order to test your module changes. Reboot your VM (or computer), and then run:


```dmesg | less```

### Submitting the Patch

The first step to sending a patch is to figure out who to send it to. For this, you need to find the maintainer of the code you're patching, and Cc the correct mailing list. If you simply send it off to LKML, it will get ignored.<br>
```
$ git show --pretty=oneline --abbrev-commit HEAD<br>
cb9a537 staging: most: constify snd_pcm_ops structure<br>
diff --git a/drivers/staging/most/aim-sound/sound.c b/drivers/staging/most/aim-s<br>
index 9c64580..21fa0df 100644<br>
--- a/drivers/staging/most/aim-sound/sound.c<br>
+++ b/drivers/staging/most/aim-sound/sound.c<br>
@@ -457,7 +457,7 @@ static snd_pcm_uframes_t pcm_pointer(struct snd_pcm_substrea<br>
 /**<br>
  * Initialization of struct snd_pcm_ops<br>
  */<br>
-static struct snd_pcm_ops pcm_ops = {<br>
+static const struct snd_pcm_ops pcm_ops = {<br>
        .open       = pcm_open,<br>
        .close      = pcm_close,<br>
        .ioctl      = snd_pcm_lib_ioctl,<br>

$ git show HEAD | perl scripts/get $$_ maintainer.pl --separator , --nokeywords --nogit --nogit-fallback --norolestats --nol<br>
Greg Kroah-Hartman <gregkh@linuxfoundation.org>,devel@driverdev.osuosl.org,linux-kernel@vger.kernel.org<br>
$ perl scripts/get_maintainer.pl --separator , --nokeywords --nogit --nogit-fallback --norolestats --nol -f<br>
drivers/staging/most/aim-sound/sound.c<br>
Greg Kroah-Hartman <gregkh@linuxfoundation.org><br>
```

### Creating and Sending a Patch with mutt

First, create a patch that describes the change, using `git format-patch`. That command takes a starting commit ID (and optionally) an ending commit ID, in order to create patches for the commit after the starting commit ID.

```git format-patch -o /tmp/ HEAD^```<br>

Sending<br>
<br>
```mutt -H /tmp/0001-whatever your filename is```


