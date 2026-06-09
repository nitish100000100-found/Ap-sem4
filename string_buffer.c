#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char *data;
    size_t length;
    size_t capacity;
} StringBuffer;


// Initialize buffer
StringBuffer* sb_init(size_t initial_capacity) {

    StringBuffer *sb = malloc(sizeof(StringBuffer));

    if(sb == NULL) {
        printf("Memory allocation failed\n");
        return NULL;
    }

    sb->data = malloc(initial_capacity);

    if(sb->data == NULL) {
        free(sb);
        printf("Memory allocation failed\n");
        return NULL;
    }

    sb->length = 0;
    sb->capacity = initial_capacity;

    sb->data[0] = '\0';

    return sb;
}


// Append function
void sb_append(StringBuffer *sb, const char *str) {

    size_t str_len = strlen(str);

    // check if enough space exists
    while(sb->length + str_len + 1 > sb->capacity) {

        size_t new_capacity = sb->capacity * 2;

        // safe realloc
        char *temp = realloc(sb->data, new_capacity);

        if(temp == NULL) {
            printf("Reallocation failed\n");
            return;
        }

        sb->data = temp;
        sb->capacity = new_capacity;

        printf("Buffer grew to: %zu\n", sb->capacity);
    }

    strcat(sb->data, str);

    sb->length += str_len;
}


// Destructor
void sb_free(StringBuffer *sb) {

    free(sb->data);

    free(sb);
}


int main() {

    StringBuffer *sb = sb_init(5);

    if(sb == NULL)
        return 1;

    printf("Initial capacity: %zu\n\n", sb->capacity);

    sb_append(sb,"Hello");
    printf("%s\n", sb->data);

    sb_append(sb," World");
    printf("%s\n", sb->data);

    sb_append(sb," Dynamic");
    printf("%s\n", sb->data);

    sb_append(sb," Buffer");
    printf("%s\n", sb->data);


    printf("\nFinal string: %s\n", sb->data);

    sb_free(sb);

    printf("Memory freed\n");

    return 0;
}
