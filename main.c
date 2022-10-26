/**
  ****************************************************************************
  * @file    main.c
  * @author  Saber Chaabane
  * @brief   Macros 
  * @version V1.0.0
  * @date    26-10-2022
  *****************************************************************************/
/* Includes ------------------------------------------------------------------*/

/* Macros --------------------------------------------------------------------*/

#define INTEL 0  // Change this to 1 if the architecture is INTEL
#define OPERATION(A,B) (INTEL)?A+B:A*B // If the arch is defined as INTEL, sum A and B otherwise multiply them
#define MIN_MAX(A,B) (INTEL)?((A<B)?A:B):((A<B)?B:A) //If the arch is INTEL, return the min otherwise return the max
#define X 5
#define Y 4
/* Private function prototypes -----------------------------------------------*/

/* Private functions ---------------------------------------------------------*/

/**
  * @brief  Main program
  * @param  None
  * @retval None
  */
int main(void)
{
  int Operation_Result = OPERATION(X,Y);
  int Comparison_Result = MIN_MAX(X,Y);
  while(1)
  {
  }
}

/**************************************END OF FILE**************************************/