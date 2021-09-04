#ifndef PACKAGE
#define PACKAGE

#include <stdint.h>

namespace package_error {
    static const int FULL = 1;
    static const int EMPTY = 2;
    static const int NOT_FOUND = 3;
    static const int INVALID_PAYLOAD = 4;
};

class Package {
    public:
        Package(uint8_t size);
        void loads(uint8_t* payload, uint8_t size);
        void addData(uint8_t key, uint16_t data);
        void addData(uint8_t index, uint8_t msb, uint8_t lsb);
        bool hasValue(uint8_t key);
        uint16_t getValue(uint8_t key);
        uint8_t getSize();
        uint8_t getIndex();
        uint8_t* dump();
    private:
        uint8_t size;
        uint8_t index;
        uint8_t* buffer;
        int findValueIndex(uint8_t key);
};


#endif