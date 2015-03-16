# EOH Badge 2015
This repo has the badges I designed for University of Illinois' [Engineering Open House] (http://eoh.ec.illinois.edu). The [student branch of IEEE] (http://ieee.illinois.edu) funded the creation of about 350 of these little guys, and they were a huge hit with the crowd!

![badge](http://i.imgur.com/vE073Ky.png?1)

## How It Works
We flashed simple Arduino code onto a ATtiny85's in order to sample the voltage level between a photocell and a resistor. The sampling had a period of around 50ms, or 20Hz. If it detected a change from light to dark in that time period, it would turn on and slowly fade out the LEDs. 

## To Do
- [ ] Swap from polling to interrupt code ( ISR ADC_vect)
- [ ] Add pin clasps to BOM somehow?
- [x] Edit PCB to properly handle SPDT switch (currently in parallel AKA useless)
- [x] Edit PCB to wire RESET to VDD (had to write it as GPIO, can't reflash, not the biggest problem)
