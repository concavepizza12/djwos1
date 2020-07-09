nasm -f elf32 kernel.asm -o kernelasm.o
gcc -m32 -c kernel.c -o kernelc.o -ffreestanding
ld -m elf_i386 -T link.ld -o kernel.bin kernelasm.o kernelc.o
qemu-system-i386 -kernel kernel.bin
grub-mkrescue -o djwos.iso

read a
