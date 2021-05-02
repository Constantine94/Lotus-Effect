# Lotus-Effect

Quick and small, multi-tasking operating system for 64-bit processors from the x64 family.

Lotus Effect, is the same system as Cyjon, but rewritten into the C language.

Already rewrited (still in progress):

  - initializacion of logical CPUs,
  - GDT, TSS and IDT,
  - memory management,
  - paging,
  - PS2 and RTC controllers,
  - graphics management,
  - task switching,
  - window manager:
    - displaying windows,
    - cursor management,
    - caching,
	- some artifacts...

Run:

	qemu-system-x86_64 -boot a -fda build/cyjon.img -m 32 -smp 2 -rtc base=localtime
