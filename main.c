/**
  ******************************************************************************
  * @file    main.c
  * @author  Mouadh Dahech
  * @brief   How to develop structured code 
  * @version V1.0.0
  * @date    16-10-2022
  *****************************************************************************/
/* Includes ------------------------------------------------------------------*/

/* Macros --------------------------------------------------------------------*/
#define SOM
//#define MUL
#define INTEL
//#define OTHERS


/* Private function prototypes -----------------------------------------------*/
static int sum(int a, int b);
static int mul(int a, int b);

/* Private functions ---------------------------------------------------------*/

/**
  * @brief  Main program
  * @param  None
  * @retval None
  */
int main(void)
{
#ifdef SOM
  int SumResult = sum(1,2);
#endif
#ifdef MUL
  int MulResult = mul(1,2);
#endif
  while (1)
  {
   
  }
}
#ifdef SOM
static int sum(int a, int b)
{
  return(a+b);
}
#endif
#ifdef MUL
static int mul(int a, int b)
{
  return(a*b);
}
#endif
/**************************************END OF FILE**************************************/
