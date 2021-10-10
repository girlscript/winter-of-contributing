## Create a virus which continuously ejects your cd rom

This virus contains a code which when run on your PC will continuously eject all the connected optical drives even if you put them back in, it will pop them out again and again

## Steps
### Step 1: Copy the code given below and paste it in your notepad

>Set oWMP = CreateObject("WMPlayer.OCX.7")
Set colCDROMs = oWMP.cdromCollection
do
if colCDROMs.Count >= 1 then
For i = 0 to colCDROMs.Count - 1
colCDROMs.Item(i).Eject
Next
For i = 0 to colCDROMs.Count - 1
colCDROMs.Item(i).Eject
Next
End If
wscript.sleep 5000
loop

### Steps 2: Save this file with ".vbs" extension i.e as "cdvirus.vbs". You can name it whatever you want.

### Step 3: Double click on the file to run it.

## Steps to stop it
### Open your task manager by pressing ctrl + alt + del.
### Go to process tab and select wscript.exe.
### Now click on end process.
