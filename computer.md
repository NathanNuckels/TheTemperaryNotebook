I have a 1500 dollar gameing computer tht I built myself.
It runs Artix Linux and I did everything I could in terms of hardware
to make it good for gaming. Wanna know what its used for? A server.
A file server. Nothing special. Literally just a file server.
I can't use it for gaming because you need physical acess to the computer for that.
Remotly, I can't use the mouse or the screen. I need those for gaming.
I can't use my gaming computer for gaming because I can not physically acess it,
but why? Before school, I'm busy. During school, I'm not even in the same building.
After school, I''m doing homework. At dinner, we are watching jepardy. After dinner,
I have to shower. After shower I am completely exausted and can barley do anything.
During the night, I can't walk over to it because there is an alarm on the door.
At no point can I actually use the computer on weekdays.

I have a 10 yer old laptop, I liberated it, it runs Linux to make it run
faster and use less ram. Artix Linux spesifically. It has the Plasma desktop
enviroment to make it feel like windows and it uses the XORG display system for stability.
This computer has 6 gigs of ram, not 4, not 8, but six. I don't know why it just does.
This computer's keyboard is full of ants so I don't like typing on it, or putting it near food,
or putting it near the other computers. I keep it downstairs on the coutch AWAY FROM THE WINDOWS.
NO MORE ANTS! I always watch carfully what is on the keyboard. If an ant crawls under a key I smash it.
Ive seen three ants on the pink laptop and only one in the other one wich I will get to in a moment.
It is great for 3d modeling but terrible at rendering (hence the gaming computer)
If it is bad at rendering, it is also bad at gaming. I mainly use it because it protects my right
to privacy and free speech more than windows or chrome.

Lastly, we have a 6 year old gaming laptop. GTX 1060. Not that impressive.
Software wise, its a proprietary cess pool. It runs Windows 11, Opera GX, Chrome, Discord,
VS Code, CCleaner, all the usuall spyware. (Ok, CCleaner and VS Code arnt spyware but they're
still owned by corperations and are closed source). The reason I can't install Linux is because
the main drive uses Secure Boot. Even with it disabled, its still there wich means the drive can
not be detected by Linux (5.XX at least). If you want to see if you can help me, its an M.2 drive
from 2015, it has roughly 100GB of space. I tried `fdisk -l`, and `lsblk`, and even `ls /dev|grep sd`
and `ls /dev|grep nvme` and I get nothing. All I get is `/dev/sda` wich is my other 250GB SSD.

If I had to describe my perfect software combo, I would say:

Hello welcome to Linus Torvalds' software shack may I take your order?

Yes do you take Artix Linux? I'd like a
    `base` `linux` `linux-firmware` `openrc`\*1 `elogind-openrc` with a
    `vim`\*2 `git` `sudo` `vi`\*3 `man-pages` and `man-db` on `htop`, and a little bit of
    `wpa_supplicant` `wpa_supplicant-openrc` and also some `openssh` `openssh-openrc`
    with the `xorg` and the `xorg-apps` and of course `xf86-video-intel` or `xf86-video-amdgpu`
    whichever works best. Also I want `plasma` of course.
    And I prefer `xorg-xinit` but `sddm` and `sddm-openrc` works too.
    Also try to get me some `librewolf-bin [AUR]` and probibly `flatpak` `xdg-portal-kde`\*4
    Also I spesifically want `tesseract-data-eng`\*5 and `steam` on the side.
    I also want `krita`\*6 or `obs-studio`\*6  if you have em.
    Oh, nearly forgot, `pulseaudio`\*7 `pulseaudio-openrc` `pusleaudio-bluetooth` `pulseaudio-alsa`!
    Oh and also `dhcpcd` `dhcpcd-openrc` and `grub` `efiutils` `os-prober`. Sorry, keep forgeting things!
    Of course, make sure to enable stuff at the end!
    
    for i in wpa_supplicant dhcpcd pulseaudio openssh sddm
    do sudo rc-update add $i
    done
    

- 1 I like openrc
- 2 With powerline
- 3 needed for sudo
- 4 flatpak needs xdg-desktop-protal wich has many verisions. Get the KDE one.
- 5 English version of tesseract. If you don't spesify, it will ask you to choose one
and you gota spend forever trying to find the english one in the list.
- 6 The arch package is unoffitial.
- 7 I know pipewire is better but it just dosn't work on my hardware.
