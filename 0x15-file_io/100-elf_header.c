#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>

void print_elf_header(Elf64_Ehdr *header)
{
   printf("ELF Header:\n");
   printf(" Magic:  ");
   for (int i = 0; i < EI_NIDENT; i++)
       printf("%02x ", header->e_ident[i]);
   printf("\n");

   printf(" Class:                           ");
   switch (header->e_ident[EI_CLASS])
   {
       case ELFCLASS32:
           printf("ELF32\n");
           break;
       case ELFCLASS64:
           printf("ELF64\n");
           break;
       default:
           printf("Unknown\n");
           break;
   }

   printf(" Data:                            ");
   switch (header->e_ident[EI_DATA])
   {
       case ELFDATA2LSB:
           printf("2's complement, little endian\n");
           break;
       case ELFDATA2MSB:
           printf("2's complement, big endian\n");
           break;
       default:
           printf("Unknown\n");
           break;
   }

   printf(" Version:                         %d (current)\n", header->e_ident[EI_VERSION]);

   printf(" OS/ABI:                          ");
   switch (header->e_ident[EI_OSABI])
   {
       case ELFOSABI_SYSV:
           printf("UNIX - System V\n");
           break;
       case ELFOSABI_NETBSD:
           printf("UNIX - NetBSD\n");
           break;
       case ELFOSABI_SOLARIS:
           printf("UNIX - Solaris\n");
           break;
       default:
           printf("Unknown\n");
           break;
   }

   printf(" ABI Version:                     %d\n", header->e_ident[EI_ABIVERSION]);

   printf(" Type:                            ");
   switch (header->e_type)
   {
       case ET_EXEC:
           printf("EXEC (Executable file)\n");
           break;
       case ET_DYN:
           printf("DYN (Shared object file)\n");
           break;
       default:
           printf("Unknown\n");
           break;
   }

   printf(" Entry point address:              %#lx\n", (unsigned long)header->e_entry);
}

int main(int argc, char **argv)
{
   int fd;
   Elf64_Ehdr header;

   if (argc != 2)
   {
       printf("Usage: %s elf_filename\n", argv[0]);
       return 98;
   }

   fd = open(argv[1], O_RDONLY);
   if (fd == -1)
   {
       perror("Error");
       return 98;
   }

   if (read(fd, &header, sizeof(header)) != sizeof(header))
   {
       printf("Error: Can't read ELF header\n");
       close(fd);
       return 98;
   }

   if (header.e_ident[EI_MAG0] != ELFMAG0 || header.e_ident[EI_MAG1] != ELFMAG1 ||
       header.e_ident[EI_MAG2] != ELFMAG2 || header.e_ident[EI_MAG3] != ELFMAG3)
   {
       printf("Error: Not an ELF file\n");
       close(fd);
       return 98;
   }

   print_elf_header(&header);

   close(fd);
   return 0;
}

