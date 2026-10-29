#ifndef INC_LED_DISPLAY_H_
#define INC_LED_DISPLAY_H_



void display7SEG(int num);


// From ex06
void update_buffer(int mode, int value);	// fills the 4-digit buffer
void scan_leds(void);						// show the next digit
void leds_all_off(void);
void leds_toggle_color(int color);			// 0 = red, 1 = amber, 2 = green (both roads)

void output_init(void);
void fsm_for_output_processing(void);



#endif /* INC_LED_DISPLAY_H_ */
