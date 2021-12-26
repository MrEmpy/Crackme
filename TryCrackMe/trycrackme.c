#include <stdio.h>
#include <string.h>

void banner() {
    printf(R"EOF(
  _____          ___             _   __  __     
 |_   _| _ _  _ / __|_ _ __ _ __| |_|  \/  |___ 
   | || '_| || | (__| '_/ _` / _| / / |\/| / -_)
   |_||_|  \_, |\___|_| \__,_\__|_\_\_|  |_\___|
           |__/                                 
                       
)EOF");
}

int main(int argc, char** argv) {
    char key[] = "4@ss724536";
    char input_key[50];
    int len = strlen(key);
    char hex[100], string[50];

    banner();
    printf("Put the key: ");
    scanf("%s", input_key);
    for (int i = 0, j = 0; i < len; ++i, j += 2)
        sprintf(hex + j, "%02x", key[i] & 0xff);

    // printf("%s", hex);
    if (strncmp(input_key, hex, strlen(hex))) {
        printf("[-] Incorrect key!");
        return -1;
    }
    else {
        printf("[+] Correct key! Now create a simple keygen.");
        return 0;
    }
}