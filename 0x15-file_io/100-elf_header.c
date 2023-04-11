#include "main.h"

/**
 * main - Progam that work exactly as 'readelf -h'
 * @argv: argument vector
 * @argc: argument count
 * Return: 0 for success
 */

int main(int argc, char **argv)
{	int fd;
	int i;
	Elf64_Ehdr header;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: elf_header elf_filename\n");
		exit(98);
	}

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		fprintf(stderr, "Error: could not open file '%s'\n", argv[1]);
		exit(98);
	}

	if (read(fd, &header, sizeof(header)) != sizeof(Elf64_Ehdr))
	{
		fprintf(stderr, "Error: could not read ELF header from file '%s'\n",
		argv[1]);
		 exit(98);
	}

	if (header.e_ident[EI_MAG0] != ELFMAG0 ||
	header.e_ident[EI_MAG1] != ELFMAG1 ||
	header.e_ident[EI_MAG2] != ELFMAG2 ||
	header.e_ident[EI_MAG3] != ELFMAG3)
	{
	fprintf(stderr, "Error: file '%s' is not an ELF file\n",
	argv[1]);
		exit(98);
	}



	printf("ELF Header:\n");
	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x ", header.e_ident[i]);
	}
	printf("\n");
	printf("  Class:			     %s\n",
	header.e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32" : "ELF64");
	printf("  Data:				     %s\n",
	header.e_ident[EI_DATA] == ELFDATA2LSB ?
	"2's complement, little endian" : "2's complement, big endian");
	printf("  Version:                           %d (current)\n",
	header.e_ident[EI_VERSION]);
	printf("  OS/ABI:                            ");
	switch (header.e_ident[EI_OSABI])
	{
		case ET_NONE:
		printf("UNIX - System V\n");
		break;
		case ELFOSABI_HPUX:
		printf("UNIX - HP-UX\n");
		break;
		case ELFOSABI_NETBSD:
		printf("UNIX - NetBSD\n");
		break;
		case ELFOSABI_LINUX:
		printf("UNIX - Linux\n");
		break;
		case ELFOSABI_SOLARIS:
		printf("UNIX - Solaris\n");
		break;
		case ELFOSABI_AIX:
		printf("UNIX - AIX\n");
		break;
		case ELFOSABI_IRIX:
		printf("UNIX - IRIX\n");
		break;
		case ELFOSABI_FREEBSD:
		printf("UNIX - FreeBSD\n");
		break;
		case ELFOSABI_TRU64:
		printf("UNIX - TRU64\n");
		break;
		case ELFOSABI_MODESTO:
		printf("Novell - Modesto\n");
		break;
		case ELFOSABI_OPENBSD:
		printf("UNIX - OpenBSD\n");
		break;
		case ELFOSABI_ARM:
		printf("ARM\n");
		break;
		case ELFOSABI_STANDALONE:
		printf("Standalone App\n");
		break;
		default:
		printf("<unknown: %x>\n", header.e_ident[EI_OSABI]);
		break;
	}
	printf("  ABI Version:			     %d\n", header.e_ident[EI_ABIVERSION]);
	printf("  Type:                              ");
	switch (header.e_type)
	{
		case ET_NONE:
		printf("NONE (Unknown type)\n");
		break;
		case ET_REL:
		printf("REL (Relocatable file)\n");
		break;
		case ET_EXEC:
		printf("EXEC (Executable file)\n");
		break;
		case ET_DYN:
		printf("DYN (Shared object file)\n");
		break;
		case ET_CORE:
		printf("CORE (Core file)\n");
		break;
		default:
		printf("<unknown>\n");
		break;
	}
	printf("  Machine:			     ");
	switch (header.e_machine)
	{
		case EM_NONE:
		printf("An unknown machine\n");
		break;
		case  EM_M32:
		printf("AT&T WE 32100\n");
		break;
		case EM_SPARC:
		printf("Sun Microsystems SPARC\n");
		break;
		case EM_386:
		printf("Intel 80386\n");
		break;
		case EM_68K:
		printf("Motorola 68000\n");
		break;
		case EM_88K:
		printf("Motorola 88000\n");
		break;
		case EM_860:
		printf("Intel 80860\n");
		break;
		case EM_MIPS:
		printf("MIPS RS3000 (big-endian only)\n");
		break;
		case EM_PARISC:
		printf("HP/PA\n");
		break;
		case EM_SPARC32PLUS:
		printf("SPARC with enhanced instruction set\n");
		break;
		case EM_PPC:
		printf("PowerPC\n");
		break;
		case EM_PPC64:
		printf("PowerPC 64-bit\n");
		break;
		case EM_S390:
		printf("IBM S/390\n");
		break;
		case EM_ARM:
		printf("Advanced RISC Machines\n");
		break;
		case EM_SH:
		printf("Renesas SuperH\n");
		break;
		case EM_SPARCV9:
		printf("SPARC v9 64-bit\n");
		break;
		case EM_IA_64:
		printf("Intel Itanium\n");
		break;
		case EM_X86_64:
		printf("AMD x86-64\n");
		break;
		case EM_VAX:
		printf("DEC Vax\n");
		break;
		default:
		printf("<unknown>\n");
		break;
	}
	printf("  Version:			     ");
	switch (header.e_version)
	{
		case EV_NONE:
		printf("invalid version\n");
		break;
		case EV_CURRENT:
		printf("0x%x\n", EV_CURRENT);
		break;
		default:
		printf("<unknown: >\n");
		break;
	}
	printf("  Entry point address:               0x%lx\n",
	header.e_entry);
	printf("  Start of program headers:	     %li (bytes into file)\n",
	header.e_phoff);
	printf("  Start of section headers:	     %li (bytes into file)\n",
	header.e_shoff);
	printf("  Flags:			     0x%x\n",
	header.e_flags);
	printf("  Size of this header:		     %d (bytes)\n",
	header.e_ehsize);
	printf("  Size of program headers:	     %d (bytes)\n",
	header.e_phentsize);
	printf("  Number of program headers:	     %d\n",
	header.e_phnum);
	printf("  Size of section headers:	     %d (bytes)\n",
	header. e_shentsize);
	printf("  Number of section headers:	     %d\n",
	header.e_shnum);
	printf("  Section header string table index: %d\n",
	header.e_shstrndx);

	close(fd);
	return (1);
}






































































