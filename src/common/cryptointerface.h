//ADD by wang
#ifndef TOR_CRYPTOINTERFACE_H
#define TOR_CRYPTOINTERFACE_H

#if 0
#ifndef USE_CUSTOM_CRYPTO
#define USE_CUSTOM_CRYPTO
#endif
#endif


typedef struct custom_cnt_cipher custom_cnt_cipher_t;

custom_cnt_cipher_t* custom_new_cipher(const uint8_t *key, const uint8_t *iv,
                                 int key_bits);
void custom_cipher_free(custom_cnt_cipher_t *cipher);
void custom_crypt_inplace(custom_cnt_cipher_t *cipher, char *data, size_t len);

#endif
//endADD
