# ESP32_ADC_Calibration

ESP32 is a really useful, inexpensive and fun card for IOT project.
I used mainly the board for my master project, and used it for an connected healthcare device.
Main features:
* Dual-core 32-bit, ultra low power
* WiFi 802.11 b/g/n
* 12-bits ADC (18 channels)
* I2C
* [others](https://www.espressif.com/sites/default/files/documentation/esp32_technical_reference_manual_en.pdf)

<img src="/image/esp32.JPG" width="200" align="middle">  

However, during my experiment is encounter a non-linearity for the ADC reading value. This default was reported in the ESP forum ([post1](https://www.esp32.com/viewtopic.php?t=2881), [post2](https://www.esp32.com/viewtopic.php?f=12&t=2334&start=10))

# For my setting and hardware, the following image show the none-linearity:
<img src="/image/nonlin.JPG" width="700" align="middle"> 

# My solution was simple, and I just did an experimental linearization based on the measure:
<img src="/image/lin.JPG" width="700" align="middle"> 

I suspect to have to do the calibration again due to the time drifting, but hopefully, the great Espressif team will fixed the issue.
Do not hesitate if you have any question.
