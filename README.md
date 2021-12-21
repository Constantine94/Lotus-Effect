![screenshot](https://blackdev.org/logo.png)

Quick and small, multi-tasking operating system for 64-bit processors from the x64 family.

Still in progress (right now: network).

Added VirtualBox disk image.

![screenshot](https://blackdev.org/shot/1720.png)

External resources:

  -  https://github.com/KDE/breeze-icons icon theme,
  -  https://www.deviantart.com/lavalon/art/Oxygen-Cursors-76614092 cursor theme,
  -  https://addy-dclxvi.github.io/post/bitmap-fonts/ font bitmap,
  -  https://www.peakpx.com/en/hd-wallpaper-desktop-njqqa wallpaper.

Run:

	qemu-system-x86_64 -enable-kvm -cpu host -smp 1 -m 64 -drive format=raw,file=build/cyjon.raw,index=0 -netdev user,id=ethx -device e1000,netdev=ethx -rtc base=localtime -serial file:serial.log
