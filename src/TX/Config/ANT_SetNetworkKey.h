#include <TX/ANT_AntRequest.h>

#include <ANT_defines.h>

/**
 * Represents a set network key message, it is used to configure
 * a network key on the ANT radio
 */
class SetNetworkKey : public AntRequest {
public:
    SetNetworkKey();
    void setNetwork(uint8_t network);
    void setKey(uint8_t* key);
    void setKeyByte(uint8_t byte, uint8_t pos);
    uint8_t getNetwork();
    void getKey(uint8_t* arr);
    uint8_t getKeyByte(uint8_t pos);
private:
    uint8_t getData(uint8_t pos);
    uint8_t getDataLength();
    uint8_t _network;
    uint8_t _key[NETWORK_KEY_SIZE];
};