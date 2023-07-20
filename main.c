/**
  ******************************************************************************
  * @file    Project/main.c 
  * @author  MCD Application Team
  * @version V2.3.0
  * @date    16-June-2017
  * @brief   Main program body
   ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; COPYRIGHT 2014 STMicroelectronics</center></h2>
  *
  * Licensed under MCD-ST Liberty SW License Agreement V2, (the "License");
  * You may not use this file except in compliance with the License.
  * You may obtain a copy of the License at:
  *
  *        http://www.st.com/software_license_agreement_liberty_v2
  *
  * Unless required by applicable law or agreed to in writing, software 
  * distributed under the License is distributed on an "AS IS" BASIS, 
  * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  * See the License for the specific language governing permissions and
  * limitations under the License.
  *
  ******************************************************************************
  */ 

/* Includes ------------------------------------------------------------------*/
#include "stm8s.h"

/* Private defines -----------------------------------------------------------*/

#define RELAY1_PORT			GPIOA
#define	RELAY1_PIN			GPIO_PIN_2

#define LEDGRP0_PORT    GPIOE
#define LEDGRP0_PIN     GPIO_PIN_5

#define LEDGRP1_PORT    GPIOA
#define LEDGRP1_PIN     GPIO_PIN_1

#define LEDGRP2_PORT    GPIOB
#define LEDGRP2_PIN     GPIO_PIN_0

#define LEDGRP3_PORT    GPIOB
#define LEDGRP3_PIN     GPIO_PIN_1

#define LEDGRP4_PORT    GPIOB
#define LEDGRP4_PIN     GPIO_PIN_2

#define SEG0_PORT       GPIOD
#define SEG0_PIN        GPIO_PIN_6

#define SEG1_PORT       GPIOD
#define SEG1_PIN        GPIO_PIN_5

#define SEG2_PORT       GPIOC
#define SEG2_PIN        GPIO_PIN_1

#define SEG3_PORT       GPIOC
#define SEG3_PIN        GPIO_PIN_2

#define SEG4_PORT       GPIOC
#define SEG4_PIN        GPIO_PIN_3

#define SEG5_PORT       GPIOC
#define SEG5_PIN        GPIO_PIN_4

#define SEG6_PORT       GPIOD
#define SEG6_PIN        GPIO_PIN_2

#define SEG7_PORT       GPIOD
#define SEG7_PIN        GPIO_PIN_0

/* Private function prototypes -----------------------------------------------*/
/* Private functions ---------------------------------------------------------*/


void delay(uint32_t count){
	
while(count--);

}

void SEG_4_1_ON_FUNC(void){
	GPIO_WriteHigh(LEDGRP2_PORT,LEDGRP2_PIN);                 // ledgrp2 -- BAÞTAN 4. SEGMENT
							//OFF
							GPIO_WriteHigh(SEG1_PORT,SEG1_PIN);           // seg1 -- B 
							GPIO_WriteLow(SEG2_PORT,SEG2_PIN);            // seg2 -- C 

							//OFF
							GPIO_WriteLow(SEG0_PORT,SEG0_PIN);            // seg0 -- A 
							GPIO_WriteHigh(SEG3_PORT,SEG3_PIN);           // seg3 -- D 
							GPIO_WriteHigh(SEG4_PORT,SEG4_PIN);           // seg4 -- E 
							GPIO_WriteHigh(SEG5_PORT,SEG5_PIN);           // seg5 -- F 
							GPIO_WriteHigh(SEG6_PORT,SEG6_PIN);           // seg6 -- G 
							
}


void SEG_4_1_OFF_FUNC(void){
	GPIO_WriteLow(LEDGRP2_PORT,LEDGRP2_PIN);                 // ledgrp2 -- BAÞTAN 4. SEGMENT
							//OFF
							GPIO_WriteLow(SEG1_PORT,SEG1_PIN);           // seg1 -- B 
							GPIO_WriteHigh(SEG2_PORT,SEG2_PIN);            // seg2 -- C 

							//OFF
							GPIO_WriteHigh(SEG0_PORT,SEG0_PIN);            // seg0 -- A 
							GPIO_WriteLow(SEG3_PORT,SEG3_PIN);           // seg3 -- D 
							GPIO_WriteLow(SEG4_PORT,SEG4_PIN);           // seg4 -- E 
							GPIO_WriteLow(SEG5_PORT,SEG5_PIN);           // seg5 -- F 
							GPIO_WriteLow(SEG6_PORT,SEG6_PIN);           // seg6 -- G 
							
}

void SEG_4_0_ON_FUNC(void){
	GPIO_WriteHigh(LEDGRP2_PORT,LEDGRP2_PIN);                 // ledgrp2 -- BAÞTAN 4. SEGMENT
							//OFF
            	GPIO_WriteHigh(SEG0_PORT,SEG0_PIN);           // seg0 -- A 
            	GPIO_WriteHigh(SEG1_PORT,SEG1_PIN);           // seg1 -- B 
	            GPIO_WriteLow(SEG2_PORT,SEG2_PIN);            // seg2 -- C 
	            GPIO_WriteLow(SEG3_PORT,SEG3_PIN);            // seg3 -- D 
	            GPIO_WriteLow(SEG4_PORT,SEG4_PIN);            // seg4 -- E 
	            GPIO_WriteLow(SEG5_PORT,SEG5_PIN);            // seg5 -- F 

							//OFF
							GPIO_WriteHigh(SEG6_PORT,SEG6_PIN);           // seg6 -- G 
							
}

void SEG_4_0_OFF_FUNC(void){
	GPIO_WriteLow(LEDGRP2_PORT,LEDGRP2_PIN);                 // ledgrp2 -- BAÞTAN 4. SEGMENT
							//OFF
            	GPIO_WriteLow(SEG0_PORT,SEG0_PIN);           // seg0 -- A 
            	GPIO_WriteLow(SEG1_PORT,SEG1_PIN);           // seg1 -- B 
	            GPIO_WriteHigh(SEG2_PORT,SEG2_PIN);            // seg2 -- C 
	            GPIO_WriteHigh(SEG3_PORT,SEG3_PIN);            // seg3 -- D 
	            GPIO_WriteHigh(SEG4_PORT,SEG4_PIN);            // seg4 -- E 
	            GPIO_WriteHigh(SEG5_PORT,SEG5_PIN);            // seg5 -- F 

							//OFF
							GPIO_WriteLow(SEG6_PORT,SEG6_PIN);           // seg6 -- G 
							
}


void main(void)
{
	GPIO_Init(GPIOA, GPIO_PIN_2, GPIO_MODE_OUT_PP_HIGH_FAST); // röle 1
	GPIO_Init(GPIOB, GPIO_PIN_0, GPIO_MODE_OUT_PP_HIGH_FAST); // ledgrp2
	GPIO_Init(GPIOD, GPIO_PIN_6, GPIO_MODE_OUT_PP_HIGH_FAST); // seg0
	GPIO_Init(GPIOD, GPIO_PIN_5, GPIO_MODE_OUT_PP_HIGH_FAST); // seg1
	GPIO_Init(GPIOC, GPIO_PIN_1, GPIO_MODE_OUT_PP_HIGH_FAST); // seg2
	GPIO_Init(GPIOC, GPIO_PIN_2, GPIO_MODE_OUT_PP_HIGH_FAST); // seg3
	GPIO_Init(GPIOC, GPIO_PIN_3, GPIO_MODE_OUT_PP_HIGH_FAST); // seg4
	GPIO_Init(GPIOC, GPIO_PIN_4, GPIO_MODE_OUT_PP_HIGH_FAST); // seg5
	GPIO_Init(GPIOD, GPIO_PIN_2, GPIO_MODE_OUT_PP_HIGH_FAST); // seg6
	GPIO_Init(GPIOD, GPIO_PIN_0, GPIO_MODE_OUT_PP_HIGH_FAST); // seg7


  while (1)
  {    
	  // Röle 1 olduðunda
    GPIO_WriteHigh(RELAY1_PORT, RELAY1_PIN);
    SEG_4_1_ON_FUNC();
    delay(60000);
    SEG_4_1_OFF_FUNC();    
    // Röle 0 olduðunda
    GPIO_WriteLow(RELAY1_PORT, RELAY1_PIN);
		SEG_4_0_ON_FUNC();
		delay(60000);
		SEG_4_0_OFF_FUNC();
		
  }
}


/*void main(void)
{
	GPIO_Init(GPIOA, GPIO_PIN_2, GPIO_MODE_OUT_PP_HIGH_FAST); // röle 1
	GPIO_Init(GPIOB, GPIO_PIN_0, GPIO_MODE_OUT_PP_HIGH_FAST); // ledgrp2
	GPIO_Init(GPIOD, GPIO_PIN_6, GPIO_MODE_OUT_PP_HIGH_FAST); // seg0
	GPIO_Init(GPIOD, GPIO_PIN_5, GPIO_MODE_OUT_PP_HIGH_FAST); // seg1
	GPIO_Init(GPIOC, GPIO_PIN_1, GPIO_MODE_OUT_PP_HIGH_FAST); // seg2
	GPIO_Init(GPIOC, GPIO_PIN_2, GPIO_MODE_OUT_PP_HIGH_FAST); // seg3
	GPIO_Init(GPIOC, GPIO_PIN_3, GPIO_MODE_OUT_PP_HIGH_FAST); // seg4
	GPIO_Init(GPIOC, GPIO_PIN_4, GPIO_MODE_OUT_PP_HIGH_FAST); // seg5
	GPIO_Init(GPIOD, GPIO_PIN_2, GPIO_MODE_OUT_PP_HIGH_FAST); // seg6
	GPIO_Init(GPIOD, GPIO_PIN_0, GPIO_MODE_OUT_PP_HIGH_FAST); // seg7

    // Röle 1 olduðunda
    GPIO_WriteHigh(RELAY1_PORT, RELAY1_PIN);
    SEG_4_1_ON_FUNC();
    delay(10000);
    SEG_4_1_OFF_FUNC();    
    // Röle 0 olduðunda
    GPIO_WriteLow(RELAY1_PORT, RELAY1_PIN);
		SEG_4_0_ON_FUNC();
		delay(10000);
		SEG_4_0_OFF_FUNC();
		
		
  while (1)
  {
  }
}
*/


#ifdef USE_FULL_ASSERT

/**
  * @brief  Reports the name of the source file and the source line number
  *   where the assert_param error has occurred.
  * @param file: pointer to the source file name
  * @param line: assert_param error line source number
  * @retval : None
  */
void assert_failed(u8* file, u32 line)
{ 
  /* User can add his own implementation to report the file name and line number,
     ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */

  /* Infinite loop */
  while (1)
  {
  }
}
#endif


/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
	