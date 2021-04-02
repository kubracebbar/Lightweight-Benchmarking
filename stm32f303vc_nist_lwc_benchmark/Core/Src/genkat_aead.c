//
// NIST-developed software is provided by NIST as a public service.
// You may use, copy and distribute copies of the software in any medium,
// provided that you keep intact this entire notice. You may improve, 
// modify and create derivative works of the software or any portion of
// the software, and you may copy and distribute such modifications or
// works. Modified works should carry a notice stating that you changed
// the software and should note the date and nature of any such change.
// Please explicitly acknowledge the National Institute of Standards and 
// Technology as the source of the software.
//
// NIST-developed software is expressly provided "AS IS." NIST MAKES NO 
// WARRANTY OF ANY KIND, EXPRESS, IMPLIED, IN FACT OR ARISING BY OPERATION
// OF LAW, INCLUDING, WITHOUT LIMITATION, THE IMPLIED WARRANTY OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE, NON-INFRINGEMENT AND DATA ACCURACY. NIST
// NEITHER REPRESENTS NOR WARRANTS THAT THE OPERATION OF THE SOFTWARE WILL BE 
// UNINTERRUPTED OR ERROR-FREE, OR THAT ANY DEFECTS WILL BE CORRECTED. NIST 
// DOES NOT WARRANT OR MAKE ANY REPRESENTATIONS REGARDING THE USE OF THE SOFTWARE
// OR THE RESULTS THEREOF, INCLUDING BUT NOT LIMITED TO THE CORRECTNESS, ACCURACY,
// RELIABILITY, OR USEFULNESS OF THE SOFTWARE.
//
// You are solely responsible for determining the appropriateness of using and 
// distributing the software and you assume all risks associated with its use, 
// including but not limited to the risks and costs of program errors, compliance 
// with applicable laws, damage to or loss of data, programs or equipment, and 
// the unavailability or interruption of operation. This software is not intended
// to be used in any situation where a failure could cause risk of injury or 
// damage to property. The software developed by NIST employees is not subject to
// copyright protection within the United States.
//

// disable deprecation for sprintf and fopen
#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <stdio.h>
#include <string.h>
#include "crypto_aead.h"
#include "crypto_hash.h"
#include "stm32f3xx_hal.h"
#include "stm32f3xx_ll_tim.h"
#include <stdarg.h>
#include "lwc_config.h"


#ifdef LWC_ALGO_AEAD_ELEPHANT_160V1
#include "../algos/elephant/Implementations/crypto_aead/elephant160v1/ref/api.h"
#define ALGO_NAME_STR	"LWC_ALGO_AEAD_ELEPHANT_160V1"
#endif

#ifdef LWC_ALGO_AEAD_ELEPHANT_176V1
#include "../algos/elephant/Implementations/crypto_aead/elephant176v1/ref/api.h"
#define ALGO_NAME_STR	"LWC_ALGO_AEAD_ELEPHANT_176V1"
#endif

#ifdef LWC_ALGO_AEAD_ELEPHANT_200V1
#include "../algos/elephant/Implementations/crypto_aead/elephant200v1/ref/api.h"
#define ALGO_NAME_STR	"LWC_ALGO_AEAD_ELEPHANT_200V1"
#endif


#ifdef LWC_ALGO_AEAD_ESTATE_ESTATETWEAES128V1
#include "../algos/estate/Implementations/crypto_aead/estatetweaes128v1/ref/api.h"
#define ALGO_NAME_STR	"LWC_ALGO_AEAD_ESTATE_ESTATETWEAES128V1"
#endif

#ifdef LWC_ALGO_AEAD_ESTATE_ESTATETWEGIFT128V1
#include "../algos/estate/Implementations/crypto_aead/estatetwegift128v1/ref/api.h"
#define ALGO_NAME_STR	"LWC_ALGO_AEAD_ESTATE_ESTATETWEGIFT128V1"
#endif

#ifdef LWC_ALGO_AEAD_ESTATE_SESTATETWEAES128V1
#include "../algos/estate/Implementations/crypto_aead/sestatetweaes128v1/ref/api.h"
#define ALGO_NAME_STR	"LWC_ALGO_AEAD_ESTATE_SESTATETWEAES128V1"
#endif


#ifdef LWC_ALGO_AEAD_FORKAE_PAEFFORKSKINNYB128T192N48V1
#include "../algos/forkae/Implementations/crypto_aead/paefforkskinnyb128t192n48v1/ref/api.h"
#define ALGO_NAME_STR	"LWC_ALGO_AEAD_FORKAE_PAEFFORKSKINNYB128T192N48V1"
#endif
#ifdef LWC_ALGO_AEAD_FORKAE_PAEFFORKSKINNYB128T256N112V1
#include "../algos/forkae/Implementations/crypto_aead/paefforkskinnyb128t256n112v1/ref/api.h"
#define ALGO_NAME_STR	"LWC_ALGO_AEAD_FORKAE_PAEFFORKSKINNYB128T256N112V1"
#endif
#ifdef LWC_ALGO_AEAD_FORKAE_PAEFFORKSKINNYB128T288N104V1
#include "../algos/forkae/Implementations/crypto_aead/paefforkskinnyb128t288n104v1/ref/api.h"
#define ALGO_NAME_STR	"LWC_ALGO_AEAD_FORKAE_PAEFFORKSKINNYB128T288N104V1"
#endif
#ifdef LWC_ALGO_AEAD_FORKAE_PAEFFORKSKINNYB64T192N48V1
#include "../algos/forkae/Implementations/crypto_aead/paefforkskinnyb64t192n48v1/ref/api.h"
#define ALGO_NAME_STR	"LWC_ALGO_AEAD_FORKAE_PAEFFORKSKINNYB64T192N48V1"
#endif
#ifdef LWC_ALGO_AEAD_FORKAE_SAEFFORKSKINNYB128T192N56V1
#include "../algos/forkae/Implementations/crypto_aead/saefforkskinnyb128t192n56v1/ref/api.h"
#define ALGO_NAME_STR	"LWC_ALGO_AEAD_FORKAE_SAEFFORKSKINNYB128T192N56V1"
#endif
#ifdef LWC_ALGO_AEAD_FORKAE_SAEFFORKSKINNYB128T256N120V1
#include "../algos/forkae/Implementations/crypto_aead/saefforkskinnyb128t256n120v1/ref/api.h"
#define ALGO_NAME_STR	"LWC_ALGO_AEAD_FORKAE_SAEFFORKSKINNYB128T256N120V1"
#endif


#ifdef LWC_ALGO_AEAD_GIFT_COFB_GIFTCOFB128V1
#include "../algos/gift-cofb/Implementations/crypto_aead/giftcofb128v1/ref/api.h"
#define ALGO_NAME_STR	"LWC_ALGO_AEAD_GIFT_COFB_GIFTCOFB128V1"
#endif



#ifdef LWC_ALGO_COMET128AESV1
#include "../algos/comet/Implementations/crypto_aead/comet128aesv1/ref/api.h"
#define ALGO_NAME_STR	"LWC_ALGO_COMET128AESV1"
#endif


#ifdef LWC_ALGO_AEAD_XOODYAKV1
#include "../algos/xoodyak/Implementations/crypto_aead/xoodyakv1/ref/api.h"
#define ALGO_NAME_STR	"LWC_ALGO_AEAD_XOODYAKV1"
#endif


#ifdef LWC_ALGO_HASH_XOODYAKV1
#include "../algos/xoodyak/Implementations/crypto_hash/xoodyakv1/ref/api.h"
#define ALGO_NAME_STR	"LWC_ALGO_HASH_XOODYAKV1"
#endif

#ifdef LWC_ALGO_AEAD_ORIBATIDA_ORIBATIDA192V12
#include "../algos/oribatida/Implementations/crypto_aead/oribatida192v12/ref/api.h"
#define ALGO_NAME_STR	"LWC_ALGO_AEAD_ORIBATIDA_ORIBATIDA192V12"
#endif
#ifdef LWC_ALGO_AEAD_ORIBATIDA_ORIBATIDA256V12
#include "../algos/oribatida/Implementations/crypto_aead/oribatida256v12/ref/api.h"
#define ALGO_NAME_STR	"LWC_ALGO_AEAD_ORIBATIDA_ORIBATIDA256V12"
#endif


#ifdef LWC_ALGO_AEAD_PHOTON-BEETLE_PHOTONBEETLEAEAD128RATE128V1
#include "../algos/photon-beetle/photon-beetle/Implementations/crypto_aead/photonbeetleaead128rate128v1/ref/api.h"
#define ALGO_NAME_STR	"LWC_ALGO_AEAD_PHOTON-BEETLE_PHOTONBEETLEAEAD128RATE128V1"
#endif
#ifdef LWC_ALGO_AEAD_PHOTON-BEETLE_PHOTONBEETLEAEAD128RATE32V1
#include "../algos/photon-beetle/photon-beetle/Implementations/crypto_aead/photonbeetleaead128rate32v1/ref/api.h"
#define ALGO_NAME_STR	"LWC_ALGO_AEAD_PHOTON-BEETLE_PHOTONBEETLEAEAD128RATE32V1"
#endif
#ifdef LWC_ALGO_HASH_PHOTON-BEETLE_PHOTONBEETLEHASH256RATE32V1
#include "../algos/photon-beetle/photon-beetle/Implementations/crypto_hash/photonbeetlehash256rate32v1/ref/api.h"
#define ALGO_NAME_STR	"LWC_ALGO_HASH_PHOTON-BEETLE_PHOTONBEETLEHASH256RATE32V1"
#endif


#ifdef LWC_ALGO_AEAD_PYJAMASK_PYJAMASK128AEADV1
#include "../algos/pyjamask/Implementations/crypto_aead/pyjamask128aeadv1/ref/api.h"
#define ALGO_NAME_STR	"LWC_ALGO_AEAD_PYJAMASK_PYJAMASK128AEADV1"
#endif
#ifdef LWC_ALGO_AEAD_PYJAMASK_PYJAMASK96AEADV1
#include "../algos/pyjamask/Implementations/crypto_aead/pyjamask96aeadv1/ref/api.h"
#define ALGO_NAME_STR	"LWC_ALGO_AEAD_PYJAMASK_PYJAMASK96AEADV1"
#endif


#ifdef LWC_ALGO_AEAD_ROMULUS_ROMULUSM1V12
#include "../algos/romulus/Implementations/crypto_aead/romulusm1v12/ref/api.h"
#define ALGO_NAME_STR	"LWC_ALGO_AEAD_ROMULUS_ROMULUSM1V12"
#endif
#ifdef LWC_ALGO_AEAD_ROMULUS_ROMULUSM2V12
#include "../algos/romulus/Implementations/crypto_aead/romulusm2v12/ref/api.h"
#define ALGO_NAME_STR	"LWC_ALGO_AEAD_ROMULUS_ROMULUSM2V12"
#endif
#ifdef LWC_ALGO_AEAD_ROMULUS_ROMULUSM3V12
#include "../algos/romulus/Implementations/crypto_aead/romulusm3v12/ref/api.h"
#define ALGO_NAME_STR	"LWC_ALGO_AEAD_ROMULUS_ROMULUSM3V12"
#endif
#ifdef LWC_ALGO_AEAD_ROMULUS_ROMULUSN1V12
#include "../algos/romulus/Implementations/crypto_aead/romulusn1v12/ref/api.h"
#define ALGO_NAME_STR	"LWC_ALGO_AEAD_ROMULUS_ROMULUSN1V12"
#endif
#ifdef LWC_ALGO_AEAD_ROMULUS_ROMULUSN2V12
#include "../algos/romulus/Implementations/crypto_aead/romulusn2v12/ref/api.h"
#define ALGO_NAME_STR	"LWC_ALGO_AEAD_ROMULUS_ROMULUSN2V12"
#endif
#ifdef LWC_ALGO_AEAD_ROMULUS_ROMULUSN3V12
#include "../algos/romulus/Implementations/crypto_aead/romulusn3v12/ref/api.h"
#define ALGO_NAME_STR	"LWC_ALGO_AEAD_ROMULUS_ROMULUSN3V12"
#endif







#define KAT_SUCCESS          0
#define KAT_FILE_OPEN_ERROR -1
#define KAT_DATA_ERROR      -3
#define KAT_CRYPTO_FAILURE  -4

#define MAX_FILE_NAME				256



void tick_msr_start(void);
uint32_t tick_msr_end(void);
void lwc_printf(const char* format, ...);


void init_buffer(unsigned char *buffer, unsigned long long numbytes);
int aead_generate_test_vectors();
int hash_generate_test_vectors();



extern UART_HandleTypeDef huart1;
static uint32_t gb_tick_cnt;
char algo_name_str[128] = ALGO_NAME_STR;





int genkat_aead_funct(void)
{
#ifdef LWC_ALGO_AEAD
	int ret = aead_generate_test_vectors();
#endif

#ifdef LWC_ALGO_HASH
	int ret = hash_generate_test_vectors();
#endif

	return ret;
}



#ifdef LWC_ALGO_AEAD

#define MAX_MESSAGE_LENGTH			32
#define MAX_ASSOCIATED_DATA_LENGTH	32




int aead_generate_test_vectors()
{
	unsigned char       key[CRYPTO_KEYBYTES];
	unsigned char		nonce[CRYPTO_NPUBBYTES];
	unsigned char       msg[MAX_MESSAGE_LENGTH];
	unsigned char       msg2[MAX_MESSAGE_LENGTH];
	unsigned char		ad[MAX_ASSOCIATED_DATA_LENGTH];
	unsigned char		ct[MAX_MESSAGE_LENGTH + CRYPTO_ABYTES];
	unsigned long long  clen, mlen2;
	int                 func_ret = 0, ret_val = KAT_SUCCESS;


	init_buffer(key, sizeof(key));
	init_buffer(nonce, sizeof(nonce));
	init_buffer(msg, sizeof(msg));
	init_buffer(ad, sizeof(ad));


	lwc_printf("\n\n\n\nStarting...\nOptimization: %s\nAlgorithm: %s\n", OPTIMIZATION_LEVEL, algo_name_str );

	for (unsigned long long mlen = 0; (mlen <= MAX_MESSAGE_LENGTH) && (ret_val == KAT_SUCCESS); mlen += 8) {

		for (unsigned long long adlen = 0; adlen <= MAX_ASSOCIATED_DATA_LENGTH; adlen += 8) {

			lwc_printf("msg_len:%02d ad_len:%02d  ", (int)mlen, (int)adlen);

			tick_msr_start();
			func_ret = crypto_aead_encrypt(ct, &clen, msg, mlen, ad, adlen, NULL, nonce, key);
			tick_msr_end();

			lwc_printf( "enc:%08lu us:%08lu ", gb_tick_cnt, gb_tick_cnt/16);

			if ( func_ret != 0) {
				ret_val = KAT_CRYPTO_FAILURE;
				break;
			}

			tick_msr_start();
			func_ret = crypto_aead_decrypt(msg2, &mlen2, NULL, ct, clen, ad, adlen, nonce, key);
			tick_msr_end();

			lwc_printf( "dec:%08lu us:%08lu \n", gb_tick_cnt, gb_tick_cnt/16);

			if ( (func_ret != 0) || (mlen != mlen2) || (memcmp(msg, msg2, mlen) != 0) ) {
				ret_val = KAT_CRYPTO_FAILURE;
				break;
			}

		}
	}

	if(ret_val !=0 ){
		lwc_printf( "Error occurred\n");
	}

	return ret_val;
}
#endif

#ifdef LWC_ALGO_HASH

#define MAX_MESSAGE_LENGTH			1024


int hash_generate_test_vectors(){


	unsigned char       msg[MAX_MESSAGE_LENGTH];
	unsigned char		digest[CRYPTO_BYTES];
	int                 ret_val = KAT_SUCCESS;

	init_buffer(msg, sizeof(msg));

	lwc_printf("\n\n\n\nStarting...\nOptimization: %s\nAlgorithm: %s\n", OPTIMIZATION_LEVEL, algo_name_str );

	for (unsigned long long mlen = 0; mlen <= MAX_MESSAGE_LENGTH; mlen += 256) {


		lwc_printf("msg_len:%04d ", (int)mlen);

		tick_msr_start();
		ret_val = crypto_hash(digest, msg, mlen);
		tick_msr_end();

		if(ret_val == 0) {
			lwc_printf( "hash:%08lu us:%08lu \n", gb_tick_cnt, gb_tick_cnt/16);
		}else{
			ret_val = KAT_CRYPTO_FAILURE;
			break;
		}
	}

	return ret_val;
}

#endif




void init_buffer(unsigned char *buffer, unsigned long long numbytes)
{
	for (unsigned long long i = 0; i < numbytes; i++)
		buffer[i] = (unsigned char)i + '0';
}



void tick_msr_start(void){

	LL_TIM_DisableCounter(TIM2);
	LL_TIM_SetCounter(TIM2, 0);
	LL_TIM_EnableCounter(TIM2);

}

uint32_t tick_msr_end(void){

	gb_tick_cnt = LL_TIM_GetCounter(TIM2);
	return gb_tick_cnt;
}

void lwc_printf(const char* format, ...){

	static char dbg_out_buf[512];
	va_list args;

	va_start(args,format);
	vsprintf (dbg_out_buf, format, args );
	va_end(args);

	HAL_UART_Transmit(&huart1, (uint8_t *)dbg_out_buf, strlen(dbg_out_buf), 100);
}


