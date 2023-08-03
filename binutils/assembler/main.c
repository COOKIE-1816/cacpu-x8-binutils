#include <stdio.h>

char* help =    "Compiler for 8-bit CA CPU"
                "Usage: cacpu-x8-asm [params] <file>"
                "Params:"
                "   --help          shows this."
                "   --version -v    prnt version and exit."
                "   --outf=<file>   specifies an output file."
                "   --no-o          disables all the optimalization."
                "   --no-error      try to continue if error happens."
                "   --no-preproc    skips preprocession."
                "   --no-asm        preprocession only."
                "   --inc <file>    includes file."
                "   --def <macro>   defines a macro."
                ;


int helpout() {

}

int main(int __argc, char** __argv) {
    puts("+-------------------------------+");
    puts("| CA CPU x8 Binutils: Assembler |");
    puts("|      version: 0.0.1.01        |");
    puts("|                               |");
    puts("|   Copyright (C) COOKIE 2023   |");
    puts("+-------------------------------+\n\n");
}