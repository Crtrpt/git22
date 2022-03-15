#include <stdio.h>
#include "git2.h"
#include <stdbool.h>

int main() {
    git_libgit2_init();
    git_repository* repo = NULL;
    int error = git_repository_init(&repo, "E:\\rep", false);
    git_libgit2_shutdown();

    printf("hello git2\n");
    return 0;
}
