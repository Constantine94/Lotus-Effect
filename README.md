# Lotus-Effect

Quick and small, multi-tasking operating system for 64-bit processors from the x64 family.

Still in progress.

![screenshot](https://blackdev.org/shot/1684.png)

External resources:

  -  https://github.com/daniruiz/Flat-Remix icon theme,
  -  https://www.deviantart.com/lavalon/art/Oxygen-Cursors-76614092 cursor theme.

Run:

	qemu-system-x86_64 -boot a -drive format=raw,file=cyjon.img,index=0,if=floppy -m 32 -smp 2 -rtc base=localtime
