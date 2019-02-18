#include <stdio.h>
#include <stdint.h>

int main(void)
{

	//Initial Number 0x H3 H2 H1 H0
	uint16_t num = 0xABCD;
	//Numbers Initial Number is operated with
	uint16_t changes_array[4] = {0xFF0F, 0x00F0, 0x00A0, 0x0050};


	//0xHHHH -> 0xHH0H
	uint16_t ans = num & changes_array[0];
	printf("%x\n", ans);
	
	//0xHHHH -> 0xHHFH
	ans = num | changes_array[1];
	printf("%x\n", ans);

	//0xHHHH -> 0xHH6H
	ans = num ^ changes_array[2];
	printf("%x\n", ans);

	//0xHHHH -> 0xHH9H
	ans = num ^ changes_array[3];
	printf("%x\n", ans);

	//0xHHHH -> 0xHHIH 	Where I is 15 - H2
	ans = num ^ changes_array[1];
	printf("%x\n", ans);

	//0xHHHH -> 0x 0 H3 H2 H1
	ans = num >> 4;
	printf("%x\n", ans);

	
}
