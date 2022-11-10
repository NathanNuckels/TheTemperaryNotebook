# Lets build GlibC for the C64!
## Cause I have nothing better to do right now.

One big issue. I don't know what headers come from linux, what come from gcc, and what come from glibc
so I'm just going to make random functions as I need them. I also don't know the difference between `stdio.h`,
`stdlib.h` and `string.h` since I always import them at the same time but that can be solved with a quick search
on ie.net or man7.org or man.archlinux.org or whatever you get your man pages online.

I'll start small. Make `printf` (With out the %d stuff. Thats complicated...)
