#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define LEN 102

int main(void) {
    int nInput;
    scanf("%i", &nInput);
    char fPaths[nInput][LEN];
    int fSize[nInput];

    for (int i = 0; i < nInput; i++)
        scanf("%s %i", fPaths[i], &fSize[i]);

    int n, nDir, nFile, size, slen, cnt;
    scanf("%i", &n);
    char buff[LEN], content[nInput][LEN];

    for (int i = 0; i < n; i++) {
        scanf("%s", buff);
        slen = strlen(buff);
        if (buff[slen - 1] != '/') {
            buff[slen] = '/';
            buff[slen + 1] = '\0';
            slen++;
        }

        nDir = nFile = size = cnt = 0;
        for (int j = 0; j < nInput; j++) {
            char *find = strstr(fPaths[j], buff);
            if (!find || fPaths[j] != find)
                continue;
            find += slen;
            int len = strlen(find);

            char *find2 = strchr(find, '/');
            if (find2) {
                find2++;
                len -= strlen(find2);
            }

            char buff2[LEN];
            strncpy(buff2, find, len);
            buff2[len] = '\0';

            int k = 0;
            while (k < cnt && strcmp(buff2, content[k]))
                k++;

            if (cnt == k) {
                strcpy(content[cnt], buff2);
                cnt++;
                if (buff2[strlen(buff2) - 1] == '/')
                    nDir++;
                else {
                    nFile++;
                    size += fSize[j];
                }
            }
        }

        if (cnt)
            printf("%i %i %i\n", nDir, nFile, size);
        else
            puts("invalid path");
    }

    return 0;
}
