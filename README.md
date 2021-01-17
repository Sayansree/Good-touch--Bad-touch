<h1 align="center">
  <br>
  <a href="https://https://sushreesatarupa.github.io/Good-touch--Bad-touch/"><img src="https://raw.githubusercontent.com/amitmerchant1990/pomolectron/master/app/res/pomolectron-transparent.png" alt="Dont touch us" width="400"></a>
  <br>
</h1>

<p align="center">
  <a href="https://badge.fury.io/js/pomolectron">
    VIDEO LINK
  </a>
  <br>
  <a href="https://chocolatey.org/packages/pomolectron">
    PPT LINK
  </a>
  
</p>


## Key Features

Features of our hardware project
1. Doll detects touches using switchs all over the body 
2. Upon detecting the touch it gives appropriate feedback to the user by giving visual feedback by lighting different colour led.
3. It also sends the touch type data to computer and can be displayed in serial Monitor.

Doll has push buttons attached to different parts of body and they are connected to microcontroller (Arduino Nano) touching different parts of body of the doll (here pressing the buttons associated with body parts), then sends feedback to microcontroller and it has 3 leds red, pink and green describing the type of touch respectively. 
If red lights glow it signifies it is a bad touch .
On other hand if pink glows it says touch is neighter bad nor good touch .
Good touches are indicated with green light.
When attached to a computer 🖥️ it also displays what kind of touch it is on serial monitor.

Parts used for the hardware model
1. Arduino Nano:
Reads all the switch state and switched appropriate leds on . And sends a message also over usb to computer which can be displayed in serial  monitor

2. Push buttons switch:
 To detect touch whenever anyone holds presses that area

3. Leds
To indicate the different types of touch as different colours.

We even have designed a web page describing more about good touch and bad touch. The website is built with the help of HTML, CSS, Bootstrap and JavaScript. We ensured that website is absolutely easy to use for children.


## Dark Mode

<div align="center"><img src="app/res/pomolectron-dark.png"></div>
  
## How To Use

To clone and run this application, you'll need [Git](https://git-scm.com) and [Node.js](https://nodejs.org/en/download/) (which comes with [npm](http://npmjs.com)) installed on your computer. From your command line


Note: If you're using Linux Bash for Windows, [see this guide](https://www.howtogeek.com/261575/how-to-run-graphical-linux-desktop-applications-from-windows-10s-bash-shell/) or use `node` from the command prompt.

## License

MIT

---
