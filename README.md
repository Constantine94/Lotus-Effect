# Lotus-Effect

Quick and small, multi-tasking operating system for 64-bit processors from the x64 family.

Lotus Effect, is the same system as Cyjon, but rewritten into the C language.

![screenshot](https://blackdev.org/shot/1511.png)

Already rewrited (still in progress):

  - initializacion of logical CPUs,
  - GDT, TSS and IDT,
  - memory management,
  - paging,
  - PS2 and RTC controllers,
  - graphics management,
  - task switching,
  - inter process communication (IPC),
  - window manager (WM):
    - displaying windows,
    - cursor management,
    - caching,
	- windows movement.
  - graphical user interface (GUI):
  	- header,
	- label,
	- menu window (show & hide),
	- menu (point and click ready),
	- vfs {in progress... 25.05.2021}

Run:

	qemu-system-x86_64 -boot a -drive format=raw,file=cyjon.img,index=0,if=floppy -m 32 -smp 2 -rtc base=localtime
