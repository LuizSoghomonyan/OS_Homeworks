#include<stdio.h>
#include<string.h>
#include<fcntl.h>
#include<unistd.h>
#include<sys/dir.h>

void traverseRecursive(const char* dirname) {
    DIR* dir = opendir(dirname);
    if (!dir) {
        return;
    }
    printf("%s \\\n", dirname);

    char path[256] = {'\0'};
    struct dirent * entry;

    while ((entry = readdir(dir))) {
        if (entry->d_type == DT_DIR) {
           if (strcmp(entry->d_name, ".") && strcmp(entry->d_name, "..")) {
               printf("%s \\\n", entry->d_name);
               strcpy(path, dirname);
               strcat(path, "/");
               strcat(path, entry->d_name);
               traverseDirectory(path);
           }
        } else {
            printf("  %s\n", entry->d_name);
        }
    }
    closedir(dir);

}

int main() {
    traverseRecursive("lesson2");
}
