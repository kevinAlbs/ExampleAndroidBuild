#include <bson/bson.h>

int main() {
    bson_t *bson;
    uint8_t data[] = {5, 0, 0, 0, 0};
    bson = bson_new_from_data(data, sizeof(data));
    return 0;
}