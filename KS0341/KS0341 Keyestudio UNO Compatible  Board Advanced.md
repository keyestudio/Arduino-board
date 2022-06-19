

# **Keyestudio UNO Compatible Board Advanced**

**![](media/d804ec184a2ba69b0b507dbde4969d77.jpeg)**

## Introduction:

The keyestudio UNO compatible board Advanced is a microcontroller board based on
the ATmega328P
([datasheet](http://www.atmel.com/dyn/resources/prod_documents/doc8161.pdf)),
fully compatible with [keyestudio UNO R3
board](http://wiki.keyestudio.com/index.php/Ks0001_keyestudio_UNO_R3_BOARD) and
ARDUINO UNO REV3.

It has 14 digital input/output pins (of which 6 can be used as PWM outputs), 6
analog inputs, a 16 MHz quartz crystal, a USB connection, a power jack, 2 ICSP
headers and a reset button.

Note that the two ICSP headers are separately used to program the firmware to
ATMEGA16U2-MU and ATMEGA328P-PU, but generally the two chips have been
programmed well.

It contains everything needed to support the microcontroller; simply connect it
to a computer with a USB cable or power it via an external DC power jack (DC
7-12V) or via female headers Vin/ GND(DC 7-12V) to get started.

**Note:** the most important difference between this keyestudio UNO compatible
board Advanced and keyestudio UNO R3 board is the voltage regulator chip used in
the board.

The voltage regulator chip used in keyestudio UNO R3 board is NSP1117. When
connect an external power, output 5V, the drive current is 1A.

However, keyestudio UNO compatible board Advanced features the voltage-regulator
chip MP2307DN. When connect the external power, output 5V, the drive current can
be 2A.

The UNO is the best board to get started with electronics and coding. If this is
your first experience tinkering with the platform, the UNO is the most robust
board you can start playing with.

|                                        | keyestudio UNO compatible board Advanced  | keyestudio UNO R3 board |
|----------------------------------------|-------------------------------------------|-------------------------|
| **voltage-regulator chip**             | MP2307DN                                  | NSP1117                 |
| **Power Output**                       | 5V                                        | 5V                      |
| **Drive Current** **(external power)** | 2A                                        | 1A                      |
| **Drive Current** **(USB power)**      | 0.5A                                      | 0.5A                    |

**keyestudio UNO R3 board:**

![](media/505bf7d9227b8f377d6f00278616815f.jpeg)

**keyestudio UNO compatible board Advanced:**

![](media/49c7b5ed8d4cabb6da0898147bda8c63.jpeg)

# TECH SPECS:

| **Microcontroller**             | ATmega328P-PU                                            |
|---------------------------------|----------------------------------------------------------|
| **Operating Voltage**           | 5V                                                       |
| **Input Voltage (recommended)** | DC7-12V                                                  |
| **Digital I/O Pins**            | 14 (D0-D13)  (of which 6 provide PWM output)             |
| **PWM Digital I/O Pins**        | 6 (D3, D5, D6, D9, D10, D11)                             |
| **Analog Input Pins**           | 6 (A0-A5)                                                |
| **DC Current per I/O Pin**      | 20 mA                                                    |
| **DC Current for 3.3V Pin**     | 50 mA                                                    |
| **Flash Memory**                | 32 KB (ATmega328P-PU) of which 0.5 KB used by bootloader |
| **SRAM**                        | 2 KB (ATmega328P-PU)                                     |
| **EEPROM**                      | 1 KB (ATmega328P-PU)                                     |
| **Clock Speed**                 | 16 MHz                                                   |
| **LED_BUILTIN**                 | D13                                                      |

# Details:

-   Dimensions: 75mm x 54mm x 15mm

-   ![](media/a04e82b4e07485df355932927fc57598.jpeg)Weight: 27g

# Element and Interfaces:

Here is an explanation of what every element and interface of the board does:

![](media/72bd0ca455b4da6dbc08e7dcf21b9c92.jpeg)

|   ![](media/3bb1c25abe86a3f60ac7be228eee073a.png) | **ICSP (In-Circuit Serial Programming) Header** In most case, ICSP is the AVR, an Arduino micro-program header consisting of MOSI, MISO, SCK, RESET, VCC, and GND. It is often called the SPI (serial peripheral interface) and can be considered an "extension" of the output. In fact, slave the output devices under the SPI bus host. When connecting to PC, program the firmware to ATMEGA328P-PU. |
|---------------------------------------------------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| ![](media/90474bf3195205c042f837d56f7f5bc3.png)   | **Power LED Indicator** Powering the Arduino, LED on means that your circuit board is correctly powered on. If LED is off, connection is wrong.                                                                                                                                                                                                                                                         |
| ![](media/90a9ee4c95ce2062a0aba4ea4e6a966c.png)   | **Digital I/O** Arduino UNO has 14 digital input/output pins (of which 6 can be used as PWM outputs). These pins can be configured as digital input pin to read the logic value (0 or 1). Or used as digital output pin to drive different modules like LED, relay, etc. The pin labeled “〜” can be used to generate PWM.                                                                              |
| ![](media/9692086f6c487165f7745faae51ef11f.png)   | **GND ( Ground pin headers)** Used for circuit ground                                                                                                                                                                                                                                                                                                                                                   |
| ![](media/f4f88bf6bbad85b84c2c9ed66b358042.png)   | **AREF**  Reference voltage (0-5V) for analog inputs. Used with [analogReference()](https://www.arduino.cc/reference/en/language/functions/analog-io/analogreference/).                                                                                                                                                                                                                                 |
| ![](media/e1e2b5ea7dc64f0d3718d686f1900b00.png)   | **SDA** IIC communication pin                                                                                                                                                                                                                                                                                                                                                                           |
| ![](media/2111adc0fbd7859beb30059380236465.png)   | **SCL** IIC communication pin                                                                                                                                                                                                                                                                                                                                                                           |
| ![](media/9de1b27e2187eac0f881adec62fba633.png)   | **ICSP (In-Circuit Serial Programming) Header** In most case, ICSP is the AVR, an Arduino micro-program header consisting of MOSI, MISO, SCK, RESET, VCC, and GND. Connected to ATMEGA 16U2-MU. When connecting to PC, program the firmware to ATMEGA 16U2-MU.                                                                                                                                          |
| ![](media/2b17b0cf84a31ccc02181c4f4f98f297.png)   | **RESET Button** You can reset your Arduino board, for example, start the program from the initial status. You can use the RESET button.                                                                                                                                                                                                                                                                |
| ![](media/7f07f9d662bafeaae657330c523601b6.png)   | **D13 LED**  There is a built-in LED driven by digital pin 13. When the pin is HIGH value, the LED is on, when the pin is LOW, it's off.                                                                                                                                                                                                                                                                |
|  ![](media/298bdd01b65872b389f57bfc11c26905.png)  | **USB Connection** Arduino board can be powered via USB connector.  All you needed to do is connecting the USB port to PC using a USB cable.                                                                                                                                                                                                                                                            |
| ![](media/f0471c9f339df5933afe68e6daa0853b.png)   | **ATMEGA 16U2-MU**  USB to serial chip, can convert the USB signal into serial port signal.                                                                                                                                                                                                                                                                                                             |
|  ![](media/aa9a27dba1b083f18f7251deeab2839b.png)  | **TX LED** Onboard you can find the label: TX (transmit) When Arduino board communicates via serial port, send the message, TX led flashes.                                                                                                                                                                                                                                                             |
| ![](media/595d159e619fce1eb4e3d31d57439ef3.png)   | **RX LED** Onboard you can find the label: RX(receive ) When Arduino board communicates via serial port, receive the message, RX led flashes.                                                                                                                                                                                                                                                           |
| ![](media/bdd3025540a33f0a9dd6205bf375a603.png)   | **Crystal Oscillator** How does Arduino calculate time? by using a crystal oscillator. The number printed on the top of the Arduino crystal is 16.000H9H. It tells us that the frequency is 16,000,000 Hertz or 16MHz.                                                                                                                                                                                  |
| ![](media/ee8c12ee2e2a4bba0a07339c335e07c9.png)   | **Voltage Regulator** Convert an external input DC7-12V voltage into DC 5V, then switch DC 5V to the processor and other components. Output DC 5V, the drive current is 2A.                                                                                                                                                                                                                             |
| ![](media/36ac45df4db3ae6ea2ec409c26177c68.png)   | **DC Power Jack** Arduino board can be supplied with an external power DC7-12V from the DC power jack.                                                                                                                                                                                                                                                                                                  |
| ![](media/f005354fbb7cc7a7f74c84f2b4d32aa3.png)   | **IOREF**  Used to configure the operating voltage of microcontrollers. Use it less.                                                                                                                                                                                                                                                                                                                    |
| ![](media/ca4ffeaccf51ddc9148844b0a0b785c0.png)   | **RESET Header**  Connect an external button to reset the board. The function is the same as reset button (labeled 9)                                                                                                                                                                                                                                                                                   |
| ![](media/acd4248a7de9ea9001fff564675b0f17.png)   | **Power Pin 3V3** A 3.3 volt supply generated by the on-board regulator. Maximum current draw is 50 mA.                                                                                                                                                                                                                                                                                                 |
| ![](media/0ed701382f464cb6943b88ad111f8af1.png)   | **Power Pin 5V** Provides 5V output voltage                                                                                                                                                                                                                                                                                                                                                             |
| ![](media/70983783eac48007fb2b60d204a5febc.png)   | **Vin**  You can supply an external power input DC7-12V through this pin to Arduino board.                                                                                                                                                                                                                                                                                                              |
|   ![](media/ec24832167fa80b09cf01c8c4c9be5a2.png) | **Analog Pins** Arduino UNO board has 6 analog inputs, labeled A0 through A5.  These pins can read the signal from analog sensors (such as humidity sensor or temperature sensor), and convert it into the digital value that can read by microcontrollers) Can also used as digital pins, A0=D14, A1=D15, A2=D16, A3=D17, A4=D18, A5=D19.                                                              |
|   ![](media/ba0adaf292c71dd1a69521743a7f961e.png) | **Microcontroller**  Each Arduino board has its own microcontroller. You can regard it as the brain of your board. The main IC (integrated circuit) on the Arduino is slightly different from the panel pair. Microcontrollers are usually from ATMEL. Before you load a new program on the Arduino IDE, you must know what IC is on your board. This information can be checked at the top of IC.      |

![](media/988b8466fe14175abf73e3e05a17d64c.jpeg)

# Specialized Functions of Some Pins:

-   **Serial communication:**  Digital pins 0 (RX) and 1 (TX).

-   **PWM Interfaces (Pulse-Width Modulation):** D3, D5, D6, D9, D10, D11

-   **External Interrupts:** D2 (interrupt 0) and D3 (interrupt 1). These pins
    can be configured to trigger an interrupt on a low value, a rising or
    falling edge, or a change in value.

-   **SPI communication:** D10 (SS), D11 (MOSI), D12 (MISO), D13 (SCK). These
    pins support SPI communication using the SPI library.

-   **IIC communication:**  A4 (SDA); A5(SCL)

# Tips:

-   Automatic (Software) Reset:

    Rather than requiring a physical press of the reset button before an upload,
    the Arduino Uno board is designed in a way that allows it to be reset by
    software running on a connected computer.

-   The Uno board contains a trace that can be cut to disable the auto-reset.
    The pads on either side of the trace can be soldered together to re-enable
    it. It's labeled "RESET-EN". You may also be able to disable the auto-reset
    by connecting a 110 ohm resistor from 5V to the reset line; see [this forum
    thread](http://forum.arduino.cc/index.php/topic,22974.0.html) for details.

# Detailed Use with ARDUINO Software as follows:

## Step1\| Download the Arduino environment (IDE)

When you get the UNO advanced board, first you should install the Arduino
software and driver.

We usually use the Windows software Arduino 1.5.6 version. You can download it
from the link below:

[https://www.arduino.cc/en/Main/OldSoftwareReleases\#1.5.x](https://www.arduino.cc/en/Main/OldSoftwareReleases#1.5.x)

Or you can browse the ARDUINO website to download the latest version from this
link, <https://www.arduino.cc>, pop up the following interface.

![](media/03bcbac0c292a11cc4969884a260c24e.png)

Then click the **SOFTWARE** on the browse bar, you will have two options ONLINE
TOOLS and DOWNLOADS.

![](media/c4beb46eae68ef824353b8cc72a19768.png)

Click **DOWNLOADS**, it will appear the latest software version of ARDUINO 1.8.5
shown as below.

![](media/95bb95aac8d2e5b92e8bfb5f6d3c3177.png)

In this software page, on the right side you can see the version of development
software for different operating systems. ARDUINO has a powerful compatibility.
You should download the software that is compatible with the operating system of
your computer.

We will take **WINDOWS system** as an example here. There are also two options
under Windows system, one is installed version, the other is non-installed
version.

For simple installed version, first click **Windows Installer**, you will get
the following page.

![](media/87d68bf0f659efd12d5a2421f3b0985b.jpeg)

![](media/81ed11f0705f918d1457cb772e41719f.png)

This way you just need to click JUST DOWNLOAD, then click the downloaded file to
install it.

For non-installed version, first click Windows ZIP file, you will also get the
pop-up interface as the above figure.

Click JUST DOWNLOAD, and when the ZIP file is downloaded well to your computer,
you can directly unzip the file and click the icon of ARDUINO software to start
it.

**Installing Arduino (Windows):**

Install Arduino with the exe. Installation package downloaded well.

![](media/0410a9a2e63c51fee1d04b59041a2884.jpeg)

Click *“I Agree”* to see the following interface.

![](media/7bbc90969d7a44f397e0d63428e87c82.jpeg)

Click *“Next”*. Pop up the interface below.

![](media/567d62b3dfce772c3e969c653651f6ad.jpeg)

You can press Browse… to choose an installation path or directly type in the
directory you want. Then click “Install” to initiate installation.

![](media/69d2c16b683d24d8c03109c853905f97.jpeg)

Wait for the installing process, if appear the interface of Window Security,
just continue to click Install to finish the installation.

![](media/4201c1f8cfe13dad71fac63ae275820c.png)

**Installing Driver:**

Next, we will introduce the driver installation of UNO R3 development board. The
driver installation may have slight differences in different computer systems.
So in the following let’s move on to the driver installation in the WIN 7
system.

The Arduino folder contains both the Arduino program itself and the drivers that
allow the Arduino to be connected to your computer by a USB cable. Before we
launch the Arduino software, you are going to install the USB drivers.

![](media/bd93889abeed8f6b1c70b145de108d7d.png)

Plug one end of your USB cable into the Arduino and the other into a USB socket
on your computer.

When you connect UNO board to your computer at the first time, right click the
icon of your *“Computer” —\>for “Properties”—\> click the “Device manager”*,
under “Other Devices”, you should see an icon for “Unknown device” with a little
yellow warning triangle next to it. This is your Arduino.

![](media/27f6de2d3f0125ed978586e8b99b2033.png)

Then right-click on the device and select the top menu option (Update Driver
Software...) shown as the figure below.

![](media/8ac7d3085c739ec9c9a89151be325dc9.png)

It will then be prompted to either “Search Automatically for updated driver
software” or “Browse my computer for driver software”. Shown as below. In this
page, select “Browse my computer for driver software”.

![](media/31fdd7c7d5c23f2aced927993c8314cd.png)

After that, select the option to browse and navigate to the “drivers” folder of
Arduino installation.

![](media/4a638bb3e87737db0a4795418dcf9cf3.jpeg)

Click “Next” and you may get a security warning, if so, allow the software to be
installed. Shown as below.

![](media/3b743c92f153068c5417126e25e9ef88.png)

Installation completed, click “Close”.

![](media/4ed2b0f5f38a5f9dbd667146f96740e3.png)

Up to now, the driver is installed well. Then you can right click *“Computer”
—\>“Properties”—\>“Device manager”*, you should see the device shown below.

![](media/42b28476abc3d8b9b8845afb71a3a466.png)

**Introduction for Arduino IDE Toolbar:**

Double-click the icon of Arduino software downloaded well, you will get the
interface shown below.

![](media/2fbd15be3868df7eb1654b0981c34f79.png)

(Note: if the Arduino software loads in the wrong language, you can change it in
the preferences dialog. See [the environment
page](http://arduino.cc/en/Guide/Environment#languages) for details.)

![](media/c9727104a8861d23c03723bd629509a1.png)

The functions of each button on the Toolbar are listed below:
<http://wiki.keyestudio.com/index.php/File:IDE.png>

![](media/29f46713e687c2599b13e9f612d39bc9.png)

| **![](media/4e25ec81facd0a9de45e48138cb17bbb.png)**  **Verify/Compile** | Check the code for errors                           |
|-------------------------------------------------------------------------|-----------------------------------------------------|
| **![](media/e0a80f9e708873ec352697c610864b37.png)**  **Upload**         | Upload the current Sketch to the Arduino            |
| **![](media/f1458edbef80c7786dd4c23a5af3f8e8.png)** **New**             | Create a new blank Sketch                           |
| **![](media/1a16bf9f039e242fcceba567b52675d5.png)** **Open**            | Show a list of Sketches                             |
| **![](media/258e5f7024d8d3e095499b67c72974ae.png)** **Save**            | Save the current Sketch                             |
| **![](media/08794db4162e505053e39fafd259e971.png)** **Serial Monitor**  | Display the serial data being sent from the Arduino |

## Step2\| Connect the board

Connect the UNO board to your computer using the USB cable. The green power LED
should go on.

![](media/09eb650657b05828f97083ce4365ba55.jpeg)

## Step3\| Select the Arduino Board

Open the Arduino IDE, you’ll need to click the “Tools”, then select the Board
that corresponds to your Arduino.

![](media/5a8c8873c38b42bc15079e87892a8c93.png)

## Step4\| Select your serial port

Select the serial device of the Arduino board from the **Tools \| Serial Port
menu**. This is likely to be COM3 or higher (COM1and COM2 are usually reserved
for hardware serial ports). To find out, you can disconnect your Arduino board
and re-open the menu; the entry that disappears should be the Arduino board.
Reconnect the board and select that serial port.

![](media/c19faf822e9009d065235de63b408960.png)

**Note:** to avoid errors, the COM Port should keep the same as the Ports shown
on Device Manager.

![](media/42b28476abc3d8b9b8845afb71a3a466.png)

![](media/b6a6259722d7d07b8ecb4f92f1862142.png)

## Step5\| Upload the Program

Below is an example program for displaying the Hello World!

Copy and paste the code to the Arduino environment IDE.

**///////////////////////////////////////////////////////////////////////////////////////////////**

int val;

int ledpin=13;

void setup()

{

Serial.begin(9600);

pinMode(ledpin,OUTPUT);

}

void loop()

{

val=Serial.read();

if(val=='R')

{

digitalWrite(ledpin,HIGH);

delay(500);

digitalWrite(ledpin,LOW);

delay(500);

Serial.println("Hello World!");

}

}

**///////////////////////////////////////////////////////////////////////////////////////////////**

Then click verify button to check the errors. If compiling successfully, the
message "Done compiling." will appear in the status bar.

![](media/44e8356462a29eccef8144f812ca640d.png)

After that, click the “Upload” button to upload the code. Wait a few seconds -
you should see the RX and TX leds on the board flashing. If the upload is
successful, the message "Done uploading." will appear in the status bar.

![](media/44e8356462a29eccef8144f812ca640d.png)

## Step6\| Open the Serial Monitor

After that, click the serial monitor button to open the serial monitor.

![](media/3b5e49114b0ba399112a3c63836b8754.png)

Then set the baud rate as 9600, enter an “R” and click Send, you should see the
RX led on the board blink once, and then D13 led blink once, finally "Hello
World!" is showed on the monitor, the TX led blink once.

![](media/ac92cfda71208d789cf0246a7da75c35.png)

# Package Included:

-   Keyestudio UNO Advanced board \* 1pcs

-   USB cable \* 1pcs

**![](media/679b9cc59aede8808283698d7e313855.jpeg)**

# Other Links:

You might also want to look at:

[the examples](http://arduino.cc/en/Tutorial/HomePage) for using various sensors
and actuators;

[the reference](http://arduino.cc/en/Reference/HomePage) for the Arduino
language;

You can download the datasheet from the link:

<https://drive.google.com/open?id=1t6mqdd4EUA4kvwIJrRG-VHU2H9iZEJHF>

Software Download:

<https://drive.google.com/open?id=12D-JkXdNm03Qt4dlPQr3RP6OmgXqpvHc>

# Troubleshooting:

If you have problems, please see the [troubleshooting
suggestions](http://arduino.cc/en/Guide/Troubleshooting).