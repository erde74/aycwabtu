
#include <string.h>

#include "aycwabtu_config.h"

void AYCW_INLINE aycw_block_key_perm(dvbcsa_bs_word_t* in, dvbcsa_bs_word_t* out);
void aycw_block_key_schedule(const dvbcsa_bs_word_t* keys, dvbcsa_bs_word_t* kk);
void AYCW_INLINE aycw_block_sbox(dvbcsa_bs_word_t *w);
void aycw_init_block(void);
void aycw_block_decrypt(const dvbcsa_bs_word_t* keys, dvbcsa_bs_word_t* r);
void aycw_block_xor(dvbcsa_bs_word_t *r, dvbcsa_bs_word_t *bs_data);
