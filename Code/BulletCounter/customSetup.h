/*
 * customSetup.h
 *
 * Created: 5/12/2019 9:31:57 PM
 *  Author: mosta
 */ 


#ifndef CUSTOMSETUP_H_
#define CUSTOMSETUP_H_

void EIC_Setup()
{
	PM->APBAMASK.reg |= PM_APBAMASK_EIC;  // Enable power
	
	GCLK->CLKCTRL.reg = (uint16_t) (GCLK_CLKCTRL_CLKEN | GCLK_CLKCTRL_GEN_GCLK3 | GCLK_CLKCTRL_ID(GCM_EIC)) ;  //set up for generic clock gen 3
	while (GCLK->STATUS.bit.SYNCBUSY);

	EIC->WAKEUP.reg = EIC_WAKEUP_WAKEUPEN0 | EIC_WAKEUP_WAKEUPEN1 |EIC_WAKEUP_WAKEUPEN2 | EIC_WAKEUP_WAKEUPEN3 | EIC_WAKEUP_WAKEUPEN4 | EIC_WAKEUP_WAKEUPEN5;	//Force wakeup for A1 and 4
}



#endif /* CUSTOMSETUP_H_ */