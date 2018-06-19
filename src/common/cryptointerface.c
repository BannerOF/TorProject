//ADD by wang
#include "orconfig.h"

#ifdef _WIN32 /*wrkard for dtls1.h >= 0.9.8m of "#include <winsock.h>"*/
  #include <winsock2.h>
  #include <ws2tcpip.h>
#endif

#include <openssl/opensslv.h>
#include "crypto.h"

#if OPENSSL_VERSION_NUMBER < OPENSSL_V_SERIES(1,0,0)
#error "We require OpenSSL >= 1.0.0"
#endif

DISABLE_GCC_WARNING(redundant-decls)

#include <assert.h>
#include <stdlib.h>
#include <string.h>
#include <openssl/aes.h>
#include <openssl/evp.h>
#include <openssl/engine.h>
#include <openssl/modes.h>

ENABLE_GCC_WARNING(redundant-decls)

#include "compat.h"
#include "cryptointerface.h"
#include "util.h"
#include "torlog.h"
#include "di_ops.h"

struct custom_cnt_cipher{
	//TODO	
	//test code
	uint8_t *m_key;
	uint8_t *m_iv;
	int m_key_bits;
};

custom_cnt_cipher_t*
custom_new_cipher(const uint8_t *key, const uint8_t *iv, int key_bits){
	//TODO
	//test code
	custom_cnt_cipher_t *ret;
	ret = (custom_cnt_cipher_t *)malloc(sizeof(custom_cnt_cipher_t));		
	ret->m_iv = iv;
	ret->m_key = key;
	ret->m_key_bits = key_bits;
	return ret;
}

void
custom_cipher_free(custom_cnt_cipher_t *cipher){
	//TODO
	//test code
	free(cipher);
}

void
custom_crypt_inplace(custom_cnt_cipher_t *cipher, char *data, size_t len){
	//TODO
	//test code
	log_notice(LD_GENERAL, "use custom crypt inplace");
}
//endADD
