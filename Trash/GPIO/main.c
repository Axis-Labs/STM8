# include "iostm8s105c6.h"

void Delay()
{
  for (unsigned long delay_count=0; delay_count<10000; delay_count++);
};  

int main( void )
{
  PE_DDR_bit.DDR6 = 0;
  PE_CR1_bit.C16 = 1;
  PD_DDR_bit.DDR0 = 1;
  PD_CR1_bit.C10 = 1;
  PD_CR2_bit.C20 = 0;
  while(PE_IDR_bit.IDR6 == 1);
  while(1)
  {
    
    PD_ODR_bit.ODR0 = ~(PD_ODR_bit.ODR0);
    Delay();
   // PD_ODR_bit.ODR0 = 0;
   // Delay();
    
    
  }
  
}
