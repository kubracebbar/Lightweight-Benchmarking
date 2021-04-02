#ifndef __ESTATE_H__
#define __ESTATE_H__

#include <string.h>
#include <stdlib.h>

/* 
 * No. of block cipher rounds to be used
 */ 
#define CRYPTO_BC_NUM_ROUNDS (40)

/* 
 * Block cipher's block size
 */ 
#define CRYPTO_BLOCKBYTES (16)

/* 
 * Block cipher's tweak size in bytes
 */ 
#define CRYPTO_TWEAKBYTES (1)

/**********************************************************************
 * 
 * @name	:	PARTIAL_BLOCK_LEN
 * 
 * @note	:	Computes the number of bytes in the (possibly) partial
 * 				block.
 * 
 **********************************************************************/		
#define PARTIAL_BLOCK_LEN(blks_num,byte_len)	((byte_len-((blks_num-1)*CRYPTO_BLOCKBYTES)))

/*
 * Generate encryption round keys.
 */
#define _TWEGIFT_ENC_ROUND_KEY_GEN(round_keys, key)		(generate_round_keys(round_keys, key))

/*
 * Generate decryption round keys.
 */
#define _TWEGIFT_DEC_ROUND_KEY_GEN(round_keys, key)		(generate_round_keys(round_keys, key))

typedef unsigned char u8;
typedef unsigned long long u64;

void generate_round_keys(u8 (*round_key_nibbles)[32], const u8 *key_bytes);

void twegift_enc(u8 *ct, const u8 (*round_keys)[32], const u8 *twk, const u8 *pt);

void twegift_dec(u8 *pt, const u8 (*round_keys)[32], const u8 *twk, const u8 *ct);

#endif
