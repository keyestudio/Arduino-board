# **Keyestudio Leonardo R3 Development Board**

## Introduction:

The keyestudio Leonardo is a microcontroller board based on the ATmega32u4
([datasheet](https://www.microchip.com/wwwproducts/en/atmega32u4)). It is an
easy-to-use open source hardware.

It has 20 digital input/output pins (of which 7 can be used as PWM outputs), 12
analog inputs, a 16 MHz crystal oscillator, a micro USB connection, a power
jack, an ICSP header, and a reset button.

It contains everything needed to support the microcontroller; simply connect it
to a computer with a USB cable or power it with a AC-to-DC adapter or battery to
get started.

Note that ICSP (In-Circuit Serial Programming) header can not only program the
firmware to Atmega32u4, but also be used as SPI communication interface.

The keyestudio Leonardo can be powered via the micro USB connection, or via an
external power supply jack (DC 7-12V) or even with female headers Vin /GND (DC
7-12V).

The Leonardo differs from other Arduino boards using separate USB-Serial chip in
that the ATmega32u4 has built-in USB communication, eliminating the need for a
secondary processor. This allows the Leonardo to appear to a connected computer
as a mouse and keyboard.

# TECH SPECS:

| **Microcontroller**             | Atmega32u4                                          |
|---------------------------------|-----------------------------------------------------|
| **Operating Voltage**           | 5V                                                  |
| **Input Voltage (recommended)** | DC7-12V                                             |
| **Digital I/O Pins**            | 20 (of which 7 provide PWM output)                  |
| **PWM Digital I/O Pins**        | 7                                                   |
| **Analog Input Pins**           | 12                                                  |
| **DC Current per I/O Pin**      | 40 mA                                               |
| **DC Current for 3.3V Pin**     | 50 mA                                               |
| **Flash Memory**                | 32 KB (Atmega32u4) of which 4 KB used by bootloader |
| **SRAM**                        | 2.5 KB (ATmega32u4)                                 |
| **EEPROM**                      | 1 KB (Atmega32u4)                                   |
| **Clock Speed**                 | 16 MHz                                              |
| **LED_BUILTIN**                 | D13                                                 |
| **Dimensions**                  | 71mm\*54mm\*15mm                                    |
| **Weight**                      | 18.4g                                               |

# Details:

-   PCB Dimensions: 71mm\*54mm\*15mm

-   Weight: 18.4g

![](media/d140caead9db0d624ff32585778bc726.jpeg)

# Element and Interfaces:

Here is an explanation of what every element and interface of the board does:

![](media/d1ddeb76c3e4446242e5fef6feeedf5e.jpeg)

# Specialized Functions of Some Pins:

| **Digital I/O pins**             |  D0-D13 and A0-A5 (D18-D23); Note that if the digital pins are not enough, the ICSP pins can be used as digital pins. MISO (D14); SCK(D15); MOSI (D16).                                                                                                                                                                                                                                                                                                                                                                                                                                   |
|----------------------------------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| **Analog Inputs**                |  A0-A5, A6-A11 (on digital pins 4, 6, 8, 9, 10, and 12). That is, D4 (A6)、D6 (A7)、D8 (A8)、D9 (A9)、D10 (A10) and D12 (A11).  Pins A0-A5 appear in the same locations as on the Uno; inputs A6-A11 are on digital i/o pins 4, 6, 8, 9, 10, and 12 respectively.  Each analog input provide 10 bits of resolution (i.e. 1024 different values). By default the analog inputs measure from ground to 5 volts, though is it possible to change the upper end of their range using the AREF pin and the [analogReference()](https://www.arduino.cc/en/Reference/AnalogReference) function.  |
| **PWM (Pulse-Width Modulation)** |  D3, D5, D6, D9, D10, D11 and D13. Provide 8-bit PWM output with the [analogWrite()](https://www.arduino.cc/en/Reference/AnalogWrite) function.                                                                                                                                                                                                                                                                                                                                                                                                                                           |
| **External**  **Interrupts**     |  D3 (interrupt 0); D2 (interrupt 1); D0 (interrupt 2), D1 (interrupt 3) and D7 (interrupt 4).  These pins can be configured to trigger an interrupt on a low value, a rising or falling edge, or a change in value. See the [attachInterrupt()](https://www.arduino.cc/reference/en/language/functions/external-interrupts/attachinterrupt/) function for details.                                                                                                                                                                                                                        |
| **Serial communication**         |  D0 (RX) and D1 (TX).                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     |
| **SPI communication**            |  On the ICSP header.  These pins support SPI communication using the [SPI library](https://www.arduino.cc/en/Reference/SPI).   Note: the SPI pins are not connected to any of the digital I/O pins as they are on the Uno. They are only available on the ICSP connector. This means that if you have a shield that uses SPI, but does NOT have a 6-pin ICSP connector that connects to the Leonardo's 6-pin ICSP header, the shield will not work.                                                                                                                                       |
| **AREF**                         |  Reference voltage for the analog inputs.  Used with [analogReference()](https://www.arduino.cc/en/Reference/AnalogReference).  Sometimes used to set the external reference voltage (0-5 volts) as the upper end of analog input pins.                                                                                                                                                                                                                                                                                                                                                   |
| **IOREF**                        |  The voltage at which the i/o pins of the board are operating (i.e. VCC for the board).  This is 5V on the Leonardo. Used to configure the operating voltage of microcontroller.                                                                                                                                                                                                                                                                                                                                                                                                          |

# Tips:

-   **Automatic (Software) Reset:**

    Rather then requiring a physical press of the reset button before an upload,
    the Arduino Nano is designed in a way that allows it to be reset by software
    running on a connected computer.

-   **USB Overcurrent Protection:**

    The Leonardo has a resettable polyfuse that protects your computer's USB
    ports from shorts and overcurrent. Although most computers provide their own
    internal protection, the fuse provides an extra layer of protection. If more
    than 500 mA is applied to the USB port, the fuse will automatically break
    the connection until the short or overload is removed.

# Detailed Use with ARDUINO Software as follows:

## Step1\| Download the Arduino IDE

When you get the board, first you should install the Arduino software and
driver.

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

**Introduction for Arduino IDE Toolbar:**

Double-click the icon of Arduino software downloaded, you will get the interface
shown below.

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

## Step2\| Installing the Driver

Installed well the Arduino, the next step is to install the driver. The Arduino
folder contains both the Arduino program itself and the drivers that allow the
Arduino to be connected to your computer with a USB cable.

![](media/bd93889abeed8f6b1c70b145de108d7d.png)

In different systems, the driver installation is similar. Here we start to
install the driver on the Win7 system.

Plug one end of your USB cable into the keyestudio Leonardo and the other into a
USB socket on your computer.

When you connect the board to your computer at the first time, right click your
“Computer” —\>for “Properties”—\> click the “Device manager”, under Other
devices, you should see the “Arduino Leonardo”.

![](media/b8320c3b3207a11b53a6def19efa3259.png)

<http://wiki.keyestudio.com/index.php/File:Driver_2.png>

Then right-click on the Arduino Leonardo and select the top menu option (Update
Driver Software...) shown as the figure below.

![](media/908d271f1c360454af2575b81f56bacb.png)

Then it will be prompted to either “Search Automatically for updated driver
software” or “Browse my computer for driver software”. Shown as below. In this
page, select “Browse my computer for driver software”.

![](media/99abb7f3d75942690132cb4a5c44ac4e.png)

After that, select the option to browse and navigate to the “drivers” folder.

![](media/be5ad7c5898b88e04f2a3b52aa6b4421.png)

Once the software has been installed, you will get a confirmation message.
Installation completed, click “Close”.
<http://wiki.keyestudio.com/index.php/File:Driver_6.png>

![](media/f165f58d9b997830eb90905126b1334d.png)

Up to now, the driver is installed well. Then you can right click “Computer”
—\>“Properties”—\>“Device manager”, you should see the device as the figure
shown below.

![](media/f1ae8d37b30209242cfaf5a804209fba.png)

## Step3\| Connect the board

Connect the Leonardo board to your computer using the USB cable. The power LED
should go on.

![](media/d82663c7707cd7bb3e2a23910b625a2c.jpeg)

## Step4\| Select the Arduino Board

Open the Arduino IDE, you’ll need to click the “Tools”, then select the Board
that corresponds to your Arduino.

![](media/32f262f2016e7127e35dfca89ec28dab.png)

![](media/5e53fb9b0f53488b6d7ce65d80f97f45.png)

## 

## Step5\| Select your serial port

Select the serial device of the Arduino board from the **Tools \| Serial Port
menu**. **Note:** to avoid errors, the COM Port should keep the same as the
Ports shown on Device Manager.

![](media/f1ae8d37b30209242cfaf5a804209fba.png)

**![](media/7464ebc4b1189a05aa721e97f18a14a9.png)**

## Step6\| Upload the Code

Below is an example code for displaying the Hello World!

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

![](media/672eb5c9d36e49c53dd2fd6d76d17487.png)

Then click verify button to check the errors. If compiling successfully, the
message "Done compiling." will appear in the status bar.

![](media/9b4615b8a51010dc22980ff8917ef402.png)

After that, click the “Upload” button to upload the code. If the upload is
successful, the message "Done uploading." will appear in the status bar.

![](media/510de7e29bbcab5df4729853cc889d4a.png)

## Step7\| Open the Serial Monitor

After that, click the button to open the serial monitor.

![](media/234db62b0165d3d9896b3ae5270c45cc.png)

Then set the baud rate to 9600, enter an “R” and click Send, that is, the
computer will send the character R. When the board receives it, you should see
the RX led on the board flash once, and then D13 led flash once; when keyestudio
Leonardo R3 board successfully sends "Hello World!" to the computer, you should
see the "Hello World!" is showed on the monitor, and TX led on the board flash
once.

**![](media/116ff705fd32776c66f79474763d64f1.png)**

# Package Included:

-   keyestudio Leonardo R3 board \* 1pcs

-   Black micro USB cable 1m \* 1pcs

![](media/ab2a791735357972e0ce19f0a6d225ca.jpeg)

# Resource Links:

You can download the datasheet from the link:

<https://drive.google.com/open?id=1fikRPqsniBHzVaAgCX0QBcCTpWg9BcQP>

You might also want to look at:

[the reference](http://arduino.cc/en/Reference/HomePage) for the Arduino
language;

Download ARDUINO Software:

[https://www.arduino.cc/en/Main/OldSoftwareReleases\#1.5.x](https://www.arduino.cc/en/Main/OldSoftwareReleases#1.5.x)

Or download the software and driver from the link below:

<https://drive.google.com/open?id=12D-JkXdNm03Qt4dlPQr3RP6OmgXqpvHc>

# Troubleshooting:

If you have problems, please see the [troubleshooting
suggestions](http://arduino.cc/en/Guide/Troubleshooting).
