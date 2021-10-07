# Lotus-Effect

Quick and small, multi-tasking operating system for 64-bit processors from the x64 family.

Still in progress.

![screenshot](https://blackdev.org/shot/1708.png)

External resources:

  -  https://github.com/KDE/breeze-icons icon theme,
  -  https://www.deviantart.com/lavalon/art/Oxygen-Cursors-76614092 cursor theme,
  -  https://addy-dclxvi.github.io/post/bitmap-fonts/ font bitmap.

Run:

	qemu-system-x86_64 -enable-kvm -drive format=raw,file=cyjon.raw -m 32 -rtc base=localtime
