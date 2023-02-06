#ifndef ELF_LOADER_LOADER_H
#define ELF_LOADER_LOADER_H

#include <stdint.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct {
    uintptr_t base;
    uintptr_t entry;
    uintptr_t header;
    size_t header_num;
    size_t header_size;
} elf_context_t;

int load_elf(const void *buffer, elf_context_t ctx[2]);
int load_elf_file(const char *path, elf_context_t ctx[2]);
int jump_to_entry(elf_context_t ctx[2], int argc, char **argv, char **envp);

#ifdef __cplusplus
}
#endif

#endif //ELF_LOADER_LOADER_H
